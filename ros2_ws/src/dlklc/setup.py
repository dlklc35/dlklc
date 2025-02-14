from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'dlklc'

launch_files = glob(os.path.join('launch','*.launch.py'))

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), launch_files),
        (os.path.join('share', package_name, 'srv'), glob('srv/*.srv')),
        (os.path.join('share', package_name, 'msg'), glob('msg/*.msg'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='demirhan',
    maintainer_email='demirhan@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "turtle_move = dlklc.turtle_move:main ",
            "client_node = dlklc.client_node:main",
            "randomturtlemessages = dlklc.randomturtlemessages:main",

        ],
    },
)
