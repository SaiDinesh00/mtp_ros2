//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_ros2.h
//
// Code generated for Simulink model 'testing_ros2'.
//
// Model version                  : 1.3
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Sat Jun 15 05:56:31 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_testing_ros2_h_
#define RTW_HEADER_testing_ros2_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "slros2_initialize.h"
#include "testing_ros2_types.h"

extern "C"
{

#include "rtGetNaN.h"

}

#include <float.h>

extern "C"
{

#include "rt_nonfinite.h"

}

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
struct B_testing_ros2_T {
  SL_Bus_sensor_msgs_Imu In1;          // '<S4>/In1'
  SL_Bus_sensor_msgs_Imu b_varargout_2;
  SL_Bus_sensor_msgs_MagneticField In1_a;// '<S5>/In1'
  SL_Bus_sensor_msgs_MagneticField b_varargout_2_m;
  real_T Phi;                          // '<S6>/Atan1'
  real_T Theta;                        // '<S6>/Atan2'
  real_T Atan2;                        // '<Root>/Atan2'
};

// Block states (default storage) for system '<Root>'
struct DW_testing_ros2_T {
  ros_slros2_internal_block_Sub_T obj; // '<S2>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_g;// '<S1>/SourceBlock'
  struct {
    void *LoggedData[3];
  } Scope_PWORK;                       // '<Root>/Scope'

  int8_T EnabledSubsystem_SubsysRanBC; // '<S2>/Enabled Subsystem'
  int8_T EnabledSubsystem_SubsysRanBC_j;// '<S1>/Enabled Subsystem'
};

// Parameters (default storage)
struct P_testing_ros2_T_ {
  real_T NormalizeVector_maxzero;     // Mask Parameter: NormalizeVector_maxzero
                                         //  Referenced by: '<S7>/Switch'

  SL_Bus_sensor_msgs_Imu Out1_Y0;      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S4>/Out1'

  SL_Bus_sensor_msgs_Imu Constant_Value;// Computed Parameter: Constant_Value
                                           //  Referenced by: '<S1>/Constant'

  SL_Bus_sensor_msgs_MagneticField Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                //  Referenced by: '<S5>/Out1'

  SL_Bus_sensor_msgs_MagneticField Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                       //  Referenced by: '<S2>/Constant'

  real_T Constant_Value_h;             // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S6>/Gain'

};

// Real-time Model Data Structure
struct tag_RTM_testing_ros2_T {
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
    uint32_T clockTick1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_testing_ros2_T testing_ros2_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_testing_ros2_T testing_ros2_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_testing_ros2_T testing_ros2_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void testing_ros2_initialize(void);
  extern void testing_ros2_step(void);
  extern void testing_ros2_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_testing_ros2_T *const testing_ros2_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
//  '<Root>' : 'testing_ros2'
//  '<S1>'   : 'testing_ros2/Subscribe'
//  '<S2>'   : 'testing_ros2/Subscribe1'
//  '<S3>'   : 'testing_ros2/Subsystem'
//  '<S4>'   : 'testing_ros2/Subscribe/Enabled Subsystem'
//  '<S5>'   : 'testing_ros2/Subscribe1/Enabled Subsystem'
//  '<S6>'   : 'testing_ros2/Subsystem/Subsystem'
//  '<S7>'   : 'testing_ros2/Subsystem/Subsystem/Normalize Vector'

#endif                                 // RTW_HEADER_testing_ros2_h_

//
// File trailer for generated code.
//
// [EOF]
//
