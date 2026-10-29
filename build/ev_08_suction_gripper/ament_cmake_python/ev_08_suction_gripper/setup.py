from setuptools import find_packages
from setuptools import setup

setup(
    name='ev_08_suction_gripper',
    version='0.1.0',
    packages=find_packages(
        include=('ev_08_suction_gripper', 'ev_08_suction_gripper.*')),
)
