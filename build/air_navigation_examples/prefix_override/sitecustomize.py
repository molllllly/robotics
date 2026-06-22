import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/leime957/TDDE05/ros2_ws/install/air_navigation_examples'
