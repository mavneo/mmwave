from setuptools import find_packages
from setuptools import setup

setup(
    name='ti_mmwave_rospkg_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('ti_mmwave_rospkg_msgs', 'ti_mmwave_rospkg_msgs.*')),
)
