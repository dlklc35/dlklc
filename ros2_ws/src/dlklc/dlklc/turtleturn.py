#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.srv import Spawn, Kill
from turtlesim.msg import Pose
import math
import random

class KaplumbagaKontrolcu(Node):
    def __init__(self):
        super().__init__('kaplumbaga_kontrolcu')
        
        self.ana_kaplumbaga_pozisyonu = None
        self.hedef_kaplumbaga_pozisyonu = None
        self.hedef_kaplumbaga_adi = None
        self.olduruluyor_mu = False

        self.pozisyon_abone = self.create_subscription(
            Pose, '/turtle1/pose', self.ana_kaplumbaga_pozisyonu_callback, 10)
        self.hiz_yayinci = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        self.acisal_tol = 0.01
        self.mesafe_tol = 0.1
        self.acisal_hiz_katsayisi = 2.0
        self.dogrusal_hiz_katsayisi = 2.0

        self.hedef_kaplumbaga_yarat()

    def ana_kaplumbaga_pozisyonu_callback(self, msg):
        self.ana_kaplumbaga_pozisyonu = msg
        if self.hedef_kaplumbaga_pozisyonu and not self.olduruluyor_mu:
            self.kaplumbaga_hareket_kontrolu()

    def hedef_kaplumbaga_yarat(self):
        istemci = self.create_client(Spawn, 'spawn')
        while not istemci.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Spawn servisi bekleniyor...')
        
        istek = Spawn.Request()
        istek.x = random.uniform(2.0, 8.0)
        istek.y = random.uniform(2.0, 8.0)
        istek.theta = 0.0
        
        gelecek = istemci.call_async(istek)
        gelecek.add_done_callback(lambda f: self.spawn_cevap_isle(f, istek.x, istek.y))

    def spawn_cevap_isle(self, gelecek, x, y):
        try:
            cevap = gelecek.result()
            self.get_logger().info(f'Hedef olusturuldu: {cevap.name}')
            self.hedef_kaplumbaga_adi = cevap.name
            self.hedef_kaplumbaga_pozisyonu = Pose(x=x, y=y, theta=0.0)
        except Exception as e:
            self.get_logger().error(f'Spawn hatasi: {e}')

    def kaplumbaga_hareket_kontrolu(self):
        hedef_acisi = math.atan2(
            self.hedef_kaplumbaga_pozisyonu.y - self.ana_kaplumbaga_pozisyonu.y,
            self.hedef_kaplumbaga_pozisyonu.x - self.ana_kaplumbaga_pozisyonu.x
        )
        aci_farki = self.aci_normalize(hedef_acisi - self.ana_kaplumbaga_pozisyonu.theta)
        mesafe = math.hypot(
            self.hedef_kaplumbaga_pozisyonu.x - self.ana_kaplumbaga_pozisyonu.x,
            self.hedef_kaplumbaga_pozisyonu.y - self.ana_kaplumbaga_pozisyonu.y
        )

        hiz = Twist()
        if abs(aci_farki) > self.acisal_tol:
            hiz.angular.z = self.acisal_hiz_katsayisi * aci_farki
        elif mesafe > self.mesafe_tol:
            hiz.linear.x = self.dogrusal_hiz_katsayisi * mesafe
        else:
            self.hedef_kaplumbaga_sil()
        
        self.hiz_yayinci.publish(hiz)

    def hedef_kaplumbaga_sil(self):
        if self.hedef_kaplumbaga_adi and not self.olduruluyor_mu:
            self.olduruluyor_mu = True
            istemci = self.create_client(Kill, 'kill')
            istemci.wait_for_service()
            istek = Kill.Request(name=self.hedef_kaplumbaga_adi)
            gelecek = istemci.call_async(istek)
            gelecek.add_done_callback(self.kill_cevap_isle)

    def kill_cevap_isle(self, gelecek):
        try:
            gelecek.result()
            self.get_logger().info(f'{self.hedef_kaplumbaga_adi} basariyla silindi.')
        except Exception as e:
            self.get_logger().error(f'Kill hatasi: {e}')
        finally:
            self.olduruluyor_mu = False
            self.hedef_kaplumbaga_adi = None
            self.hedef_kaplumbaga_pozisyonu = None
            self.hedef_kaplumbaga_yarat()

    def aci_normalize(self, aci):
        return (aci + math.pi) % (2 * math.pi) - math.pi

def main(args=None):
    rclpy.init(args=args)
    kontrolcu = KaplumbagaKontrolcu()
    rclpy.spin(kontrolcu)
    kontrolcu.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
