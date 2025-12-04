from setuptools import setup

package_name = 'ttt_ik'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your@email.com',
    description='IK solver for Tic Tac Toe robot',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ik_server = ttt_ik.ik_server:main',
        ],
    },
)
