# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_calibrate_gyro_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED calibrate_gyro_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(calibrate_gyro_FOUND FALSE)
  elseif(NOT calibrate_gyro_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(calibrate_gyro_FOUND FALSE)
  endif()
  return()
endif()
set(_calibrate_gyro_CONFIG_INCLUDED TRUE)

# output package information
if(NOT calibrate_gyro_FIND_QUIETLY)
  message(STATUS "Found calibrate_gyro: 1.0.0 (${calibrate_gyro_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'calibrate_gyro' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${calibrate_gyro_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(calibrate_gyro_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${calibrate_gyro_DIR}/${_extra}")
endforeach()
