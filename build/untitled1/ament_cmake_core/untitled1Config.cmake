# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_untitled1_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED untitled1_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(untitled1_FOUND FALSE)
  elseif(NOT untitled1_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(untitled1_FOUND FALSE)
  endif()
  return()
endif()
set(_untitled1_CONFIG_INCLUDED TRUE)

# output package information
if(NOT untitled1_FIND_QUIETLY)
  message(STATUS "Found untitled1: 1.0.0 (${untitled1_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'untitled1' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${untitled1_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(untitled1_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${untitled1_DIR}/${_extra}")
endforeach()
