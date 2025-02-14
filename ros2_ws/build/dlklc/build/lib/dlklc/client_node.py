#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from dlklc.srv import SetCoordinates

class CoordinateClient(Node):
    def __init__(self):
        super().__init__('coordinate_client')
        self.cli = self.create_client(SetCoordinates, 'set_coordinates')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Servis bekleniyor...')
            
    def send_coordinates(self):
        while rclpy.ok():
            try:
                x = float(input("X koordinatını girin: "))
                y = float(input("Y koordinatını girin: "))
                req = SetCoordinates.Request()
                req.x = x
                req.y = y
                future = self.cli.call_async(req)
                rclpy.spin_until_future_complete(self, future)
                if future.result().success:
                    self.get_logger().info('Koordinatlar başarıyla gönderildi!')
                else:
                    self.get_logger().error('Koordinat gönderilemedi!')
            except ValueError:
                self.get_logger().error('Geçersiz giriş! Sayısal değer girin.')
            except KeyboardInterrupt:
                self.get_logger().info('Kullanıcı tarafından sonlandırıldı')
                break

def main(args=None):
    rclpy.init(args=args)
    client = CoordinateClient()
    client.send_coordinates()
    rclpy.shutdown()

if __name__ == '__main__':
    main()