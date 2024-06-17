#ifndef TESTING_ROS__VISIBILITY_CONTROL_H_
#define TESTING_ROS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TESTING_ROS_EXPORT __attribute__ ((dllexport))
    #define TESTING_ROS_IMPORT __attribute__ ((dllimport))
  #else
    #define TESTING_ROS_EXPORT __declspec(dllexport)
    #define TESTING_ROS_IMPORT __declspec(dllimport)
  #endif
  #ifdef TESTING_ROS_BUILDING_LIBRARY
    #define TESTING_ROS_PUBLIC TESTING_ROS_EXPORT
  #else
    #define TESTING_ROS_PUBLIC TESTING_ROS_IMPORT
  #endif
  #define TESTING_ROS_PUBLIC_TYPE TESTING_ROS_PUBLIC
  #define TESTING_ROS_LOCAL
#else
  #define TESTING_ROS_EXPORT __attribute__ ((visibility("default")))
  #define TESTING_ROS_IMPORT
  #if __GNUC__ >= 4
    #define TESTING_ROS_PUBLIC __attribute__ ((visibility("default")))
    #define TESTING_ROS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TESTING_ROS_PUBLIC
    #define TESTING_ROS_LOCAL
  #endif
  #define TESTING_ROS_PUBLIC_TYPE
#endif
#endif  // TESTING_ROS__VISIBILITY_CONTROL_H_
// Generated 15-Jun-2024 04:09:56
 