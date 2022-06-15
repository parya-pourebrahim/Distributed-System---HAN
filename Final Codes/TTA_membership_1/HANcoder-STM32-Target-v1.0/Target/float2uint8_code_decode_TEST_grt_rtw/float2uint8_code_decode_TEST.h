/*
 * float2uint8_code_decode_TEST.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "float2uint8_code_decode_TEST".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Feb 15 08:42:01 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_float2uint8_code_decode_TEST_h_
#define RTW_HEADER_float2uint8_code_decode_TEST_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef float2uint8_code_decode_TEST_COMMON_INCLUDES_
# define float2uint8_code_decode_TEST_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* float2uint8_code_decode_TEST_COMMON_INCLUDES_ */

#include "float2uint8_code_decode_TEST_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals for system '<S1>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S3>/bit_shift' */
} B_BitShift_float2uint8_code_d_T;

/* Block signals (default storage) */
typedef struct {
  B_BitShift_float2uint8_code_d_T BitShift1;/* '<S2>/Bit Shift1' */
  B_BitShift_float2uint8_code_d_T BitShift;/* '<S1>/Bit Shift' */
} B_float2uint8_code_decode_TES_T;

/* Parameters (default storage) */
struct P_float2uint8_code_decode_TES_T_ {
  real_T Constant2_Value;              /* Expression: -5
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 4
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 5
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T magnitude_Value;              /* Expression: 9
                                        * Referenced by: '<Root>/magnitude'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value_n;            /* Expression: 2
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Constant2_Value_b;            /* Expression: 2
                                        * Referenced by: '<S1>/Constant2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_float2uint8_code_deco_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_float2uint8_code_decode_TES_T float2uint8_code_decode_TEST_P;

/* Block signals (default storage) */
extern B_float2uint8_code_decode_TES_T float2uint8_code_decode_TEST_B;

/* Model entry point functions */
extern void float2uint8_code_decode_TEST_initialize(void);
extern void float2uint8_code_decode_TEST_step(void);
extern void float2uint8_code_decode_TEST_terminate(void);

/* Real-time Model object */
extern RT_MODEL_float2uint8_code_dec_T *const float2uint8_code_decode_TEST_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'float2uint8_code_decode_TEST'
 * '<S1>'   : 'float2uint8_code_decode_TEST/float2uint8'
 * '<S2>'   : 'float2uint8_code_decode_TEST/uint8_2float'
 * '<S3>'   : 'float2uint8_code_decode_TEST/float2uint8/Bit Shift'
 * '<S4>'   : 'float2uint8_code_decode_TEST/float2uint8/Bit Shift/bit_shift'
 * '<S5>'   : 'float2uint8_code_decode_TEST/uint8_2float/Bit Shift'
 * '<S6>'   : 'float2uint8_code_decode_TEST/uint8_2float/Bit Shift1'
 * '<S7>'   : 'float2uint8_code_decode_TEST/uint8_2float/Bit Shift/bit_shift'
 * '<S8>'   : 'float2uint8_code_decode_TEST/uint8_2float/Bit Shift1/bit_shift'
 */
#endif                                 /* RTW_HEADER_float2uint8_code_decode_TEST_h_ */
