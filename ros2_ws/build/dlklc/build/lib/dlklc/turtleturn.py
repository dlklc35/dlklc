#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.srv import Spawn, Kill
from turtlesim.msg import Pose
import math
import random

class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')
        
        self.main_turtle_pose = None
        self.target_turtle_pose = None
        self.target_turtle_name = None
        self.is_killing = False  # Yeni flag

        self.pose_subscriber = self.create_subscription(
            Pose, '/turtle1/pose', self.main_turtle_pose_callback, 10)
        self.velocity_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Kontrol parametreleri
        self.angular_tolerance = 0.01
        self.distance_tolerance = 0.1
        self.angular_velocity_gain = 2.0
        self.linear_velocity_gain = 1.5

        self.spawn_target_turtle()

    def main_turtle_pose_callback(self, msg):
        self.main_turtle_pose = msg
        if self.target_turtle_pose and not self.is_killing:
            self.control_turtle_movement()

    def spawn_target_turtle(self):
        client = self.create_client(Spawn, 'spawn')
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Spawn servisi bekleniyor...')
        
        request = Spawn.Request()
        request.x = random.uniform(2.0, 8.0)
        request.y = random.uniform(2.0, 8.0)
        request.theta = 0.0
        
        future = client.call_async(request)
        future.add_done_callback(lambda f: self.handle_spawn_response(f, request.x, request.y))

    def handle_spawn_response(self, future, x, y):
        try:
            response = future.result()
            self.get_logger().info(f'Hedef oluşturuldu: {response.name}')
            self.target_turtle_name = response.name
            self.target_turtle_pose = Pose(x=x, y=y, theta=0.0)
        except Exception as e:
            self.get_logger().error(f'Spawn hatası: {e}')

    def control_turtle_movement(self):
        angle_to_target = math.atan2(
            self.target_turtle_pose.y - self.main_turtle_pose.y,
            self.target_turtle_pose.x - self.main_turtle_pose.x
        )
        angle_diff = self.normalize_angle(angle_to_target - self.main_turtle_pose.theta)
        distance = math.hypot(
            self.target_turtle_pose.x - self.main_turtle_pose.x,
            self.target_turtle_pose.y - self.main_turtle_pose.y
        )

        twist = Twist()
        if abs(angle_diff) > self.angular_tolerance:
            twist.angular.z = self.angular_velocity_gain * angle_diff
        elif distance > self.distance_tolerance:
            twist.linear.x = self.linear_velocity_gain * distance
        else:
            self.remove_target_turtle()
        
        self.velocity_publisher.publish(twist)

    def remove_target_turtle(self):
        if self.target_turtle_name and not self.is_killing:
            self.is_killing = True  # Bayrağı ayarla
            client = self.create_client(Kill, 'kill')
            client.wait_for_service()
            request = Kill.Request(name=self.target_turtle_name)
            future = client.call_async(request)
            future.add_done_callback(self.handle_kill_response)

    def handle_kill_response(self, future):
        try:
            future.result()
            self.get_logger().info(f'{self.target_turtle_name} başarıyla silindi.')
        except Exception as e:
            self.get_logger().error(f'Kill hatası: {e}')
        finally:
            self.is_killing = False
            self.target_turtle_name = None
            self.target_turtle_pose = None
            self.spawn_target_turtle()

    def normalize_angle(self, angle):
        return (angle + math.pi) % (2 * math.pi) - math.pi

def main(args=None):
    rclpy.init(args=args)
    controller = TurtleController()
    rclpy.spin(controller)
    controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()