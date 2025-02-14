#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn
from getirkurye.msg import TurtleInfo
import random
import time

class TurtleSpawner(Node):
    def __init__(self):
        super().__init__('turtle_spawner')

        self.spawn_turtle_client = self.create_client(Spawn, 'spawn')
        while not self.spawn_turtle_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Servis bekleniyor...')

        
        self.publisher = self.create_publisher(TurtleInfo, 'turtle_info', 10)

        
        self.timer = self.create_timer(1.0, self.spawn_turtle_callback)

    def spawn_turtle_callback(self):
        x = random.uniform(2.0, 9.0)
        y = random.uniform(2.0, 9.0)
        theta = random.uniform(0.0, 2 * 3.14159)
        name = f'turtle_{time.time_ns()}'

        request = Spawn.Request()
        request.x = x
        request.y = y
        request.theta = theta
        request.name = name

        future = self.spawn_turtle_client.call_async(request)
        future.add_done_callback(lambda future: self.spawn_turtle_result_callback(future, x, y, theta, name))

    def spawn_turtle_result_callback(self, future, x, y, theta, name):
        try:
            response = future.result()
            self.get_logger().info(f'Kaplumbağa oluşturuldu: {name}')

            msg = TurtleInfo()
            msg.name = name
            msg.x = x
            msg.y = y
            msg.theta = theta
            self.publisher.publish(msg)
        except Exception as e:
            self.get_logger().error(f'Hata: {e}')

def main(args=None):
    rclpy.init(args=args)
    turtle_spawner = TurtleSpawner()
    rclpy.spin(turtle_spawner)
    rclpy.shutdown()

if __name__ == '__main__':
    main()