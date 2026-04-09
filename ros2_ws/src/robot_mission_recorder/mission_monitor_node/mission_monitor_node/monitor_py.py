import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float32
from rclpy.action import ActionClient
from robot_interface.action import ExecuteMission

class MissionMonitorNode(Node):
    def __init__(self):
        super().__init__("mission_monitor_node")

        self.mission_progress = self.create_publisher(Float32, "/robot/mission_progress", 10)
        self.mission_alerts = self.create_publisher(String, "/robot/mission_alerts", 10)

        self._action_client = ActionClient(self, ExecuteMission, "execute_mission")

        self.declare_parameter("mission_type", "patrol")
        self.declare_parameter("mission_duration", 10.0)

        self.last_threshold = 0

        mission_type = self.get_parameter("mission_type").value
        mission_duration = self.get_parameter("mission_duration").value
        self.send_goal(mission_type, mission_duration)



    def send_goal(self, mission_type, mission_duration):
        goal_msg = ExecuteMission.Goal()
        goal_msg.mission_type = mission_type
        goal_msg.duration_seconds = mission_duration

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("Goal Rejected (client side)")
            return
        
        self.get_logger().info("Goal Accepted (client side)")

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        if result.success:
            self.get_logger().info("Goal succeded (client side)")
        else:
            self.get_logger().info("Goal failed (client side)")
    
    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f"Feedback received: {feedback_msg.feedback.progress_percent}%")
        feedback = feedback_msg.feedback
        progress = feedback.progress_percent

        msg = Float32()
        msg.data = float(progress)
        self.mission_progress.publish(msg)
        
        thresholds = [25, 50, 75, 100]
        for t in thresholds:
            if progress >= t > self.last_threshold:
                alert = String()
                alert.data = f"Mission {t}% complete"
                self.mission_alerts.publish(alert)
                self.last_threshold = t
                break


def main(args=None):
    rclpy.init(args=args)
    node = MissionMonitorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()