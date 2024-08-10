from setuptools import find_packages
from setuptools import setup

setup(
    name='vacuum_cleaner_robot_custom_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('vacuum_cleaner_robot_custom_interfaces', 'vacuum_cleaner_robot_custom_interfaces.*')),
)
