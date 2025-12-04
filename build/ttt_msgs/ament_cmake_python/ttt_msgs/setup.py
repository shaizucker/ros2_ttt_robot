from setuptools import find_packages
from setuptools import setup

setup(
    name='ttt_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ttt_msgs', 'ttt_msgs.*')),
)
