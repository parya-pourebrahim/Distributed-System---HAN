/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_CAN_COMM_TEST.h
 *
 * Code generated for Simulink model 'HANcoder_E407_CAN_COMM_TEST'.
 *
 * Model version                  : 1.124
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 08:35:59 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_CAN_COMM_TEST_h_
#define RTW_HEADER_HANcoder_E407_CAN_COMM_TEST_h_
#include <math.h>
#ifndef HANcoder_E407_CAN_COMM_TEST_COMMON_INCLUDES_
# define HANcoder_E407_CAN_COMM_TEST_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "canio.h"
#include "can.h"
#include "digout.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "anin.h"
#include "mac.h"
#endif                                 /* HANcoder_E407_CAN_COMM_TEST_COMMON_INCLUDES_ */

#include "HANcoder_E407_CAN_COMM_TEST_types.h"

/* Macros for accessing real-time model data structure */
#define HANcoder_E407_CAN_COMM_TEST_M  (rtM)

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

/* Block signals for system '<S25>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S43>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S25>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S44>/bit_shift' */
} rtB_BitShift1;

/* Block signals (default storage) */
typedef struct {
  uint8_T Output;                      /* '<S16>/Output' */
  rtB_BitShift1 BitShift_aq;           /* '<S127>/Bit Shift' */
  rtB_BitShift1 BitShift_p1;           /* '<S126>/Bit Shift' */
  rtB_BitShift1 BitShift_aa;           /* '<S125>/Bit Shift' */
  rtB_BitShift1 BitShift_lm;           /* '<S124>/Bit Shift' */
  rtB_BitShift1 BitShift_o0;           /* '<S123>/Bit Shift' */
  rtB_BitShift1 BitShift_ee;           /* '<S122>/Bit Shift' */
  rtB_BitShift1 BitShift_am;           /* '<S121>/Bit Shift' */
  rtB_BitShift1 BitShift_g1;           /* '<S120>/Bit Shift' */
  rtB_BitShift1 BitShift_cx;           /* '<S119>/Bit Shift' */
  rtB_BitShift1 BitShift_de;           /* '<S118>/Bit Shift' */
  rtB_BitShift1 BitShift_l;            /* '<S117>/Bit Shift' */
  rtB_BitShift1 BitShift_ai;           /* '<S116>/Bit Shift' */
  rtB_BitShift1 BitShift_ks;           /* '<S115>/Bit Shift' */
  rtB_BitShift1 BitShift_dt;           /* '<S114>/Bit Shift' */
  rtB_BitShift1 BitShift_kb;           /* '<S113>/Bit Shift' */
  rtB_BitShift1 BitShift_fo;           /* '<S112>/Bit Shift' */
  rtB_BitShift1 BitShift1_ew;          /* '<S40>/Bit Shift1' */
  rtB_BitShift BitShift_e;             /* '<S40>/Bit Shift' */
  rtB_BitShift1 BitShift1_fh;          /* '<S39>/Bit Shift1' */
  rtB_BitShift BitShift_kk;            /* '<S39>/Bit Shift' */
  rtB_BitShift1 BitShift1_c;           /* '<S38>/Bit Shift1' */
  rtB_BitShift BitShift_g;             /* '<S38>/Bit Shift' */
  rtB_BitShift1 BitShift1_fl;          /* '<S37>/Bit Shift1' */
  rtB_BitShift BitShift_n;             /* '<S37>/Bit Shift' */
  rtB_BitShift1 BitShift1_jz;          /* '<S36>/Bit Shift1' */
  rtB_BitShift BitShift_f;             /* '<S36>/Bit Shift' */
  rtB_BitShift1 BitShift1_bk;          /* '<S35>/Bit Shift1' */
  rtB_BitShift BitShift_of;            /* '<S35>/Bit Shift' */
  rtB_BitShift1 BitShift1_mc;          /* '<S34>/Bit Shift1' */
  rtB_BitShift BitShift_c;             /* '<S34>/Bit Shift' */
  rtB_BitShift1 BitShift1_m;           /* '<S33>/Bit Shift1' */
  rtB_BitShift BitShift_pe;            /* '<S33>/Bit Shift' */
  rtB_BitShift1 BitShift1_f;           /* '<S32>/Bit Shift1' */
  rtB_BitShift BitShift_o;             /* '<S32>/Bit Shift' */
  rtB_BitShift1 BitShift1_b;           /* '<S31>/Bit Shift1' */
  rtB_BitShift BitShift_a;             /* '<S31>/Bit Shift' */
  rtB_BitShift1 BitShift1_j;           /* '<S30>/Bit Shift1' */
  rtB_BitShift BitShift_h;             /* '<S30>/Bit Shift' */
  rtB_BitShift1 BitShift1_g;           /* '<S29>/Bit Shift1' */
  rtB_BitShift BitShift_k;             /* '<S29>/Bit Shift' */
  rtB_BitShift1 BitShift1_k;           /* '<S28>/Bit Shift1' */
  rtB_BitShift BitShift_p;             /* '<S28>/Bit Shift' */
  rtB_BitShift1 BitShift1_h;           /* '<S27>/Bit Shift1' */
  rtB_BitShift BitShift_bk;            /* '<S27>/Bit Shift' */
  rtB_BitShift1 BitShift1_eg;          /* '<S26>/Bit Shift1' */
  rtB_BitShift BitShift_b;             /* '<S26>/Bit Shift' */
  rtB_BitShift1 BitShift1_e;           /* '<S25>/Bit Shift1' */
  rtB_BitShift BitShift_d;             /* '<S25>/Bit Shift' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HANtuneOverride1;             /* '<S1>/Data Store Memory' */
  uint8_T Output_DSTATE;               /* '<S15>/Output' */
  uint8_T Output_DSTATE_k;             /* '<S16>/Output' */
  boolean_T TxCAN_MODE;                /* '<S1>/Tx CAN' */
  boolean_T RxCAN_MODE;                /* '<S1>/Rx CAN' */
} D_Work;

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

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T Rx_Buffer_1_CAN1;        /* '<S25>/Switch' */
extern real_T Rx_Buffer_8_CAN1;        /* '<S32>/Switch' */
extern real_T Rx_Buffer_2_CAN1;        /* '<S33>/Switch' */
extern real_T Rx_Buffer_3_CAN1;        /* '<S34>/Switch' */
extern real_T Rx_Buffer_4_CAN1;        /* '<S35>/Switch' */
extern real_T Rx_Buffer_5_CAN1;        /* '<S36>/Switch' */
extern real_T Rx_Buffer_6_CAN1;        /* '<S37>/Switch' */
extern real_T Rx_Buffer_7_CAN1;        /* '<S38>/Switch' */
extern real_T Rx_Buffer_5_CAN2;        /* '<S26>/Switch' */
extern real_T Rx_Buffer_4_CAN2;        /* '<S27>/Switch' */
extern real_T Rx_Buffer_3_CAN2;        /* '<S28>/Switch' */
extern real_T Rx_Buffer_2_CAN2;        /* '<S29>/Switch' */
extern real_T Rx_Buffer_7_CAN2;        /* '<S30>/Switch' */
extern real_T Rx_Buffer_1_CAN2;        /* '<S31>/Switch' */
extern real_T Rx_Buffer_8_CAN2;        /* '<S39>/Switch' */
extern real_T Rx_Buffer_6_CAN2;        /* '<S40>/Switch' */
extern uint32_T SI_FreeHeap;           /* '<S108>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S109>/Level-2 M-file S-Function' */
extern uint32_T constant_ID_TXCAN1;    /* '<S12>/Data Type Conversion3' */
extern uint32_T constant_ID_TXCAN2;    /* '<S12>/Data Type Conversion4' */
extern uint32_T Tx_ID_CAN1_s;          /* '<S12>/Data Type Conversion1' */
extern uint32_T Tx_ID_CAN2_s;          /* '<S12>/Data Type Conversion2' */
extern uint32_T constant_ID_RXCAN1;    /* '<S10>/Cast' */
extern uint32_T constant_ID_RXCAN2;    /* '<S10>/Cast1' */
extern uint32_T Rx_ID_CAN2_s;          /* '<S10>/Constant1' */
extern uint32_T Rx_ID_CAN1_s;          /* '<S10>/Constant2' */
extern uint8_T SI_CPUload;             /* '<S107>/Level-2 M-file S-Function' */
extern uint8_T Tx_coded5_CAN1;         /* '<S112>/Plus' */
extern uint8_T Tx_coded6_CAN1;         /* '<S120>/Plus' */
extern uint8_T Tx_coded4_CAN1;         /* '<S121>/Plus' */
extern uint8_T Tx_coded7_CAN1;         /* '<S122>/Plus' */
extern uint8_T Tx_coded8_CAN1;         /* '<S123>/Plus' */
extern uint8_T Tx_coded3_CAN1;         /* '<S124>/Plus' */
extern uint8_T Tx_coded2_CAN1;         /* '<S125>/Plus' */
extern uint8_T Tx_coded1_CAN1;         /* '<S126>/Plus' */
extern uint8_T Tx_coded2_CAN2;         /* '<S113>/Plus' */
extern uint8_T Tx_coded3_CAN2;         /* '<S114>/Plus' */
extern uint8_T Tx_coded4_CAN2;         /* '<S115>/Plus' */
extern uint8_T Tx_coded5_CAN2;         /* '<S116>/Plus' */
extern uint8_T Tx_coded6_CAN2;         /* '<S117>/Plus' */
extern uint8_T Tx_coded7_CAN2;         /* '<S118>/Plus' */
extern uint8_T Tx_coded8_CAN2;         /* '<S119>/Plus' */
extern uint8_T Tx_coded1_CAN2;         /* '<S127>/Plus' */
extern uint8_T Rx_coded1_CAN2;         /* '<S42>/In1' */
extern uint8_T Rx_coded2_CAN2;         /* '<S42>/In2' */
extern uint8_T Rx_coded3_CAN2;         /* '<S42>/In3' */
extern uint8_T Rx_coded4_CAN2;         /* '<S42>/In4' */
extern uint8_T Rx_coded5_CAN2;         /* '<S42>/In5' */
extern uint8_T Rx_coded6_CAN2;         /* '<S42>/In6' */
extern uint8_T Rx_coded7_CAN2;         /* '<S42>/In7' */
extern uint8_T Rx_coded8_CAN2;         /* '<S42>/In8' */
extern uint8_T Rx_coded1_CAN1;         /* '<S41>/In1' */
extern uint8_T Rx_coded2_CAN1;         /* '<S41>/In2' */
extern uint8_T Rx_coded3_CAN1;         /* '<S41>/In3' */
extern uint8_T Rx_coded4_CAN1;         /* '<S41>/In4' */
extern uint8_T Rx_coded5_CAN1;         /* '<S41>/In5' */
extern uint8_T Rx_coded6_CAN1;         /* '<S41>/In6' */
extern uint8_T Rx_coded7_CAN1;         /* '<S41>/In7' */
extern uint8_T Rx_coded8_CAN1;         /* '<S41>/In8' */
extern int8_T new_CAN1;                /* '<S23>/S-Function' */
extern int8_T new_CAN2;                /* '<S24>/S-Function' */
extern boolean_T WKUP_button;          /* '<S21>/Level-2 M-file S-Function' */
extern boolean_T receiver_id;          /* '<S7>/Level-2 M-file S-Function' */
extern boolean_T sender_id;            /* '<S6>/Level-2 M-file S-Function' */
extern boolean_T LedValue;             /* '<S2>/Data Type Conversion' */
extern boolean_T OF5_CAN1;             /* '<S112>/LessThanOrEqual' */
extern boolean_T OF6_CAN1;             /* '<S120>/LessThanOrEqual' */
extern boolean_T OF4_CAN1;             /* '<S121>/LessThanOrEqual' */
extern boolean_T OF7_CAN1;             /* '<S122>/LessThanOrEqual' */
extern boolean_T OF8_CAN1;             /* '<S123>/LessThanOrEqual' */
extern boolean_T OF3_CAN1;             /* '<S124>/LessThanOrEqual' */
extern boolean_T OF2_CAN1;             /* '<S125>/LessThanOrEqual' */
extern boolean_T OF1_CAN1;             /* '<S126>/LessThanOrEqual' */
extern boolean_T OF2_CAN2;             /* '<S113>/LessThanOrEqual' */
extern boolean_T OF3_CAN2;             /* '<S114>/LessThanOrEqual' */
extern boolean_T OF4_CAN2;             /* '<S115>/LessThanOrEqual' */
extern boolean_T OF5_CAN2;             /* '<S116>/LessThanOrEqual' */
extern boolean_T OF6_CAN2;             /* '<S117>/LessThanOrEqual' */
extern boolean_T OF7_CAN2;             /* '<S118>/LessThanOrEqual' */
extern boolean_T OF8_CAN2;             /* '<S119>/LessThanOrEqual' */
extern boolean_T OF1_CAN2;             /* '<S127>/LessThanOrEqual' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T Tx_Buffer_1_CAN1;        /* Variable: Tx_Buffer_1_CAN1
                                        * Referenced by: '<S12>/magnitude'
                                        */
