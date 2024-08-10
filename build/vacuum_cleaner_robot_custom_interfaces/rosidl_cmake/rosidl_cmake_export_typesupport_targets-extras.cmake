# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:vacuum_cleaner_robot_custom_interfaces__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:vacuum_cleaner_robot_custom_interfaces__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:vacuum_cleaner_robot_custom_interfaces__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:vacuum_cleaner_robot_custom_interfaces__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:vacuum_cleaner_robot_custom_interfaces__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:vacuum_cleaner_robot_custom_interfaces__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:vacuum_cleaner_robot_custom_interfaces__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:vacuum_cleaner_robot_custom_interfaces__rosidl_typesupport_cpp;__rosidl_generator_py:vacuum_cleaner_robot_custom_interfaces__rosidl_generator_py")

# populate vacuum_cleaner_robot_custom_interfaces_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "vacuum_cleaner_robot_custom_interfaces::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'vacuum_cleaner_robot_custom_interfaces' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND vacuum_cleaner_robot_custom_interfaces_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
