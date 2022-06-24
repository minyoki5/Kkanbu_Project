# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "message_generation;roscpp;std_msgs;sensor_msgs;cv_bridge;image_transport;darknet_ros_msgs;ublox_msgs;ublox_gps".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lkkanbu_sensor;-lopencv".split(';') if "-lkkanbu_sensor;-lopencv" != "" else []
PROJECT_NAME = "kkanbu_sensor"
PROJECT_SPACE_DIR = "/usr/local"
PROJECT_VERSION = "0.0.0"
