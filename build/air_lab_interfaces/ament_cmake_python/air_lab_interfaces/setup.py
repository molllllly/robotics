from setuptools import find_packages
from setuptools import setup

setup(
    name='air_lab_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('air_lab_interfaces', 'air_lab_interfaces.*')),
)
