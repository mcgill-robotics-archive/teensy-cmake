import_arduino_library(Servo)
import_arduino_library(SPI)

set(ROS_LIB_DIRECTORY "/home/david/ros_lib")
include_directories(${ROS_LIB_DIRECTORY})
FILE(GLOB_RECURSE ros_src 
    "${ROS_LIB_DIRECTORY}/*.c" 
    "${ROS_LIB_DIRECTORY}/*.cpp" 
    "${ROS_LIB_DIRECTORY}/*.h")

add_library(ros ${ros_src})

add_sketches()
