from setuptools import setup
import os
from glob import glob

package_name = 'my_ahrs'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='your_name',
    maintainer_email='your_email@example.com',
    description='EKF Orientation Estimator using ROS 2',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ekf_node = my_ahrs.ekf_node:main',
            'mad_node = my_ahrs.madgwick_node:main',
            'cf_node = my_ahrs.complementary_filter:main'
        ],
    },
)