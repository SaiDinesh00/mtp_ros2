from setuptools import find_packages
from setuptools import setup

setup(
    name='aerobot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('aerobot_interfaces', 'aerobot_interfaces.*')),
)
