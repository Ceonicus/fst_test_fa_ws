from setuptools import find_packages
from setuptools import setup

setup(
    name='rg75_300_gripper',
    version='0.1.0',
    packages=find_packages(
        include=('rg75_300_gripper', 'rg75_300_gripper.*')),
)