extern real_T Tx_Buffer_1_CAN2;        /* Variable: Tx_Buffer_1_CAN2
                                        * Referenced by: '<S12>/magnitude8'
                                        */
extern real_T Tx_Buffer_2_CAN1;        /* Variable: Tx_Buffer_2_CAN1
                                        * Referenced by: '<S12>/magnitude1'
                                        */
extern real_T Tx_Buffer_2_CAN2;        /* Variable: Tx_Buffer_2_CAN2
                                        * Referenced by: '<S12>/magnitude9'
                                        */
extern real_T Tx_Buffer_3_CAN1;        /* Variable: Tx_Buffer_3_CAN1
                                        * Referenced by: '<S12>/magnitude2'
                                        */
extern real_T Tx_Buffer_3_CAN2;        /* Variable: Tx_Buffer_3_CAN2
                                        * Referenced by: '<S12>/magnitude10'
                                        */
extern real_T Tx_Buffer_4_CAN1;        /* Variable: Tx_Buffer_4_CAN1
                                        * Referenced by: '<S12>/magnitude3'
                                        */
extern real_T Tx_Buffer_4_CAN2;        /* Variable: Tx_Buffer_4_CAN2
                                        * Referenced by: '<S12>/magnitude11'
                                        */
extern real_T Tx_Buffer_5_CAN1;        /* Variable: Tx_Buffer_5_CAN1
                                        * Referenced by: '<S12>/magnitude4'
                                        */
