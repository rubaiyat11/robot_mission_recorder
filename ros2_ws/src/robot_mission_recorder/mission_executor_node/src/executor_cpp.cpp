#include "rclcpp/rclcpp.hpp"
#include "robot_interface/action/execute_mission.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "std_msgs/msg/string.hpp"
#include <memory>
#include <vector>
#include <string>
#include <thread>

class MissionExecuteNode : public rclcpp::Node{
public:
    using ExecuteMission = robot_interface::action::ExecuteMission;
    using GoalHandleMission = rclcpp_action::ServerGoalHandle<ExecuteMission>;

   explicit MissionExecuteNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("mission_execute_node", options){

        status_publisher = this->create_publisher<std_msgs::msg::String>("mission_status", 10);
        
        this->declare_parameter("step_delay", 1.0);
        this->declare_parameter("mission_types", std::vector<std::string>{"patrol", "inspect", "deliver"});

        step_delay = this->get_parameter("step_delay").as_double();
        mission_types = this->get_parameter("mission_types").as_string_array();

        this->execute_server = rclcpp_action::create_server<ExecuteMission>(
            this, "execute_mission",
            std::bind(&MissionExecuteNode::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MissionExecuteNode::handle_cancel, this, std::placeholders::_1),
            std::bind(&MissionExecuteNode::handle_accepted, this, std::placeholders::_1)
        );
    }
    
private:
    double step_delay;
    std::vector<std::string> mission_types;

    rclcpp_action::Server<ExecuteMission>::SharedPtr execute_server;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr status_publisher;

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const ExecuteMission::Goal> goal){
            if(goal->mission_type == "patrol" || goal->mission_type == "inspect" || goal->mission_type == "deliver"){
                (void)uuid;
                return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
            }else{
                RCLCPP_INFO(this->get_logger(), "Invalid mission type");
                return rclcpp_action::GoalResponse::REJECT;
            }
        }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleMission> goal_handle){
            RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
            (void)goal_handle;
            return rclcpp_action::CancelResponse::ACCEPT;
        }
    
    void handle_accepted(const std::shared_ptr<GoalHandleMission> goal_handle){
        std::thread{std::bind(&MissionExecuteNode::execute, this, std::placeholders::_1), goal_handle}.detach();
    }

    void execute(const std::shared_ptr<GoalHandleMission> goal_handle){
        RCLCPP_INFO(this->get_logger(), "Executing goal");
        rclcpp::Rate loop_rate(1.0/step_delay);

        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<ExecuteMission::Feedback>();
        auto result = std::make_shared<ExecuteMission::Result>();

        std::vector<std::string> steps;
        if (goal->mission_type == "patrol") {
            steps = {"Initializing systems", "Moving to waypoint A", "Scanning sector", "Moving to waypoint B", "Returning to base"};
        } else if (goal->mission_type == "inspect") {
            steps = {"Arrived at site", "Deploying sensors", "Capturing images", "Analyzing data", "Securing site"};
        } else {
            steps = {"Loading package", "Navigating to drop-off", "Package delivered", "Confirming receipt", "Returning to depot"};
        }
        
        for(int i = 0; i < 5; i++){
            if(goal_handle->is_canceling()){
                result->success = false;
                result->summary = "Mission Aborted by User";
                goal_handle->canceled(result);
                RCLCPP_INFO(this->get_logger(), "Goal canceled");
                return;
            }
            feedback->progress_percent = ((i + 1) * 100.0f) / 5.0f;
            feedback->steps_completed = i + 1;
            feedback->current_step = steps[i];
            goal_handle->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(), "Publish feedback");

            auto status_msg = std_msgs::msg::String();
            status_msg.data = "Robot is currently: " + feedback->current_step;
            status_publisher->publish(status_msg);

            loop_rate.sleep();
        }

        if (rclcpp::ok()) {
            result->success = true;
            result->summary = "Steps Completed";
            goal_handle->succeed(result);
            RCLCPP_INFO(this->get_logger(), "Goal succeeded");
        }
    }

};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MissionExecuteNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}