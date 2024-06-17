//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_ros.cpp
//
// Code generated for Simulink model 'testing_ros'.
//
// Model version                  : 1.2
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Sat Jun 15 04:09:45 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "testing_ros.h"
#include "testing_ros_types.h"
#include <math.h>
#include "testing_ros_private.h"
#include <emmintrin.h>
#include "rtwtypes.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rt_defines.h"
#include "testing_ros_dt.h"

// Block signals (default storage)
B_testing_ros_T testing_ros_B;

// Block states (default storage)
DW_testing_ros_T testing_ros_DW;

// Real-time model
RT_MODEL_testing_ros_T testing_ros_M_ = RT_MODEL_testing_ros_T();
RT_MODEL_testing_ros_T *const testing_ros_M = &testing_ros_M_;

// Forward declaration for local functions
static void testing_ros_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj);
static void testing_ros_SystemCore_setup_h(ros_slros2_internal_block_Sub_T *obj);
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

static void testing_ros_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj)
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

  Sub_testing_ros_2.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void testing_ros_SystemCore_setup_h(ros_slros2_internal_block_Sub_T *obj)
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

  Sub_testing_ros_3.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void testing_ros_step(void)
{
  __m128d tmp;
  __m128d tmp_0;
  __m128d tmp_1;
  int32_T i;
  boolean_T b_varargout_1;

  // Reset subsysRan breadcrumbs
  srClearBC(testing_ros_DW.EnabledSubsystem_SubsysRanBC_j);

  // Reset subsysRan breadcrumbs
  srClearBC(testing_ros_DW.EnabledSubsystem_SubsysRanBC);

  // MATLABSystem: '<S1>/SourceBlock'
  b_varargout_1 = Sub_testing_ros_2.getLatestMessage
    (&testing_ros_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S4>/Enable'

  // Start for MATLABSystem: '<S1>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S4>/In1'
    testing_ros_B.In1 = testing_ros_B.b_varargout_2;
    srUpdateBC(testing_ros_DW.EnabledSubsystem_SubsysRanBC_j);
  }

  // End of Start for MATLABSystem: '<S1>/SourceBlock'
  // End of Outputs for SubSystem: '<S1>/Enabled Subsystem'

  // Sum: '<S7>/Sum of Elements' incorporates:
  //   Math: '<S7>/Math Function'
  //   SignalConversion generated from: '<S7>/Math Function'

  testing_ros_B.Gain = (testing_ros_B.In1.linear_acceleration.x *
                        testing_ros_B.In1.linear_acceleration.x +
                        testing_ros_B.In1.linear_acceleration.y *
                        testing_ros_B.In1.linear_acceleration.y) +
    testing_ros_B.In1.linear_acceleration.z *
    testing_ros_B.In1.linear_acceleration.z;

  // Math: '<S7>/Math Function1' incorporates:
  //   Sum: '<S7>/Sum of Elements'
  //
  //  About '<S7>/Math Function1':
  //   Operator: sqrt

  if (testing_ros_B.Gain < 0.0) {
    testing_ros_B.Gain = -sqrt(fabs(testing_ros_B.Gain));
  } else {
    testing_ros_B.Gain = sqrt(testing_ros_B.Gain);
  }

  // End of Math: '<S7>/Math Function1'

  // Switch: '<S7>/Switch' incorporates:
  //   Constant: '<S7>/Constant'
  //   Product: '<S7>/Product'
  //   SignalConversion generated from: '<S7>/Math Function'

  if (testing_ros_B.Gain > testing_ros_P.NormalizeVector_maxzero) {
    testing_ros_B.rtb_Switch_idx_0 = testing_ros_B.In1.linear_acceleration.x;
    testing_ros_B.rtb_Switch_idx_1 = testing_ros_B.In1.linear_acceleration.y;
    testing_ros_B.rtb_Switch_idx_2 = testing_ros_B.In1.linear_acceleration.z;
  } else {
    testing_ros_B.rtb_Switch_idx_0 = testing_ros_B.In1.linear_acceleration.x *
      0.0;
    testing_ros_B.rtb_Switch_idx_1 = testing_ros_B.In1.linear_acceleration.y *
      0.0;
    testing_ros_B.rtb_Switch_idx_2 = testing_ros_B.In1.linear_acceleration.z *
      0.0;
    testing_ros_B.Gain = testing_ros_P.Constant_Value_h;
  }

  // End of Switch: '<S7>/Switch'

  // Product: '<S7>/Divide'
  testing_ros_B.TmpSignalConversionAtMathFu[1] = testing_ros_B.rtb_Switch_idx_1 /
    testing_ros_B.Gain;
  testing_ros_B.TmpSignalConversionAtMathFu[2] = testing_ros_B.rtb_Switch_idx_2 /
    testing_ros_B.Gain;

  // Trigonometry: '<S3>/Atan1' incorporates:
  //   Gain: '<S3>/Gain'
  //   Math: '<S3>/Square'
  //   Math: '<S3>/Square1'
  //   Product: '<S7>/Divide'
  //   Sqrt: '<S3>/Sqrt'
  //   Sum: '<S3>/Add'

  testing_ros_B.Phi = rt_atan2d_snf(testing_ros_B.rtb_Switch_idx_0 /
    testing_ros_B.Gain * testing_ros_P.Gain_Gain, sqrt
    (testing_ros_B.TmpSignalConversionAtMathFu[1] *
     testing_ros_B.TmpSignalConversionAtMathFu[1] +
     testing_ros_B.TmpSignalConversionAtMathFu[2] *
     testing_ros_B.TmpSignalConversionAtMathFu[2]));

  // Trigonometry: '<S3>/Atan2'
  testing_ros_B.Theta = rt_atan2d_snf(testing_ros_B.TmpSignalConversionAtMathFu
    [1], testing_ros_B.TmpSignalConversionAtMathFu[2]);

  // MATLABSystem: '<S2>/SourceBlock'
  b_varargout_1 = Sub_testing_ros_3.getLatestMessage
    (&testing_ros_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  // Start for MATLABSystem: '<S2>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S5>/In1'
    testing_ros_B.In1_a = testing_ros_B.b_varargout_2_m;
    srUpdateBC(testing_ros_DW.EnabledSubsystem_SubsysRanBC);
  }

  // End of Start for MATLABSystem: '<S2>/SourceBlock'
  // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'

  // MATLAB Function: '<S3>/MATLAB Function'
  testing_ros_B.Gain = cos(testing_ros_B.Theta);
  testing_ros_B.a[0] = testing_ros_B.Gain;
  testing_ros_B.rtb_Switch_idx_0 = sin(testing_ros_B.Theta);
  testing_ros_B.rtb_Switch_idx_1 = sin(testing_ros_B.Phi);
  testing_ros_B.a[3] = testing_ros_B.rtb_Switch_idx_0 *
    testing_ros_B.rtb_Switch_idx_1;
  testing_ros_B.rtb_Switch_idx_2 = cos(testing_ros_B.Phi);
  testing_ros_B.a[6] = testing_ros_B.rtb_Switch_idx_0 *
    testing_ros_B.rtb_Switch_idx_2;
  testing_ros_B.a[1] = 0.0;
  testing_ros_B.a[4] = testing_ros_B.rtb_Switch_idx_2;
  testing_ros_B.a[7] = -testing_ros_B.rtb_Switch_idx_1;
  testing_ros_B.a[2] = -testing_ros_B.rtb_Switch_idx_0;
  testing_ros_B.a[5] = testing_ros_B.Gain * testing_ros_B.rtb_Switch_idx_1;
  testing_ros_B.a[8] = testing_ros_B.Gain * testing_ros_B.rtb_Switch_idx_2;

  // SignalConversion generated from: '<S6>/ SFunction ' incorporates:
  //   MATLAB Function: '<S3>/MATLAB Function'

  testing_ros_B.Gain = testing_ros_B.In1_a.magnetic_field.y;
  testing_ros_B.rtb_Switch_idx_0 = testing_ros_B.In1_a.magnetic_field.x;
  testing_ros_B.rtb_Switch_idx_1 = testing_ros_B.In1_a.magnetic_field.z;
  for (i = 0; i <= 0; i += 2) {
    // MATLAB Function: '<S3>/MATLAB Function' incorporates:
    //   SignalConversion generated from: '<S6>/ SFunction '

    tmp = _mm_loadu_pd(&testing_ros_B.a[i + 3]);
    tmp_0 = _mm_loadu_pd(&testing_ros_B.a[i]);
    tmp_1 = _mm_loadu_pd(&testing_ros_B.a[i + 6]);
    _mm_storeu_pd(&testing_ros_B.TmpSignalConversionAtMathFu[i], _mm_add_pd
                  (_mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(testing_ros_B.Gain)),
      _mm_mul_pd(tmp_0, _mm_set1_pd(testing_ros_B.rtb_Switch_idx_0))),
                   _mm_mul_pd(tmp_1, _mm_set1_pd(testing_ros_B.rtb_Switch_idx_1))));
  }

  // MATLAB Function: '<S3>/MATLAB Function' incorporates:
  //   SignalConversion generated from: '<S6>/ SFunction '

  for (i = 2; i < 3; i++) {
    testing_ros_B.TmpSignalConversionAtMathFu[i] = (testing_ros_B.a[i + 3] *
      testing_ros_B.Gain + testing_ros_B.a[i] * testing_ros_B.rtb_Switch_idx_0)
      + testing_ros_B.a[i + 6] * testing_ros_B.rtb_Switch_idx_1;
  }

  testing_ros_B.psi = rt_atan2d_snf(-testing_ros_B.TmpSignalConversionAtMathFu[1],
    testing_ros_B.TmpSignalConversionAtMathFu[0]);

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                                    // Sample time: [0.01s, 0.0s]
    rtExtModeUpload(0, (real_T)testing_ros_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.01s, 0.0s]
    if ((rtmGetTFinal(testing_ros_M)!=-1) &&
        !((rtmGetTFinal(testing_ros_M)-testing_ros_M->Timing.taskTime0) >
          testing_ros_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(testing_ros_M, "Simulation finished");
    }

    if (rtmGetStopRequested(testing_ros_M)) {
      rtmSetErrorStatus(testing_ros_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  testing_ros_M->Timing.taskTime0 =
    ((time_T)(++testing_ros_M->Timing.clockTick0)) *
    testing_ros_M->Timing.stepSize0;
}

// Model initialize function
void testing_ros_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(testing_ros_M, -1);
  testing_ros_M->Timing.stepSize0 = 0.01;

  // External mode info
  testing_ros_M->Sizes.checksums[0] = (1461328571U);
  testing_ros_M->Sizes.checksums[1] = (3902508519U);
  testing_ros_M->Sizes.checksums[2] = (2278585735U);
  testing_ros_M->Sizes.checksums[3] = (4101079961U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[7];
    testing_ros_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&testing_ros_DW.EnabledSubsystem_SubsysRanBC_j;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)&testing_ros_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(testing_ros_M->extModeInfo,
      &testing_ros_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(testing_ros_M->extModeInfo,
                        testing_ros_M->Sizes.checksums);
    rteiSetTPtr(testing_ros_M->extModeInfo, rtmGetTPtr(testing_ros_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    testing_ros_M->SpecialInfo.mappingInfo = (&dtInfo);
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

  testing_ros_B.In1 = testing_ros_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S5>/In1' incorporates:
  //   Outport: '<S5>/Out1'

  testing_ros_B.In1_a = testing_ros_P.Out1_Y0_f;

  // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

  // Start for MATLABSystem: '<S1>/SourceBlock'
  testing_ros_SystemCore_setup(&testing_ros_DW.obj_g);

  // Start for MATLABSystem: '<S2>/SourceBlock'
  testing_ros_SystemCore_setup_h(&testing_ros_DW.obj);
}

// Model terminate function
void testing_ros_terminate(void)
{
  // Terminate for MATLABSystem: '<S1>/SourceBlock'
  if (!testing_ros_DW.obj_g.matlabCodegenIsDeleted) {
    testing_ros_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/SourceBlock'

  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  if (!testing_ros_DW.obj.matlabCodegenIsDeleted) {
    testing_ros_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SourceBlock'
}

//
// File trailer for generated code.
//
// [EOF]
//
