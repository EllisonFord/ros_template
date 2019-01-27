cmake_minimum_required(VERSION 2.8.3)
project(ros_template) #TODO: change this

add_compile_options(-std=c++17)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  # any ROS dependancy packages go here
)

# add_message_files(
#   FILES
#   Message1.msg
#   Message2.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
# generate_messages(
#   DEPENDENCIES
#   std_msgs
# )

catkin_package()

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/main.cpp src/other.cpp include/include.h src/other.cpp) #TODO: Change main and other names
add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES})

