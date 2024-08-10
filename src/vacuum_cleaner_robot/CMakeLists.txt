cmake_minimum_required(VERSION 3.8)
project(vacuum_cleaner_robot)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(behaviortree_cpp_v3 REQUIRED)
find_package(vacuum_cleaner_robot_custom_interfaces REQUIRED)

include_directories(include)

add_executable(navigator_node src/navigator.cpp)
ament_target_dependencies(navigator_node rclcpp vacuum_cleaner_robot_custom_interfaces geometry_msgs)

add_executable(avoidance_server src/obstacle_avoidance_server.cpp)
ament_target_dependencies(avoidance_server rclcpp vacuum_cleaner_robot_custom_interfaces geometry_msgs sensor_msgs)

install(TARGETS
  navigator_node
  avoidance_server
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
