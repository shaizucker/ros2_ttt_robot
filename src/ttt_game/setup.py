from setuptools import setup

package_name = 'ttt_game'

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
    maintainer_email='your_email@example.com',
    description='Tic Tac Toe game logic node',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ttt_game_node = ttt_game.game_node:main',
        ],
    },
)

