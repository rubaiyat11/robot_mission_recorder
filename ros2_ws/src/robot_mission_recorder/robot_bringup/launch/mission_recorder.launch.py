from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    
    config_dir = os.path.join(get_package_share_directory("robot_bringup"), "config")

    mission_type_arg = DeclareLaunchArgument(
        "mission_type", default_value="patrol",
        description="Type of mission"
    )
    step_delay_arg = DeclareLaunchArgument(
        "step_delay", default_value="1.0",
        description="Delay"
    )
    mission_type_config = LaunchConfiguration("mission_type")
    step_delay_config = LaunchConfiguration("step_delay")

    executor_node = Node(
        package="mission_executor_node",
        executable="executor_cpp",
        name="mission_executor_node",
        parameters=[
            os.path.join(config_dir, "exec_params.yaml"),
            {"step_delay": step_delay_config}
        ]
    )
    monitor_node = Node(
        package="mission_monitor_node",
        executable="monitor_py",
        name="mission_monitor_node",
        parameters=[
            os.path.join(config_dir, "moni_params.yaml"),
            {"mission_type": mission_type_config}
        ]
    )
    recorder_node = Node(
        package="bag_recorder_node",
        executable="bag_recorder_node",
        name="bag_recorder_node",
        parameters=[os.path.join(config_dir, "bag_params.yaml")]
    )

    return LaunchDescription([
        mission_type_arg,
        step_delay_arg,
        executor_node,
        monitor_node,
        recorder_node
    ])