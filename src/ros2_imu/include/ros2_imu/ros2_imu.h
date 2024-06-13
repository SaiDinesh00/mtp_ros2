//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ros2_imu.h
//
// Code generated for Simulink model 'ros2_imu'.
//
// Model version                  : 1.6
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Wed Jun 12 03:21:05 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ros2_imu_h_
#define RTW_HEADER_ros2_imu_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "slros2_initialize.h"
#include "ros2_imu_types.h"
#include <float.h>
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

// Block signals (default storage)
struct B_ros2_imu_T {
  SL_Bus_geometry_msgs_Vector3 In1;    // '<S3>/In1'
  real_T x;
  real_T y;
  real_T z;
};

// Block states (default storage) for system '<Root>'
struct DW_ros2_imu_T {
  ros_slros2_internal_block_Sub_T obj; // '<S2>/SourceBlock'
  struct {
    void *LoggedData[3];
  } Scope_PWORK;                       // '<S1>/Scope'

  int8_T EnabledSubsystem_SubsysRanBC; // '<S2>/Enabled Subsystem'
};

// Parameters (default storage)
struct P_ros2_imu_T_ {
  SL_Bus_geometry_msgs_Vector3 Out1_Y0;// Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S3>/Out1'

  SL_Bus_geometry_msgs_Vector3 Constant_Value;// Computed Parameter: Constant_Value
                                                 //  Referenced by: '<S2>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_ros2_imu_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_ros2_imu_T ros2_imu_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_ros2_imu_T ros2_imu_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_ros2_imu_T ros2_imu_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void ros2_imu_initialize(void);
  extern void ros2_imu_step(void);
  extern void ros2_imu_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_ros2_imu_T *const ros2_imu_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Pitch motor' : Unused code path elimination
//  Block '<Root>/Yaw Motor' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ros2_imu'
//  '<S1>'   : 'ros2_imu/Sensor'
//  '<S2>'   : 'ros2_imu/Sensor/Subscribe'
//  '<S3>'   : 'ros2_imu/Sensor/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_ros2_imu_h_

//
// File trailer for generated code.
//
// [EOF]
//
