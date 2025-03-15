from setuptools import find_packages
from setuptools import setup

setup(
    name='chat_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('chat_interfaces', 'chat_interfaces.*')),
)
