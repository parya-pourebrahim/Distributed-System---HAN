/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_types.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Template'.
 *
 * Model version                  : 1.154
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 09:48:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_Template_types_h_
#define RTW_HEADER_HANcoder_E407_TTA_Template_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_msg_buffer_type_
#define DEFINED_TYPEDEF_FOR_msg_buffer_type_

typedef struct {
  uint8_T Buffer_1;
  uint8_T Buffer_2;
  uint8_T Buffer_3;
  uint8_T Buffer_4;
  uint8_T Buffer_5;
  uint8_T Buffer_6;
  uint8_T Buffer_7;
  uint8_T Buffer_8;
} msg_buffer_type;

#endif

#ifndef DEFINED_TYPEDEF_FOR_vote_array_
#define DEFINED_TYPEDEF_FOR_vote_array_

typedef struct {
  real_T First_Board;
  real_T Second_Board;
  real_T Third_Board;
} vote_array;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#endif                                 /* RTW_HEADER_HANcoder_E407_TTA_Template_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
