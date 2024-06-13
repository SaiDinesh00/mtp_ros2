#ifndef ROS2_IMU__VISIBILITY_CONTROL_H_
#define ROS2_IMU__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROS2_IMU_EXPORT __attribute__ ((dllexport))
    #define ROS2_IMU_IMPORT __attribute__ ((dllimport))
  #else
    #define ROS2_IMU_EXPORT __declspec(dllexport)
    #define ROS2_IMU_IMPORT __declspec(dllimport)
  #endif
  #ifdef ROS2_IMU_BUILDING_LIBRARY
    #define ROS2_IMU_PUBLIC ROS2_IMU_EXPORT
  #else
    #define ROS2_IMU_PUBLIC ROS2_IMU_IMPORT
  #endif
  #define ROS2_IMU_PUBLIC_TYPE ROS2_IMU_PUBLIC
  #define ROS2_IMU_LOCAL
#else
  #define ROS2_IMU_EXPORT __attribute__ ((visibility("default")))
  #define ROS2_IMU_IMPORT
  #if __GNUC__ >= 4
    #define ROS2_IMU_PUBLIC __attribute__ ((visibility("default")))
    #define ROS2_IMU_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define ROS2_IMU_PUBLIC
    #define ROS2_IMU_LOCAL
  #endif
  #define ROS2_IMU_PUBLIC_TYPE
#endif
#endif  // ROS2_IMU__VISIBILITY_CONTROL_H_
// Generated 12-Jun-2024 03:21:13
 