extern real_T Tx_Buffer_5_CAN2;        /* Variable: Tx_Buffer_5_CAN2
                                        * Referenced by: '<S12>/magnitude12'
                                        */
extern real_T Tx_Buffer_6_CAN1;        /* Variable: Tx_Buffer_6_CAN1
                                        * Referenced by: '<S12>/magnitude5'
                                        */
extern real_T Tx_Buffer_6_CAN2;        /* Variable: Tx_Buffer_6_CAN2
                                        * Referenced by: '<S12>/magnitude13'
                                        */
extern real_T Tx_Buffer_7_CAN1;        /* Variable: Tx_Buffer_7_CAN1
                                        * Referenced by: '<S12>/magnitude6'
                                        */
extern real_T Tx_Buffer_7_CAN2;        /* Variable: Tx_Buffer_7_CAN2
                                        * Referenced by: '<S12>/magnitude14'
                                        */
extern real_T Tx_Buffer_8_CAN1;        /* Variable: Tx_Buffer_8_CAN1
                                        * Referenced by: '<S12>/magnitude7'
                                        */
extern real_T Tx_Buffer_8_CAN2;        /* Variable: Tx_Buffer_8_CAN2
                                        * Referenced by: '<S12>/magnitude15'
                                        */
extern real_T Tx_ID_CAN1;              /* Variable: Tx_ID_CAN1
                                        * Referenced by: '<S12>/Constant'
                                        */
