#!/usr/bin/env python3
import rclpy 
from rclpy.node import Node
from geometry_msgs.msg import Twist


class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')

        self.publisher_=self.create_publisher(Twist,'/turtle1/cmd_vel',10)

        self.x=0.0
        self.y=0.0

        self.timer=self.create_timer(1.0,self.timer_callback)

    def timer_callback(self):

        self.x=float(input("Turtle için X koordinatını girin : "))
        self.y=float(input("Turtle için Y koordinatını girin : "))

        msg = Twist()

        msg.linear.x=self.x
        msg.angular.z=self.y

        self.publisher_.publish(msg)
        self.get_logger().info(f'Published x = {self.x}, y = {self.y}')
    
def main(args=None):
        rclpy.init(args=args)
        turtle_controller= TurtleController()

        rclpy.spin(turtle_controller)

        rclpy.shutdown()
