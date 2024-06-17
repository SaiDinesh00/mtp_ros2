//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: complementary_filter_ros2_data.cpp
//
// Code generated for Simulink model 'complementary_filter_ros2'.
//
// Model version                  : 1.5
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Mon Jun 17 12:48:49 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#include "complementary_filter_ros2.h"

// Block parameters (default storage)
P_complementary_filter_ros2_T complementary_filter_ros2_P{
  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S33>/UD'

  0.0,

  // Mask Parameter: LowPassFilterDiscreteorContinuo
  //  Referenced by: '<S3>/K'

  1.0,

  // Mask Parameter: LowPassFilterDiscreteorContin_m
  //  Referenced by: '<S26>/Time constant'

  0.35,

  // Mask Parameter: Subsystem_alpha
  //  Referenced by:
  //    '<S7>/alpha'
  //    '<S7>/alpha1'

  0.0,

  // Mask Parameter: CompareToConstant_const
  //  Referenced by: '<S29>/Constant'

  2.0,

  // Mask Parameter: LowPassFilterDiscreteorConti_my
  //  Referenced by: '<S26>/Constant'

  1.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S34>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
  },

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S5>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
  },

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S35>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // magnetic_field

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // magnetic_field_covariance
  },

  // Computed Parameter: Constant_Value_h
  //  Referenced by: '<S6>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // magnetic_field

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // magnetic_field_covariance
  },

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S15>/Constant'

  {
    0,                                 // pin_number
    false                              // state
  },

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S13>/Constant'

  {
    0,                                 // pin_number
    false                              // state
  },

  // Computed Parameter: Constant_Value_k
  //  Referenced by: '<S24>/Constant'

  {
    0,                                 // pin_number
    false                              // state
  },

  // Computed Parameter: Constant_Value_hu
  //  Referenced by: '<S22>/Constant'

  {
    0,                                 // pin_number
    false                              // state
  },

  // Computed Parameter: Constant_Value_k1
  //  Referenced by: '<S16>/Constant'

  {
    false                              // success
  },

  // Computed Parameter: Constant_Value_c
  //  Referenced by: '<S14>/Constant'

  {
    false                              // success
  },

  // Computed Parameter: Constant_Value_e
  //  Referenced by: '<S25>/Constant'

  {
    false                              // success
  },

  // Computed Parameter: Constant_Value_n
  //  Referenced by: '<S23>/Constant'

  {
    false                              // success
  },

  // Computed Parameter: Constant_Value_ct
  //  Referenced by: '<S11>/Constant'

  {
    0.0                                // data
  },

  // Computed Parameter: Constant_Value_il
  //  Referenced by: '<S20>/Constant'

  {
    0.0                                // data
  },

  // Expression: 1500
  //  Referenced by: '<S8>/Constant'

  1500.0,

  // Expression: 125
  //  Referenced by: '<S8>/control1'

  125.0,

  // Expression: -5
  //  Referenced by: '<S8>/Gain'

  -5.0,

  // Expression: -0.2275736490885407
  //  Referenced by: '<S17>/yaw perturb'

  -0.22757364908854069,

  // Expression: 80
  //  Referenced by: '<S17>/Constant2'

  80.0,

  // Expression: 1500
  //  Referenced by: '<S17>/Constant1'

  1500.0,

  // Computed Parameter: Out1_Y0_i
  //  Referenced by: '<S4>/Out1'

  0.0,

  // Expression: 2.5
  //  Referenced by: '<S4>/Gain'

  2.5,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S4>/Discrete-Time Integrator'

  0.0019230769230769232,

  // Expression: 0
  //  Referenced by: '<S4>/Discrete-Time Integrator'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S33>/TSamp'

  104.0,

  // Expression: 0
  //  Referenced by: '<S30>/Constant'

  0.0,

  // Expression: 1e-3
  //  Referenced by: '<S7>/Gain2'

  0.001,

  // Expression: 1e-3
  //  Referenced by: '<S7>/Gain3'

  0.001,

  // Expression: 1e-3
  //  Referenced by: '<S7>/Gain4'

  0.001,

  // Expression: -1
  //  Referenced by: '<S7>/Gain'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S7>/Constant'

  0.0,

  // Expression: -1
  //  Referenced by: '<S7>/Gain1'

  -1.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainva_j
  //  Referenced by: '<S7>/Discrete-Time Integrator'

  0.028846153846153848,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S32>/Integrator'

  0.0096153846153846159,

  // Expression: antiwindupUpperLimit
  //  Referenced by: '<S32>/Integrator'

  0.0,

  // Expression: antiwindupLowerLimit
  //  Referenced by: '<S32>/Integrator'

  0.0,

  // Expression: windupUpperLimit
  //  Referenced by: '<S32>/Saturation'

  0.0,

  // Expression: windupLowerLimit
  //  Referenced by: '<S32>/Saturation'

  0.0,

  // Expression: -1
  //  Referenced by: '<Root>/Gain'

  -1.0,

  // Expression: 0
  //  Referenced by: '<Root>/Constant'

  0.0,

  // Computed Parameter: Constant1_Value_e
  //  Referenced by: '<S10>/Constant1'

  true,

  // Computed Parameter: Constant1_Value_b
  //  Referenced by: '<S9>/Constant1'

  false,

  // Computed Parameter: Constant2_Value_i
  //  Referenced by: '<S19>/Constant2'

  true,

  // Computed Parameter: Constant1_Value_f
  //  Referenced by: '<S18>/Constant1'

  false,

  // Computed Parameter: Pitchmotor_Value
  //  Referenced by: '<Root>/Pitch motor'

  false,

  // Computed Parameter: YawMotor_Value
  //  Referenced by: '<Root>/Yaw Motor'

  false,

  // Computed Parameter: Constant_Value_n5
  //  Referenced by: '<S10>/Constant'

  17,

  // Computed Parameter: Constant_Value_l
  //  Referenced by: '<S9>/Constant'

  17,

  // Computed Parameter: Chart_y1
  //  Referenced by: '<Root>/Chart'

  0,

  // Computed Parameter: Constant1_Value_n
  //  Referenced by: '<S19>/Constant1'

  27,

  // Computed Parameter: Constant_Value_m
  //  Referenced by: '<S18>/Constant'

  27
};

//
// File trailer for generated code.
//
// [EOF]
//
