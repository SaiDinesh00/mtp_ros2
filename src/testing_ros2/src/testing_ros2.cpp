//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_ros2.cpp
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
#include "testing_ros2.h"
#include "testing_ros2_types.h"
#include <math.h>
#include "testing_ros2_private.h"
#include "rtwtypes.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rt_defines.h"
#include "testing_ros2_dt.h"

// Block signals (default storage)
B_testing_ros2_T testing_ros2_B;

// Block states (default storage)
DW_testing_ros2_T testing_ros2_DW;

// Real-time model
RT_MODEL_testing_ros2_T testing_ros2_M_ = RT_MODEL_testing_ros2_T();
RT_MODEL_testing_ros2_T *const testing_ros2_M = &testing_ros2_M_;

// Forward declaration for local functions
static void testing_ros2_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj);
static void testing_ros2_SystemCore_setup_a(ros_slros2_internal_block_Sub_T *obj);
static void rate_scheduler(void);

//
//         This function updates active task flag for each subrate.
//         The function is called at model base rate, hence the
//         generated code self-manages all its subrates.
//
static void rate_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (testing_ros2_M->Timing.TaskCounters.TID[1])++;
  if ((testing_ros2_M->Timing.TaskCounters.TID[1]) > 4) {// Sample time: [0.05s, 0.0s] 
    testing_ros2_M->Timing.TaskCounters.TID[1] = 0;
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void testing_ros2_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[10];
  static const char_T b_zeroDelimTopic_0[10] = "/imu/data";

  // Start for MATLABSystem: '<S1>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S1>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 10; i++) {
    // Start for MATLABSystem: '<S1>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_ros2_2.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void testing_ros2_SystemCore_setup_a(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[10];
  static const char_T b_zeroDelimTopic_0[10] = "/mag/data";

  // Start for MATLABSystem: '<S2>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S2>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 10; i++) {
    // Start for MATLABSystem: '<S2>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_ros2_3.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void testing_ros2_step(void)
{
  real_T rtb_Gain;
  real_T rtb_Switch_idx_0;
  real_T rtb_Switch_idx_1;
  real_T rtb_Switch_idx_2;
  boolean_T b_varargout_1;

  // Reset subsysRan breadcrumbs
  srClearBC(testing_ros2_DW.EnabledSubsystem_SubsysRanBC_j);

  // Reset subsysRan breadcrumbs
  srClearBC(testing_ros2_DW.EnabledSubsystem_SubsysRanBC);

  // MATLABSystem: '<S1>/SourceBlock'
  b_varargout_1 = Sub_testing_ros2_2.getLatestMessage
    (&testing_ros2_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S4>/Enable'

  // Start for MATLABSystem: '<S1>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S4>/In1'
    testing_ros2_B.In1 = testing_ros2_B.b_varargout_2;
    srUpdateBC(testing_ros2_DW.EnabledSubsystem_SubsysRanBC_j);
  }

  // End of Start for MATLABSystem: '<S1>/SourceBlock'
  // End of Outputs for SubSystem: '<S1>/Enabled Subsystem'

  // Sum: '<S7>/Sum of Elements' incorporates:
  //   Math: '<S7>/Math Function'
  //   SignalConversion generated from: '<S7>/Math Function'

  rtb_Gain = (testing_ros2_B.In1.linear_acceleration.x *
              testing_ros2_B.In1.linear_acceleration.x +
              testing_ros2_B.In1.linear_acceleration.y *
              testing_ros2_B.In1.linear_acceleration.y) +
    testing_ros2_B.In1.linear_acceleration.z *
    testing_ros2_B.In1.linear_acceleration.z;

  // Math: '<S7>/Math Function1' incorporates:
  //   Sum: '<S7>/Sum of Elements'
  //
  //  About '<S7>/Math Function1':
  //   Operator: sqrt

  if (rtb_Gain < 0.0) {
    rtb_Gain = -sqrt(fabs(rtb_Gain));
  } else {
    rtb_Gain = sqrt(rtb_Gain);
  }

  // End of Math: '<S7>/Math Function1'

  // Switch: '<S7>/Switch' incorporates:
  //   Constant: '<S7>/Constant'
  //   Product: '<S7>/Product'
  //   SignalConversion generated from: '<S7>/Math Function'

  if (rtb_Gain > testing_ros2_P.NormalizeVector_maxzero) {
    rtb_Switch_idx_0 = testing_ros2_B.In1.linear_acceleration.x;
    rtb_Switch_idx_1 = testing_ros2_B.In1.linear_acceleration.y;
    rtb_Switch_idx_2 = testing_ros2_B.In1.linear_acceleration.z;
  } else {
    rtb_Switch_idx_0 = testing_ros2_B.In1.linear_acceleration.x * 0.0;
    rtb_Switch_idx_1 = testing_ros2_B.In1.linear_acceleration.y * 0.0;
    rtb_Switch_idx_2 = testing_ros2_B.In1.linear_acceleration.z * 0.0;
    rtb_Gain = testing_ros2_P.Constant_Value_h;
  }

  // End of Switch: '<S7>/Switch'

  // Product: '<S7>/Divide'
  rtb_Switch_idx_1 /= rtb_Gain;
  rtb_Switch_idx_2 /= rtb_Gain;

  // Trigonometry: '<S6>/Atan1' incorporates:
  //   Gain: '<S6>/Gain'
  //   Math: '<S6>/Square'
  //   Math: '<S6>/Square1'
  //   Product: '<S7>/Divide'
  //   Sqrt: '<S6>/Sqrt'
  //   Sum: '<S6>/Add'

  testing_ros2_B.Phi = rt_atan2d_snf(rtb_Switch_idx_0 / rtb_Gain *
    testing_ros2_P.Gain_Gain, sqrt(rtb_Switch_idx_1 * rtb_Switch_idx_1 +
    rtb_Switch_idx_2 * rtb_Switch_idx_2));

  // Trigonometry: '<S6>/Atan2'
  testing_ros2_B.Theta = rt_atan2d_snf(rtb_Switch_idx_1, rtb_Switch_idx_2);
  if (testing_ros2_M->Timing.TaskCounters.TID[1] == 0) {
    // MATLABSystem: '<S2>/SourceBlock'
    b_varargout_1 = Sub_testing_ros2_3.getLatestMessage
      (&testing_ros2_B.b_varargout_2_m);

    // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S5>/Enable'

    // Start for MATLABSystem: '<S2>/SourceBlock'
    if (b_varargout_1) {
      // SignalConversion generated from: '<S5>/In1'
      testing_ros2_B.In1_a = testing_ros2_B.b_varargout_2_m;
      srUpdateBC(testing_ros2_DW.EnabledSubsystem_SubsysRanBC);
    }

    // End of Start for MATLABSystem: '<S2>/SourceBlock'
    // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'

    // Trigonometry: '<Root>/Atan2'
    testing_ros2_B.Atan2 = rt_atan2d_snf(testing_ros2_B.In1_a.magnetic_field.x,
      testing_ros2_B.In1_a.magnetic_field.y);
  }

  // External mode
  rtExtModeUploadCheckTrigger(2);

  {                                    // Sample time: [0.01s, 0.0s]
    rtExtModeUpload(0, (real_T)testing_ros2_M->Timing.taskTime0);
  }

  if (testing_ros2_M->Timing.TaskCounters.TID[1] == 0) {// Sample time: [0.05s, 0.0s] 
    rtExtModeUpload(1, (real_T)((testing_ros2_M->Timing.clockTick1) * 0.05));
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.01s, 0.0s]
    if ((rtmGetTFinal(testing_ros2_M)!=-1) &&
        !((rtmGetTFinal(testing_ros2_M)-testing_ros2_M->Timing.taskTime0) >
          testing_ros2_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(testing_ros2_M, "Simulation finished");
    }

    if (rtmGetStopRequested(testing_ros2_M)) {
      rtmSetErrorStatus(testing_ros2_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  testing_ros2_M->Timing.taskTime0 =
    ((time_T)(++testing_ros2_M->Timing.clockTick0)) *
    testing_ros2_M->Timing.stepSize0;
  if (testing_ros2_M->Timing.TaskCounters.TID[1] == 0) {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    testing_ros2_M->Timing.clockTick1++;
  }

  rate_scheduler();
}

// Model initialize function
void testing_ros2_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(testing_ros2_M, -1);
  testing_ros2_M->Timing.stepSize0 = 0.01;

  // External mode info
  testing_ros2_M->Sizes.checksums[0] = (1170434309U);
  testing_ros2_M->Sizes.checksums[1] = (1876506821U);
  testing_ros2_M->Sizes.checksums[2] = (2511949354U);
  testing_ros2_M->Sizes.checksums[3] = (875880899U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    testing_ros2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &testing_ros2_DW.EnabledSubsystem_SubsysRanBC_j;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)&testing_ros2_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(testing_ros2_M->extModeInfo,
      &testing_ros2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(testing_ros2_M->extModeInfo,
                        testing_ros2_M->Sizes.checksums);
    rteiSetTPtr(testing_ros2_M->extModeInfo, rtmGetTPtr(testing_ros2_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    testing_ros2_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 27;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  // SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S4>/In1' incorporates:
  //   Outport: '<S4>/Out1'

  testing_ros2_B.In1 = testing_ros2_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S5>/In1' incorporates:
  //   Outport: '<S5>/Out1'

  testing_ros2_B.In1_a = testing_ros2_P.Out1_Y0_f;

  // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

  // Start for MATLABSystem: '<S1>/SourceBlock'
  testing_ros2_SystemCore_setup(&testing_ros2_DW.obj_g);

  // Start for MATLABSystem: '<S2>/SourceBlock'
  testing_ros2_SystemCore_setup_a(&testing_ros2_DW.obj);
}

// Model terminate function
void testing_ros2_terminate(void)
{
  // Terminate for MATLABSystem: '<S1>/SourceBlock'
  if (!testing_ros2_DW.obj_g.matlabCodegenIsDeleted) {
    testing_ros2_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/SourceBlock'

  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  if (!testing_ros2_DW.obj.matlabCodegenIsDeleted) {
    testing_ros2_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SourceBlock'
}

//
// File trailer for generated code.
//
// [EOF]
//
