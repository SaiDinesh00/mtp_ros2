//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ros2_imu.cpp
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
#include "ros2_imu.h"
#include "ros2_imu_types.h"
#include "rtwtypes.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>
#include "ros2_imu_private.h"
#include "ros2_imu_dt.h"

// Block signals (default storage)
B_ros2_imu_T ros2_imu_B;

// Block states (default storage)
DW_ros2_imu_T ros2_imu_DW;

// Real-time model
RT_MODEL_ros2_imu_T ros2_imu_M_ = RT_MODEL_ros2_imu_T();
RT_MODEL_ros2_imu_T *const ros2_imu_M = &ros2_imu_M_;

// Forward declaration for local functions
static void ros2_imu_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj);
static void ros2_imu_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[7];
  static const char_T b_zeroDelimTopic_0[7] = "/euler";

  // Start for MATLABSystem: '<S2>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S2>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 7; i++) {
    // Start for MATLABSystem: '<S2>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_ros2_imu_107.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void ros2_imu_step(void)
{
  SL_Bus_geometry_msgs_Vector3 b_varargout_2;
  boolean_T b_varargout_1;

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.EnabledSubsystem_SubsysRanBC);

  // MATLABSystem: '<S2>/SourceBlock'
  b_varargout_1 = Sub_ros2_imu_107.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S3>/Enable'

  // Start for MATLABSystem: '<S2>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S3>/In1'
    ros2_imu_B.In1 = b_varargout_2;
    srUpdateBC(ros2_imu_DW.EnabledSubsystem_SubsysRanBC);
  }

  // End of Start for MATLABSystem: '<S2>/SourceBlock'
  // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'

  // SignalConversion generated from: '<S1>/Bus Selector'
  ros2_imu_B.x = ros2_imu_B.In1.x;

  // SignalConversion generated from: '<S1>/Bus Selector'
  ros2_imu_B.y = ros2_imu_B.In1.y;

  // SignalConversion generated from: '<S1>/Bus Selector'
  ros2_imu_B.z = ros2_imu_B.In1.z;

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                                    // Sample time: [0.005s, 0.0s]
    rtExtModeUpload(0, (real_T)ros2_imu_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.005s, 0.0s]
    if ((rtmGetTFinal(ros2_imu_M)!=-1) &&
        !((rtmGetTFinal(ros2_imu_M)-ros2_imu_M->Timing.taskTime0) >
          ros2_imu_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(ros2_imu_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ros2_imu_M)) {
      rtmSetErrorStatus(ros2_imu_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ros2_imu_M->Timing.taskTime0 =
    ((time_T)(++ros2_imu_M->Timing.clockTick0)) * ros2_imu_M->Timing.stepSize0;
}

// Model initialize function
void ros2_imu_initialize(void)
{
  // Registration code
  rtmSetTFinal(ros2_imu_M, -1);
  ros2_imu_M->Timing.stepSize0 = 0.005;

  // External mode info
  ros2_imu_M->Sizes.checksums[0] = (3110076876U);
  ros2_imu_M->Sizes.checksums[1] = (674803477U);
  ros2_imu_M->Sizes.checksums[2] = (2497739396U);
  ros2_imu_M->Sizes.checksums[3] = (831593601U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    ros2_imu_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&ros2_imu_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ros2_imu_M->extModeInfo,
      &ros2_imu_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ros2_imu_M->extModeInfo, ros2_imu_M->Sizes.checksums);
    rteiSetTPtr(ros2_imu_M->extModeInfo, rtmGetTPtr(ros2_imu_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    ros2_imu_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 21;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S3>/In1' incorporates:
  //   Outport: '<S3>/Out1'

  ros2_imu_B.In1 = ros2_imu_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

  // Start for MATLABSystem: '<S2>/SourceBlock'
  ros2_imu_SystemCore_setup(&ros2_imu_DW.obj);
}

// Model terminate function
void ros2_imu_terminate(void)
{
  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  if (!ros2_imu_DW.obj.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SourceBlock'
}

//
// File trailer for generated code.
//
// [EOF]
//
