import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float32
from rclpy.serialization import serialize_message
import rosbag2_py
import os
import time

class BagRecorderNode(Node):
    def __init__(self):
        super().__init__("bag_recorder_node")

        self.declare_parameter("bag_output_path", "~/ros2_ws/mission_bags/")
        raw_path = self.get_parameter("bag_output_path").value
        self.bag_output_path = os.path.expanduser(raw_path)

        alert = self.create_subscription(String, "/robot/mission_alerts", self.alerts_callback, 10)
        progress = self.create_subscription(Float32, "/robot/mission_progress", self.progress_callback, 10)

        self.is_recording = False   
        self.message_queue = []
        self.writer = None
        self.timer = self.create_timer(0.1, self.timer_checks)

    def start_bag(self, bag_output_path):
        self.writer = rosbag2_py.SequentialWriter()

        storage_options = rosbag2_py.StorageOptions(
            uri= bag_output_path,
            storage_id= "sqlite3")
        converter_options = rosbag2_py.ConverterOptions("","")
        self.writer.open(storage_options, converter_options)

        progress_topic = rosbag2_py.TopicMetadata(
            name="/robot/mission_progress",
            type="std_msgs/msg/Float32",
            serialization_format = "cdr"
        )
        alerts_topic = rosbag2_py.TopicMetadata(
            name = "/robot/mission_alerts",
            type="std_msgs/msg/String",
            serialization_format= "cdr"
        )
        self.writer.create_topic(progress_topic)
        self.writer.create_topic(alerts_topic)

    def alerts_callback(self, msg):
        if("50%" in msg.data and not self.is_recording):
            self.get_logger().info("Trigger reached! Starting bag...")
            timestamp = time.strftime("%Y%m%d-%H%M%S")
            unique_path = os.path.join(self.bag_output_path, f"mission_{timestamp}")
            self.start_bag(unique_path)
            self.is_recording = True
        if("100%" in msg.data and self.is_recording):
            self.get_logger().info("Mission complete! Closing bag...")
            self.is_recording = False
            self.writer = None
        if(self.is_recording):
            self.message_queue.append(("/robot/mission_alerts", msg))
    
    def progress_callback(self, msg):
        if self.is_recording:
            self.message_queue.append(("/robot/mission_progress", msg))

    def timer_checks(self): 
        while self.message_queue:
            topic_name, msg = self.message_queue.pop(0)
            if self.writer:
                self.writer.write(
                    topic_name,
                    serialize_message(msg),
                    self.get_clock().now().nanoseconds)
    

def main(args=None):
    rclpy.init(args=args)
    node = BagRecorderNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()