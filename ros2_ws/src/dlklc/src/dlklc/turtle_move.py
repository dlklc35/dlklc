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
        self.y_ulasildi=False
        self.x_ulasildi=False

        self.timer=self.create_timer(1.0,self.timer_callback)

    def timer_callback(self):
        msg = Twist()
        
        if not self.x_ulasildi:
             self.x=float(input("Turtle için X koordinatını girin : "))
             msg.linear.x=self.x
             self.publisher_.publish(msg)
             self.get_logger().info(f'Published X hareketi : {self.x}')
             self.x_ulasildi=True
        elif self.x_ulasildi and not self.y_ulasildi:
             self.y=float(input("Turtle için Y koordinatını girin : "))
             msg.linear.x=0.0
             msg.linear.y=self.y
             self.publisher_.publish(msg)
             self.get_logger().info(f'Published Y hareketi : {self.y}')
             self.y_ulasildi=True

        if self.x_ulasildi and self.y_ulasildi:
            self.x_ulasildi = False
            self.y_ulasildi = False
            self.get_logger().info("Koordinatlar tamamlandı. Yeni koordinatlar girilebilir.")

        msg.linear.y=self.y

def main(args=None):
        rclpy.init(args=args)
        turtle_controller= TurtleController()

        rclpy.spin(turtle_controller)

        rclpy.shutdown()
