# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_gazebo_msgs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED gazebo_msgs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(gazebo_msgs_FOUND FALSE)
  elseif(NOT gazebo_msgs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(gazebo_msgs_FOUND FALSE)
  endif()
  return()
endif()
set(_gazebo_msgs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT gazebo_msgs_FIND_QUIETLY)
  message(STATUS "Found gazebo_msgs: 3.9.0 (${gazebo_msgs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "This package has been deprecated as of January 2025 with Gazebo classic 11 reaching
      end-of-life. Users are highly encouraged to migrate to the new Gazebo
      using our migration guides (https://gazebosim.org/docs/latest/gazebo_classic_migration)" STREQUAL "")
  set(_msg "Package 'gazebo_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "This package has been deprecated as of January 2025 with Gazebo classic 11 reaching
      end-of-life. Users are highly encouraged to migrate to the new Gazebo
      using our migration guides (https://gazebosim.org/docs/latest/gazebo_classic_migration)" STREQUAL "TRUE")
    set(_msg "${_msg} (This package has been deprecated as of January 2025 with Gazebo classic 11 reaching
      end-of-life. Users are highly encouraged to migrate to the new Gazebo
      using our migration guides (https://gazebosim.org/docs/latest/gazebo_classic_migration))")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${gazebo_msgs_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(gazebo_msgs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "gazebo_msgs-extras.cmake;rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${gazebo_msgs_DIR}/${_extra}")
endforeach()