extern real_T Tx_ID_CAN2;              /* Variable: Tx_ID_CAN2
                                        * Referenced by: '<S12>/Constant1'
                                        */
extern real_T Tx_Max_CAN1;             /* Variable: Tx_Max_CAN1
                                        * Referenced by: '<S12>/Constant2'
                                        */
extern real_T Tx_Max_CAN2;             /* Variable: Tx_Max_CAN2
                                        * Referenced by: '<S12>/Constant5'
                                        */
extern real_T Tx_Min_CAN1;             /* Variable: Tx_Min_CAN1
                                        * Referenced by: '<S12>/Constant3'
                                        */
extern real_T Tx_Min_CAN2;             /* Variable: Tx_Min_CAN2
                                        * Referenced by: '<S12>/Constant6'
                                        */
extern real_T precision_CAN1;          /* Variable: precision_CAN1
                                        * Referenced by:
                                        *   '<S10>/Constant3'
                                        *   '<S12>/Constant4'
                                        */
extern real_T precision_CAN2;          /* Variable: precision_CAN2
                                        * Referenced by:
                                        *   '<S10>/Constant4'
                                        *   '<S12>/Constant7'
                                        */
extern uint32_T Rx_ID_CAN1;            /* Variable: Rx_ID_CAN1
                                        * Referenced by: '<S10>/Constant2'
                                        */
