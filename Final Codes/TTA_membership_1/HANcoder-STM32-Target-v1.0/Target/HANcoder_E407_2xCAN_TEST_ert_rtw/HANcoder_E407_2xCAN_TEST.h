/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_2xCAN_TEST.h
 *
 * Code generated for Simulink model 'HANcoder_E407_2xCAN_TEST'.
 *
 * Model version                  : 1.120
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 08:50:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_2xCAN_TEST_h_
#define RTW_HEADER_HANcoder_E407_2xCAN_TEST_h_
#ifndef HANcoder_E407_2xCAN_TEST_COMMON_INCLUDES_
# define HANcoder_E407_2xCAN_TEST_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "can.h"
#include "canio.h"
#include "digin.h"
#include "digout.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "anin.h"
#include "mac.h"
#endif                                 /* HANcoder_E407_2xCAN_TEST_COMMON_INCLUDES_ */

#include "HANcoder_E407_2xCAN_TEST_types.h"

/* Macros for accessing real-time model data structure */
#define HANcoder_E407_2xCAN_TEST_M     (rtM)

typedef union t_can_data_types
{
  /* simulink types (for quick reference) */
  uint8_t uint8_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
  int8_t int8_T_info[CAN_MAX_DATA_LEN/sizeof(int8_t)];
  uint16_t uint16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  int16_t int16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  uint32_t uint32_T_info[CAN_MAX_DATA_LEN/sizeof(uint32_t)];
  int32_t int32_T_info[CAN_MAX_DATA_LEN/sizeof(int32_t)];
  uint8_t boolean_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
} __attribute__((packed)) tCanDataTypes;

/* Block signals (default storage) */
typedef struct {
  uint8_T Output;                      /* '<S16>/Output' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HANtuneOverride1;             /* '<S1>/Data Store Memory' */
  uint32_T Output_DSTATE;              /* '<S23>/Output' */
  uint8_T Output_DSTATE_d;             /* '<S15>/Output' */
  uint8_T Output_DSTATE_k;             /* '<S16>/Output' */
  boolean_T Subsystem_MODE;            /* '<S1>/Subsystem' */
  boolean_T IfActionSubsystem_MODE;    /* '<S1>/If Action Subsystem' */
} D_Work;

/* Invariant block signals (default storage) */
typedef struct {
  const uint32_T DataTypeConversion1;  /* '<S8>/Data Type Conversion1' */
} ConstBlockIO;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;
extern const ConstBlockIO rtConstB;    /* constant block i/o */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint32_T SI_FreeHeap;           /* '<S33>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S34>/Level-2 M-file S-Function' */
extern uint32_T RX_MSG_2;              /* '<S31>/In1' */
extern uint32_T RX_MSG_1;              /* '<S30>/In1' */
extern uint32_T TX_MSG;                /* '<S23>/Output' */
extern uint32_T TX_MSG_1;              /* '<S8>/Data Type Conversion2' */
extern uint32_T TX_MSG_2;              /* '<S8>/Data Type Conversion3' */
extern uint8_T SI_CPUload;             /* '<S32>/Level-2 M-file S-Function' */
extern boolean_T WKUP_button;          /* '<S26>/Level-2 M-file S-Function' */
extern boolean_T sender_id;            /* '<S6>/Level-2 M-file S-Function' */
extern boolean_T LedValue;             /* '<S2>/Data Type Conversion' */
extern boolean_T receiver_id;          /* '<S7>/Level-2 M-file S-Function' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern boolean_T HANtuneOverride;      /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_2xCAN_TEST_initialize(void);
extern void HANcoder_E407_2xCAN_TEST_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'HANcoder_E407_2xCAN_TEST'
 * '<S1>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm'
 * '<S3>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S5>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input'
 * '<S7>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input1'
 * '<S8>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/If Action Subsystem'
 * '<S9>'   : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S10>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Outputs'
 * '<S11>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem'
 * '<S12>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S13>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/XCP on CAN config'
 * '<S14>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S15>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter'
 * '<S16>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited'
 * '<S17>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Increment Real World'
 * '<S18>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Wrap To Zero'
 * '<S19>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Increment Real World'
 * '<S20>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Wrap To Zero'
 * '<S21>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/If Action Subsystem/CAN send'
 * '<S22>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/If Action Subsystem/CAN send1'
 * '<S23>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/If Action Subsystem/Counter Free-Running'
 * '<S24>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/If Action Subsystem/Counter Free-Running/Increment Real World'
 * '<S25>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/If Action Subsystem/Counter Free-Running/Wrap To Zero'
 * '<S26>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input'
 * '<S27>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output'
 * '<S28>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem/CAN receive'
 * '<S29>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem/CAN receive1'
 * '<S30>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem/CAN receive/Enabled Subsystem'
 * '<S31>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem/CAN receive1/Enabled Subsystem'
 * '<S32>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S33>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S34>'  : 'HANcoder_E407_2xCAN_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                                 /* RTW_HEADER_HANcoder_E407_2xCAN_TEST_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