extern uint32_T Rx_ID_CAN2;            /* Variable: Rx_ID_CAN2
                                        * Referenced by: '<S10>/Constant1'
                                        */
extern boolean_T HANtuneOverride;      /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_CAN_COMM_TEST_initialize(void);
extern void HANcoder_E407_CAN_COMM_TEST_step(void);

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
 * '<Root>' : 'HANcoder_E407_CAN_COMM_TEST'
 * '<S1>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm'
 * '<S3>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S5>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input'
 * '<S7>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input1'
 * '<S8>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S9>'   : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Outputs'
 * '<S10>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN'
 * '<S11>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S12>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN'
 * '<S13>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/XCP on CAN config'
 * '<S14>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S15>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter'
 * '<S16>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited'
 * '<S17>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Increment Real World'
 * '<S18>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Wrap To Zero'
 * '<S19>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Increment Real World'
 * '<S20>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Wrap To Zero'
 * '<S21>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input'
 * '<S22>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output'
 * '<S23>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/CAN receive'
 * '<S24>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/CAN receive1'
 * '<S25>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float1'
 * '<S26>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float10'
 * '<S27>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float11'
 * '<S28>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float12'
 * '<S29>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float13'
 * '<S30>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float14'
 * '<S31>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float15'
 * '<S32>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float16'
 * '<S33>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float2'
 * '<S34>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float3'
 * '<S35>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float4'
 * '<S36>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float5'
 * '<S37>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float6'
 * '<S38>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float7'
 * '<S39>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float8'
 * '<S40>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float9'
 * '<S41>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/CAN receive/Enabled Subsystem'
 * '<S42>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/CAN receive1/Enabled Subsystem'
 * '<S43>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float1/Bit Shift'
 * '<S44>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float1/Bit Shift1'
 * '<S45>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float1/Bit Shift/bit_shift'
 * '<S46>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float1/Bit Shift1/bit_shift'
 * '<S47>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float10/Bit Shift'
 * '<S48>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float10/Bit Shift1'
 * '<S49>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float10/Bit Shift/bit_shift'
 * '<S50>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float10/Bit Shift1/bit_shift'
 * '<S51>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float11/Bit Shift'
 * '<S52>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float11/Bit Shift1'
 * '<S53>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float11/Bit Shift/bit_shift'
 * '<S54>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float11/Bit Shift1/bit_shift'
 * '<S55>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float12/Bit Shift'
 * '<S56>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float12/Bit Shift1'
 * '<S57>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float12/Bit Shift/bit_shift'
 * '<S58>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float12/Bit Shift1/bit_shift'
 * '<S59>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float13/Bit Shift'
 * '<S60>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float13/Bit Shift1'
 * '<S61>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float13/Bit Shift/bit_shift'
 * '<S62>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float13/Bit Shift1/bit_shift'
 * '<S63>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float14/Bit Shift'
 * '<S64>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float14/Bit Shift1'
 * '<S65>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float14/Bit Shift/bit_shift'
 * '<S66>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float14/Bit Shift1/bit_shift'
 * '<S67>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float15/Bit Shift'
 * '<S68>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float15/Bit Shift1'
 * '<S69>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float15/Bit Shift/bit_shift'
 * '<S70>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float15/Bit Shift1/bit_shift'
 * '<S71>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float16/Bit Shift'
 * '<S72>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float16/Bit Shift1'
 * '<S73>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float16/Bit Shift/bit_shift'
 * '<S74>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float16/Bit Shift1/bit_shift'
 * '<S75>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float2/Bit Shift'
 * '<S76>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float2/Bit Shift1'
 * '<S77>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float2/Bit Shift/bit_shift'
 * '<S78>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float2/Bit Shift1/bit_shift'
 * '<S79>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float3/Bit Shift'
 * '<S80>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float3/Bit Shift1'
 * '<S81>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float3/Bit Shift/bit_shift'
 * '<S82>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float3/Bit Shift1/bit_shift'
 * '<S83>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float4/Bit Shift'
 * '<S84>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float4/Bit Shift1'
 * '<S85>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float4/Bit Shift/bit_shift'
 * '<S86>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float4/Bit Shift1/bit_shift'
 * '<S87>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float5/Bit Shift'
 * '<S88>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float5/Bit Shift1'
 * '<S89>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float5/Bit Shift/bit_shift'
 * '<S90>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float5/Bit Shift1/bit_shift'
 * '<S91>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float6/Bit Shift'
 * '<S92>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float6/Bit Shift1'
 * '<S93>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float6/Bit Shift/bit_shift'
 * '<S94>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float6/Bit Shift1/bit_shift'
 * '<S95>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float7/Bit Shift'
 * '<S96>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float7/Bit Shift1'
 * '<S97>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float7/Bit Shift/bit_shift'
 * '<S98>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float7/Bit Shift1/bit_shift'
 * '<S99>'  : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float8/Bit Shift'
 * '<S100>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float8/Bit Shift1'
 * '<S101>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float8/Bit Shift/bit_shift'
 * '<S102>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float8/Bit Shift1/bit_shift'
 * '<S103>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float9/Bit Shift'
 * '<S104>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float9/Bit Shift1'
 * '<S105>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float9/Bit Shift/bit_shift'
 * '<S106>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Rx CAN/uint8_2float9/Bit Shift1/bit_shift'
 * '<S107>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S108>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S109>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 * '<S110>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/CAN send'
 * '<S111>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/CAN send1'
 * '<S112>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint1'
 * '<S113>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint10'
 * '<S114>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint11'
 * '<S115>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint12'
 * '<S116>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint13'
 * '<S117>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint14'
 * '<S118>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint15'
 * '<S119>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint16'
 * '<S120>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint2'
 * '<S121>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint3'
 * '<S122>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint4'
 * '<S123>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint5'
 * '<S124>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint6'
 * '<S125>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint7'
 * '<S126>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint8'
 * '<S127>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint9'
 * '<S128>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint1/Bit Shift'
 * '<S129>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint1/Bit Shift/bit_shift'
 * '<S130>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint10/Bit Shift'
 * '<S131>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint10/Bit Shift/bit_shift'
 * '<S132>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint11/Bit Shift'
 * '<S133>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint11/Bit Shift/bit_shift'
 * '<S134>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint12/Bit Shift'
 * '<S135>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint12/Bit Shift/bit_shift'
 * '<S136>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint13/Bit Shift'
 * '<S137>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint13/Bit Shift/bit_shift'
 * '<S138>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint14/Bit Shift'
 * '<S139>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint14/Bit Shift/bit_shift'
 * '<S140>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint15/Bit Shift'
 * '<S141>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint15/Bit Shift/bit_shift'
 * '<S142>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint16/Bit Shift'
 * '<S143>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint16/Bit Shift/bit_shift'
 * '<S144>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint2/Bit Shift'
 * '<S145>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint2/Bit Shift/bit_shift'
 * '<S146>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint3/Bit Shift'
 * '<S147>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint3/Bit Shift/bit_shift'
 * '<S148>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint4/Bit Shift'
 * '<S149>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint4/Bit Shift/bit_shift'
 * '<S150>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint5/Bit Shift'
 * '<S151>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint5/Bit Shift/bit_shift'
 * '<S152>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint6/Bit Shift'
 * '<S153>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint6/Bit Shift/bit_shift'
 * '<S154>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint7/Bit Shift'
 * '<S155>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint7/Bit Shift/bit_shift'
 * '<S156>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint8/Bit Shift'
 * '<S157>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint8/Bit Shift/bit_shift'
 * '<S158>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint9/Bit Shift'
 * '<S159>' : 'HANcoder_E407_CAN_COMM_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Tx CAN/float2uint9/Bit Shift/bit_shift'
 */
#endif                                 /* RTW_HEADER_HANcoder_E407_CAN_COMM_TEST_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
