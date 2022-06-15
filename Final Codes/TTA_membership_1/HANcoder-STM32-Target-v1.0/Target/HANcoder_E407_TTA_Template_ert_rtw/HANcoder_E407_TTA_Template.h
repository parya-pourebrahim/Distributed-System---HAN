/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template.h
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

#ifndef RTW_HEADER_HANcoder_E407_TTA_Template_h_
#define RTW_HEADER_HANcoder_E407_TTA_Template_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef HANcoder_E407_TTA_Template_COMMON_INCLUDES_
# define HANcoder_E407_TTA_Template_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "can.h"
#include "canio.h"
#include "digout.h"
#include "timeout.h"
#include "digin.h"
#include "timein.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "anin.h"
#include "mac.h"
#endif                                 /* HANcoder_E407_TTA_Template_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_Template_types.h"

/* Macros for accessing real-time model data structure */
#define HANcoder_E407_TTA_Template_M   (rtM)

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

/* Block signals for system '<S10>/CAN1 Send' */
typedef struct {
  uint32_T DataTypeConversion1;        /* '<S27>/Data Type Conversion1' */
  uint8_T DataTypeConversion;          /* '<S27>/Data Type Conversion' */
  uint8_T DataTypeConversion10;        /* '<S27>/Data Type Conversion10' */
  uint8_T DataTypeConversion4;         /* '<S27>/Data Type Conversion4' */
  uint8_T DataTypeConversion5;         /* '<S27>/Data Type Conversion5' */
  uint8_T DataTypeConversion6;         /* '<S27>/Data Type Conversion6' */
  uint8_T DataTypeConversion7;         /* '<S27>/Data Type Conversion7' */
  uint8_T DataTypeConversion8;         /* '<S27>/Data Type Conversion8' */
  uint8_T DataTypeConversion9;         /* '<S27>/Data Type Conversion9' */
} rtB_CAN1Send;

/* Block states (default storage) for system '<S10>/CAN1 Send' */
typedef struct {
  uint32_T fcn_call_counter;           /* '<S27>/Data Store Memory1' */
} rtDW_CAN1Send;

/* Block signals for system '<S10>/CAN1 Recieve' */
typedef struct {
  uint8_T In1;                         /* '<S67>/In1' */
  uint8_T In2;                         /* '<S67>/In2' */
  uint8_T In3;                         /* '<S67>/In3' */
  uint8_T In4;                         /* '<S67>/In4' */
  uint8_T In5;                         /* '<S67>/In5' */
  uint8_T In6;                         /* '<S67>/In6' */
  uint8_T In7;                         /* '<S67>/In7' */
  uint8_T In8;                         /* '<S67>/In8' */
  uint8_T In1_j;                       /* '<S65>/In1' */
  uint8_T In2_l;                       /* '<S65>/In2' */
  uint8_T In3_o;                       /* '<S65>/In3' */
  uint8_T In4_c;                       /* '<S65>/In4' */
  uint8_T In5_g;                       /* '<S65>/In5' */
  uint8_T In6_h;                       /* '<S65>/In6' */
  uint8_T In7_b;                       /* '<S65>/In7' */
  uint8_T In8_a;                       /* '<S65>/In8' */
  uint8_T In1_d;                       /* '<S63>/In1' */
  uint8_T In2_a;                       /* '<S63>/In2' */
  uint8_T In3_n;                       /* '<S63>/In3' */
  uint8_T In4_m;                       /* '<S63>/In4' */
  uint8_T In5_k;                       /* '<S63>/In5' */
  uint8_T In6_j;                       /* '<S63>/In6' */
  uint8_T In7_o;                       /* '<S63>/In7' */
  uint8_T In8_k;                       /* '<S63>/In8' */
  uint8_T In1_p;                       /* '<S61>/In1' */
  uint8_T In2_k;                       /* '<S61>/In2' */
  uint8_T In3_b;                       /* '<S61>/In3' */
  uint8_T In4_l;                       /* '<S61>/In4' */
  uint8_T In5_c;                       /* '<S61>/In5' */
  uint8_T In6_i;                       /* '<S61>/In6' */
  uint8_T In7_m;                       /* '<S61>/In7' */
  uint8_T In8_c;                       /* '<S61>/In8' */
  uint8_T In1_pn;                      /* '<S59>/In1' */
  uint8_T In2_b;                       /* '<S59>/In2' */
  uint8_T In3_k;                       /* '<S59>/In3' */
  uint8_T In4_h;                       /* '<S59>/In4' */
  uint8_T In5_l;                       /* '<S59>/In5' */
  uint8_T In6_m;                       /* '<S59>/In6' */
  uint8_T In7_mm;                      /* '<S59>/In7' */
  uint8_T In8_e;                       /* '<S59>/In8' */
  uint8_T In1_k;                       /* '<S57>/In1' */
  uint8_T In2_c;                       /* '<S57>/In2' */
  uint8_T In3_i;                       /* '<S57>/In3' */
  uint8_T In4_b;                       /* '<S57>/In4' */
  uint8_T In5_m;                       /* '<S57>/In5' */
  uint8_T In6_n;                       /* '<S57>/In6' */
  uint8_T In7_l;                       /* '<S57>/In7' */
  uint8_T In8_aa;                      /* '<S57>/In8' */
  uint8_T In1_b;                       /* '<S55>/In1' */
  uint8_T In2_o;                       /* '<S55>/In2' */
  uint8_T In3_oq;                      /* '<S55>/In3' */
  uint8_T In4_i;                       /* '<S55>/In4' */
  uint8_T In5_md;                      /* '<S55>/In5' */
  uint8_T In6_hx;                      /* '<S55>/In6' */
  uint8_T In7_k;                       /* '<S55>/In7' */
  uint8_T In8_l;                       /* '<S55>/In8' */
  uint8_T In1_c;                       /* '<S53>/In1' */
  uint8_T In2_i;                       /* '<S53>/In2' */
  uint8_T In3_m;                       /* '<S53>/In3' */
  uint8_T In4_iv;                      /* '<S53>/In4' */
  uint8_T In5_h;                       /* '<S53>/In5' */
  uint8_T In6_d;                       /* '<S53>/In6' */
  uint8_T In7_bt;                      /* '<S53>/In7' */
  uint8_T In8_ku;                      /* '<S53>/In8' */
  uint8_T In1_g;                       /* '<S51>/In1' */
  uint8_T In2_p;                       /* '<S51>/In2' */
  uint8_T In3_l;                       /* '<S51>/In3' */
  uint8_T In4_n;                       /* '<S51>/In4' */
  uint8_T In5_o;                       /* '<S51>/In5' */
  uint8_T In6_l;                       /* '<S51>/In6' */
  uint8_T In7_f;                       /* '<S51>/In7' */
  uint8_T In8_kx;                      /* '<S51>/In8' */
  int8_T SFunction_o1;                 /* '<S66>/S-Function' */
  int8_T SFunction_o1_e;               /* '<S64>/S-Function' */
  int8_T SFunction_o1_m;               /* '<S62>/S-Function' */
  int8_T SFunction_o1_h;               /* '<S60>/S-Function' */
  int8_T SFunction_o1_l;               /* '<S58>/S-Function' */
  int8_T SFunction_o1_i;               /* '<S56>/S-Function' */
  int8_T SFunction_o1_o;               /* '<S54>/S-Function' */
  int8_T SFunction_o1_b;               /* '<S52>/S-Function' */
  int8_T SFunction_o1_k;               /* '<S50>/S-Function' */
} rtB_CAN1Recieve;

/* Block states (default storage) for system '<S10>/CAN1 Recieve' */
typedef struct {
  uint32_T fcn_call_counter;           /* '<S26>/Data Store Memory1' */
  boolean_T Vote3_ID_CAN_MODE;         /* '<S39>/Vote3_ID_CAN' */
  boolean_T Vote2_ID_CAN_MODE;         /* '<S39>/Vote2_ID_CAN' */
  boolean_T Vote1_ID_CAN_MODE;         /* '<S39>/Vote1_ID_CAN' */
  boolean_T Sync_ID_CAN_MODE;          /* '<S39>/Sync_ID_CAN' */
  boolean_T SetValues_ID_CAN_MODE;     /* '<S39>/SetValues_ID_CAN' */
  boolean_T SensorValues_ID_CAN_MODE;  /* '<S39>/SensorValues_ID_CAN' */
  boolean_T OutEmulator_ID_CAN_MODE;   /* '<S39>/OutEmulator_ID_CAN' */
  boolean_T OutControl2_ID_CAN_MODE;   /* '<S39>/OutControl2_ID_CAN' */
  boolean_T OutControl1_ID_CAN_MODE;   /* '<S39>/OutControl1_ID_CAN' */
} rtDW_CAN1Recieve;

/* Block signals for system '<S10>/CAN2 Recieve' */
typedef struct {
  uint8_T In1;                         /* '<S101>/In1' */
  uint8_T In2;                         /* '<S101>/In2' */
  uint8_T In3;                         /* '<S101>/In3' */
  uint8_T In4;                         /* '<S101>/In4' */
  uint8_T In5;                         /* '<S101>/In5' */
  uint8_T In6;                         /* '<S101>/In6' */
  uint8_T In7;                         /* '<S101>/In7' */
  uint8_T In8;                         /* '<S101>/In8' */
  uint8_T In1_l;                       /* '<S99>/In1' */
  uint8_T In2_i;                       /* '<S99>/In2' */
  uint8_T In3_l;                       /* '<S99>/In3' */
  uint8_T In4_e;                       /* '<S99>/In4' */
  uint8_T In5_c;                       /* '<S99>/In5' */
  uint8_T In6_g;                       /* '<S99>/In6' */
  uint8_T In7_j;                       /* '<S99>/In7' */
  uint8_T In8_p;                       /* '<S99>/In8' */
  uint8_T In1_m;                       /* '<S97>/In1' */
  uint8_T In2_j;                       /* '<S97>/In2' */
  uint8_T In3_d;                       /* '<S97>/In3' */
  uint8_T In4_n;                       /* '<S97>/In4' */
  uint8_T In5_i;                       /* '<S97>/In5' */
  uint8_T In6_n;                       /* '<S97>/In6' */
  uint8_T In7_e;                       /* '<S97>/In7' */
  uint8_T In8_i;                       /* '<S97>/In8' */
  uint8_T In1_b;                       /* '<S95>/In1' */
  uint8_T In2_c;                       /* '<S95>/In2' */
  uint8_T In3_n;                       /* '<S95>/In3' */
  uint8_T In4_m;                       /* '<S95>/In4' */
  uint8_T In5_k;                       /* '<S95>/In5' */
  uint8_T In6_l;                       /* '<S95>/In6' */
  uint8_T In7_b;                       /* '<S95>/In7' */
  uint8_T In8_k;                       /* '<S95>/In8' */
  uint8_T In1_mc;                      /* '<S93>/In1' */
  uint8_T In2_i4;                      /* '<S93>/In2' */
  uint8_T In3_m;                       /* '<S93>/In3' */
  uint8_T In4_f;                       /* '<S93>/In4' */
  uint8_T In5_l;                       /* '<S93>/In5' */
  uint8_T In6_o;                       /* '<S93>/In6' */
  uint8_T In7_eu;                      /* '<S93>/In7' */
  uint8_T In8_c;                       /* '<S93>/In8' */
  uint8_T In1_n;                       /* '<S91>/In1' */
  uint8_T In2_ie;                      /* '<S91>/In2' */
  uint8_T In3_p;                       /* '<S91>/In3' */
  uint8_T In4_c;                       /* '<S91>/In4' */
  uint8_T In5_kx;                      /* '<S91>/In5' */
  uint8_T In6_f;                       /* '<S91>/In6' */
  uint8_T In7_d;                       /* '<S91>/In7' */
  uint8_T In8_j;                       /* '<S91>/In8' */
  uint8_T In1_f;                       /* '<S89>/In1' */
  uint8_T In2_h;                       /* '<S89>/In2' */
  uint8_T In3_o;                       /* '<S89>/In3' */
  uint8_T In4_d;                       /* '<S89>/In4' */
  uint8_T In5_b;                       /* '<S89>/In5' */
  uint8_T In6_h;                       /* '<S89>/In6' */
  uint8_T In7_bb;                      /* '<S89>/In7' */
  uint8_T In8_p1;                      /* '<S89>/In8' */
  uint8_T In1_j;                       /* '<S87>/In1' */
  uint8_T In2_a;                       /* '<S87>/In2' */
  uint8_T In3_n2;                      /* '<S87>/In3' */
  uint8_T In4_k;                       /* '<S87>/In4' */
  uint8_T In5_p;                       /* '<S87>/In5' */
  uint8_T In6_ht;                      /* '<S87>/In6' */
  uint8_T In7_dx;                      /* '<S87>/In7' */
  uint8_T In8_l;                       /* '<S87>/In8' */
  uint8_T In1_b4;                      /* '<S85>/In1' */
  uint8_T In2_it;                      /* '<S85>/In2' */
  uint8_T In3_c;                       /* '<S85>/In3' */
  uint8_T In4_p;                       /* '<S85>/In4' */
  uint8_T In5_j;                       /* '<S85>/In5' */
  uint8_T In6_c;                       /* '<S85>/In6' */
  uint8_T In7_f;                       /* '<S85>/In7' */
  uint8_T In8_kt;                      /* '<S85>/In8' */
  int8_T SFunction_o1;                 /* '<S100>/S-Function' */
  int8_T SFunction_o1_c;               /* '<S98>/S-Function' */
  int8_T SFunction_o1_m;               /* '<S96>/S-Function' */
  int8_T SFunction_o1_d;               /* '<S94>/S-Function' */
  int8_T SFunction_o1_e;               /* '<S92>/S-Function' */
  int8_T SFunction_o1_mp;              /* '<S90>/S-Function' */
  int8_T SFunction_o1_c5;              /* '<S88>/S-Function' */
  int8_T SFunction_o1_ew;              /* '<S86>/S-Function' */
  int8_T SFunction_o1_f;               /* '<S84>/S-Function' */
} rtB_CAN2Recieve;

/* Block states (default storage) for system '<S10>/CAN2 Recieve' */
typedef struct {
  uint32_T fcn_call_counter;           /* '<S28>/Data Store Memory1' */
  boolean_T Vote3_ID_CAN_MODE;         /* '<S73>/Vote3_ID_CAN' */
  boolean_T Vote2_ID_CAN_MODE;         /* '<S73>/Vote2_ID_CAN' */
  boolean_T Vote1_ID_CAN_MODE;         /* '<S73>/Vote1_ID_CAN' */
  boolean_T Sync_ID_CAN_MODE;          /* '<S73>/Sync_ID_CAN' */
  boolean_T SetValues_ID_CAN_MODE;     /* '<S73>/SetValues_ID_CAN' */
  boolean_T SensorValues_ID_CAN_MODE;  /* '<S73>/SensorValues_ID_CAN' */
  boolean_T OutEmulator_ID_CAN_MODE;   /* '<S73>/OutEmulator_ID_CAN' */
  boolean_T OutControl2_ID_CAN_MODE;   /* '<S73>/OutControl2_ID_CAN' */
  boolean_T OutControl1_ID_CAN_MODE;   /* '<S73>/OutControl1_ID_CAN' */
} rtDW_CAN2Recieve;

/* Block signals for system '<S10>/CAN2 Send' */
typedef struct {
  uint32_T DataTypeConversion1;        /* '<S29>/Data Type Conversion1' */
  uint8_T DataTypeConversion;          /* '<S29>/Data Type Conversion' */
  uint8_T DataTypeConversion10;        /* '<S29>/Data Type Conversion10' */
  uint8_T DataTypeConversion4;         /* '<S29>/Data Type Conversion4' */
  uint8_T DataTypeConversion5;         /* '<S29>/Data Type Conversion5' */
  uint8_T DataTypeConversion6;         /* '<S29>/Data Type Conversion6' */
  uint8_T DataTypeConversion7;         /* '<S29>/Data Type Conversion7' */
  uint8_T DataTypeConversion8;         /* '<S29>/Data Type Conversion8' */
  uint8_T DataTypeConversion9;         /* '<S29>/Data Type Conversion9' */
} rtB_CAN2Send;

/* Block states (default storage) for system '<S10>/CAN2 Send' */
typedef struct {
  uint32_T fcn_call_counter;           /* '<S29>/Data Store Memory1' */
} rtDW_CAN2Send;

/* Block signals for system '<S10>/Measure EXecution time' */
typedef struct {
  boolean_T DataStoreRead1;            /* '<S113>/Data Store Read1' */
} rtB_MeasureEXecutiontime;

/* Block states (default storage) for system '<S10>/Measure EXecution time' */
typedef struct {
  boolean_T A3_Pin_State;              /* '<S34>/Data Store Memory4' */
  boolean_T DEBUGToggledigitalpinA3_MODE;/* '<S34>/DEBUG - Toggle digital pin A3' */
} rtDW_MeasureEXecutiontime;

/* Block signals for system '<S142>/Bit Shift3' */
typedef struct {
  uint8_T y;                           /* '<S146>/bit_shift' */
} rtB_BitShift3;

/* Block signals for system '<S142>/Bit Shift4' */
typedef struct {
  uint8_T y;                           /* '<S147>/bit_shift' */
} rtB_BitShift4;

/* Block signals for system '<S164>/Reception substasks' */
typedef struct {
  boolean_T AND;                       /* '<S181>/AND' */
  boolean_T AND1;                      /* '<S181>/AND1' */
} rtB_Receptionsubstasks;

/* Block states (default storage) for system '<S164>/Reception substasks' */
typedef struct {
  boolean_T Receptionsubstasks_MODE;   /* '<S164>/Reception substasks' */
} rtDW_Receptionsubstasks;

/* Block signals for system '<S188>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S190>/bit_shift' */
} rtB_BitShift1;

/* Block signals for system '<S164>/Transmission subtasks' */
typedef struct {
  uint8_T Constant;                    /* '<S186>/Constant' */
  boolean_T Equal7;                    /* '<S185>/Equal7' */
  boolean_T Equal7_a;                  /* '<S184>/Equal7' */
  rtB_BitShift1 BitShift1_h;           /* '<S194>/Bit Shift1' */
  rtB_BitShift4 BitShift_e;            /* '<S194>/Bit Shift' */
  rtB_BitShift1 BitShift1_a;           /* '<S188>/Bit Shift1' */
  rtB_BitShift4 BitShift_f;            /* '<S188>/Bit Shift' */
} rtB_Transmissionsubtasks;

/* Block states (default storage) for system '<S164>/Transmission subtasks' */
typedef struct {
  boolean_T Transmissionsubtasks_MODE; /* '<S164>/Transmission subtasks' */
  boolean_T CheckmsgtransmissionCAN2_MODE;/* '<S182>/Check msg transmission CAN2' */
  boolean_T CheckmsgtransmissionCAN1_MODE;/* '<S182>/Check msg transmission CAN1' */
} rtDW_Transmissionsubtasks;

/* Block signals for system '<S165>/Transmission subtasks' */
typedef struct {
  uint8_T Constant;                    /* '<S204>/Constant' */
  uint8_T DataStoreRead;               /* '<S204>/Data Store Read' */
  boolean_T Equal7;                    /* '<S203>/Equal7' */
  boolean_T Equal7_m;                  /* '<S202>/Equal7' */
  rtB_BitShift1 BitShift1_f;           /* '<S212>/Bit Shift1' */
  rtB_BitShift4 BitShift_i;            /* '<S212>/Bit Shift' */
  rtB_BitShift1 BitShift1_b;           /* '<S206>/Bit Shift1' */
  rtB_BitShift4 BitShift_o;            /* '<S206>/Bit Shift' */
} rtB_Transmissionsubtasks_f;

/* Block states (default storage) for system '<S165>/Transmission subtasks' */
typedef struct {
  boolean_T Transmissionsubtasks_MODE; /* '<S165>/Transmission subtasks' */
  boolean_T CheckmsgtransmissionCAN2_MODE;/* '<S200>/Check msg transmission CAN2' */
  boolean_T CheckmsgtransmissionCAN1_MODE;/* '<S200>/Check msg transmission CAN1' */
} rtDW_Transmissionsubtasks_h;

/* Block signals for system '<S267>/Bit Shift' */
typedef struct {
  uint8_T y;                           /* '<S269>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S267>/Bit Shift1' */
typedef struct {
  uint8_T y;                           /* '<S270>/bit_shift' */
} rtB_BitShift1_j;

/* Block signals for system '<S267>/Bit Shift2' */
typedef struct {
  uint8_T y;                           /* '<S271>/bit_shift' */
} rtB_BitShift2;

/* Block signals for system '<S262>/Demux message CAN1 and check coherence' */
typedef struct {
  uint8_T Buffer_2;                    /* '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_3;                    /* '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_4;                    /* '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_5;                    /* '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_6;                    /* '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_7;                    /* '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_8;                    /* '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Constant;                    /* '<S264>/Constant' */
  boolean_T AND;                       /* '<S264>/AND' */
  rtB_BitShift4 BitShift4_c;           /* '<S267>/Bit Shift4' */
  rtB_BitShift3 BitShift3_f;           /* '<S267>/Bit Shift3' */
  rtB_BitShift2 BitShift2_n;           /* '<S267>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_mg;        /* '<S267>/Bit Shift1' */
  rtB_BitShift BitShift_d;             /* '<S267>/Bit Shift' */
} rtB_DemuxmessageCAN1andcheckcoh;

/* Block states (default storage) for system '<S262>/Demux message CAN1 and check coherence' */
typedef struct {
  boolean_T DemuxmessageCAN1andcheckcoher_f;/* '<S262>/Demux message CAN1 and check coherence' */
} rtDW_DemuxmessageCAN1andcheckco;

/* Block signals for system '<S262>/Demux message CAN1 and check coherence1' */
typedef struct {
  uint8_T Buffer_2;                    /* '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_3;                    /* '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_4;                    /* '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_5;                    /* '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_6;                    /* '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_7;                    /* '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_8;                    /* '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Constant;                    /* '<S265>/Constant' */
  boolean_T AND;                       /* '<S265>/AND' */
  rtB_BitShift4 BitShift4_h;           /* '<S279>/Bit Shift4' */
  rtB_BitShift3 BitShift3_p;           /* '<S279>/Bit Shift3' */
  rtB_BitShift2 BitShift2_d;           /* '<S279>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_e;         /* '<S279>/Bit Shift1' */
  rtB_BitShift BitShift_h;             /* '<S279>/Bit Shift' */
} rtB_DemuxmessageCAN1andcheckc_k;

/* Block states (default storage) for system '<S262>/Demux message CAN1 and check coherence1' */
typedef struct {
  boolean_T DemuxmessageCAN1andcheckcoher_m;/* '<S262>/Demux message CAN1 and check coherence1' */
} rtDW_DemuxmessageCAN1andcheck_o;

/* Block signals for system '<S176>/Process_Messages1' */
typedef struct {
  uint8_T Buffer_2;                    /* '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_3;                    /* '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_4;                    /* '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_5;                    /* '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_6;                    /* '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_7;                    /* '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Buffer_8;                    /* '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
  uint8_T Constant;                    /* '<S302>/Constant' */
  uint8_T Buffer_2_i;                  /* '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_3_p;                  /* '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_4_k;                  /* '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_5_b;                  /* '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_6_d;                  /* '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_7_h;                  /* '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Buffer_8_p;                  /* '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
  uint8_T Constant_p;                  /* '<S301>/Constant' */
  boolean_T Equal;                     /* '<S302>/Equal' */
  boolean_T Equal_h;                   /* '<S301>/Equal' */
  rtB_BitShift4 BitShift4_k;           /* '<S315>/Bit Shift4' */
  rtB_BitShift3 BitShift3_e;           /* '<S315>/Bit Shift3' */
  rtB_BitShift2 BitShift2_b;           /* '<S315>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_g;         /* '<S315>/Bit Shift1' */
  rtB_BitShift BitShift_h;             /* '<S315>/Bit Shift' */
  rtB_BitShift4 BitShift4_i;           /* '<S303>/Bit Shift4' */
  rtB_BitShift3 BitShift3_a;           /* '<S303>/Bit Shift3' */
  rtB_BitShift2 BitShift2_e;           /* '<S303>/Bit Shift2' */
  rtB_BitShift1_j BitShift1_i;         /* '<S303>/Bit Shift1' */
  rtB_BitShift BitShift_b;             /* '<S303>/Bit Shift' */
} rtB_Process_Messages1;

/* Block states (default storage) for system '<S176>/Process_Messages1' */
typedef struct {
  boolean_T Process_Messages1_MODE;    /* '<S176>/Process_Messages1' */
  boolean_T DemuxmessageCAN1andcheckcoher_g;/* '<S299>/Demux message CAN1 and check coherence1' */
  boolean_T DemuxmessageCAN1andcheckcoher_d;/* '<S299>/Demux message CAN1 and check coherence' */
} rtDW_Process_Messages1;

/* Block signals for system '<S10>/TTA System' */
typedef struct {
  real_T SET;                          /* '<S139>/SET' */
  boolean_T signal1;                   /* '<S159>/Switch' */
  boolean_T signal2;                   /* '<S159>/Switch' */
  boolean_T signal3;                   /* '<S159>/Switch' */
  boolean_T signal4;                   /* '<S159>/Switch' */
  boolean_T OR1;                       /* '<S161>/OR1' */
  boolean_T OR2;                       /* '<S161>/OR2' */
  boolean_T OR3;                       /* '<S161>/OR3' */
  boolean_T OR4;                       /* '<S161>/OR4' */
  boolean_T DataStoreRead1;            /* '<S131>/Data Store Read1' */
  boolean_T DataStoreRead1_d;          /* '<S130>/Data Store Read1' */
  boolean_T DataStoreRead1_a;          /* '<S129>/Data Store Read1' */
  boolean_T DataStoreRead1_c;          /* '<S128>/Data Store Read1' */
  boolean_T DataStoreRead1_h;          /* '<S125>/Data Store Read1' */
  boolean_T DataStoreRead1_m;          /* '<S124>/Data Store Read1' */
  boolean_T DataStoreRead1_o;          /* '<S123>/Data Store Read1' */
  boolean_T DataStoreRead1_e;          /* '<S122>/Data Store Read1' */
  boolean_T DataStoreRead1_o1;         /* '<S121>/Data Store Read1' */
  rtB_DemuxmessageCAN1andcheckc_k DemuxmessageCAN1andcheckcoher_i;/* '<S409>/Demux message CAN1 and check coherence1' */
  rtB_DemuxmessageCAN1andcheckcoh DemuxmessageCAN1andcheckcoher_a;/* '<S409>/Demux message CAN1 and check coherence' */
  rtB_Transmissionsubtasks Transmissionsubtasks1;/* '<S385>/Transmission subtasks1' */
  rtB_Receptionsubstasks Receptionsubstasks_j;/* '<S385>/Reception substasks' */
  rtB_Process_Messages1 Process_Messages_gc;/* '<S180>/Process_Messages' */
  rtB_Process_Messages1 Process_Messages_g;/* '<S178>/Process_Messages' */
  rtB_Process_Messages1 Process_Messages1_c;/* '<S176>/Process_Messages1' */
  rtB_DemuxmessageCAN1andcheckc_k DemuxmessageCAN1andcheckcohe_p3;/* '<S262>/Demux message CAN1 and check coherence1' */
  rtB_DemuxmessageCAN1andcheckcoh DemuxmessageCAN1andcheckcoher_g;/* '<S262>/Demux message CAN1 and check coherence' */
  rtB_Transmissionsubtasks_f Transmissionsubtasks_a;/* '<S167>/Transmission subtasks' */
  rtB_Receptionsubstasks Receptionsubstasks_e;/* '<S167>/Reception substasks' */
  rtB_Transmissionsubtasks_f Transmissionsubtasks_d;/* '<S166>/Transmission subtasks' */
  rtB_Receptionsubstasks Receptionsubstasks_g;/* '<S166>/Reception substasks' */
  rtB_Transmissionsubtasks_f Transmissionsubtasks_pw;/* '<S165>/Transmission subtasks' */
  rtB_Receptionsubstasks Receptionsubstasks_k;/* '<S165>/Reception substasks' */
  rtB_Transmissionsubtasks Transmissionsubtasks_l;/* '<S164>/Transmission subtasks' */
  rtB_Receptionsubstasks Receptionsubstasks_h;/* '<S164>/Reception substasks' */
  rtB_BitShift4 BitShift4_d;           /* '<S142>/Bit Shift4' */
  rtB_BitShift3 BitShift3_i;           /* '<S142>/Bit Shift3' */
  rtB_MeasureEXecutiontime MeasureEXecutiontime_d;/* '<S10>/Measure EXecution time' */
  rtB_CAN2Send CAN2Send_h;             /* '<S10>/CAN2 Send' */
  rtB_CAN2Recieve CAN2Recieve_b;       /* '<S10>/CAN2 Recieve' */
  rtB_CAN1Recieve CAN1Recieve_h;       /* '<S10>/CAN1 Recieve' */
  rtB_CAN1Send CAN1Send_o;             /* '<S10>/CAN1 Send' */
} rtB_TTASystem;

/* Block states (default storage) for system '<S10>/TTA System' */
typedef struct {
  vote_array Votes_count;              /* '<S159>/Data Store Memory9' */
  real_T Role_ID;                      /* '<S36>/Data Store Memory2' */
  real_T Desync_Ticks;                 /* '<S36>/Data Store Memory4' */
  real_T msg_count_DEBUG;              /* '<S159>/Data Store Memory' */
  real_T Board1_error_counter;         /* '<S159>/Data Store Memory1' */
  real_T Sync_bc1_missed_counter;      /* '<S159>/Data Store Memory13' */
  real_T Board2_error_counter;         /* '<S159>/Data Store Memory2' */
  real_T Board3_error_counter;         /* '<S159>/Data Store Memory3' */
  real_T Sync_bc0_missed_counter;      /* '<S159>/Data Store Memory7' */
  real_T BC0_TM1_timeout_counter;      /* '<S254>/Data Store Memory' */
  real_T BC0_TM2_timeout_counter;      /* '<S255>/Data Store Memory' */
  real_T BC0_TM3_timeout_counter;      /* '<S256>/Data Store Memory' */
  real_T Delay_Counter;                /* '<S126>/Data Store Memory1' */
  msg_buffer_type Msg_Rx_d;            /* '<S161>/Data Store Memory11' */
  int32_T FindNonzeroElements_DIMS1;   /* '<S258>/Find Nonzero Elements' */
  int32_T Switch_1_DIMS1;              /* '<S127>/Switch' */
  int32_T Switch_2_DIMS1;              /* '<S127>/Switch' */
  struct {
    uint_T is_active_c8_HANcoder_E407_TTA_:1;/* '<S36>/Chart4' */
    uint_T is_active_c7_HANcoder_E407_TTA_:1;/* '<S36>/Chart3' */
    uint_T is_active_c6_HANcoder_E407_TTA_:1;/* '<S36>/Chart2' */
    uint_T is_active_c5_HANcoder_E407_TTA_:1;/* '<S36>/Chart1' */
    uint_T is_active_c4_HANcoder_E407_TTA_:1;/* '<S36>/Chart' */
  } bitsForTID1;

  uint8_T basic_cycle_count;           /* '<S36>/Data Store Memory11' */
  uint8_T Own_Vote;                    /* '<S159>/Data Store Memory12' */
  boolean_T D13_Pin_State;             /* '<S36>/Data Store Memory22' */
  boolean_T D12_Pin_State;             /* '<S36>/Data Store Memory24' */
  boolean_T D9_Pin_State;              /* '<S36>/Data Store Memory26' */
  boolean_T D8_Pin_State;              /* '<S36>/Data Store Memory28' */
  boolean_T A2_Pin_State;              /* '<S36>/Data Store Memory3' */
  boolean_T Initialization_flag;       /* '<S36>/Data Store Memory13' */
  boolean_T Toggle_Pin_A1;             /* '<S36>/Data Store Memory19' */
  boolean_T Toggle_Pin_D10;            /* '<S36>/Data Store Memory7' */
  boolean_T BC0_Sync_processed;        /* '<S36>/Data Store Memory10' */
  boolean_T BC1_Sync_processed;        /* '<S36>/Data Store Memory15' */
  boolean_T A0_Pin_State;              /* '<S36>/Data Store Memory' */
  boolean_T A1_Pin_State;              /* '<S36>/Data Store Memory1' */
  boolean_T A4_Pin_State;              /* '<S36>/Data Store Memory5' */
  boolean_T D10_Pin_State;             /* '<S36>/Data Store Memory6' */
  boolean_T Desync_Positive;           /* '<S36>/Data Store Memory14' */
  boolean_T BC0_Vote2_processed;       /* '<S159>/Data Store Memory4' */
  boolean_T BC0_Vote3_processed;       /* '<S159>/Data Store Memory5' */
  boolean_T BC0_Vote1_processed;       /* '<S159>/Data Store Memory6' */
  boolean_T new_msg_Rx;                /* '<S162>/Data Store Memory8' */
  boolean_T Reset_Board;               /* '<S161>/Data Store Memory7' */
  boolean_T new_msg_Rx_l;              /* '<S161>/Data Store Memory8' */
  boolean_T Initialization_Timeout;    /* '<S126>/Data Store Memory' */
  boolean_T MatrixCycleManager_MODE;   /* '<S36>/Matrix Cycle Manager' */
  boolean_T ControllerMatrixCycle_MODE;/* '<S132>/Controller Matrix Cycle' */
  boolean_T controllerbasiccycle1_MODE;/* '<S159>/controller basic cycle 1' */
  boolean_T COMPTaskSyncbc1check_MODE; /* '<S162>/COMP Task - Sync bc1 check' */
  boolean_T Process_Messages_MODE;     /* '<S387>/Process_Messages' */
  boolean_T COMMTaskSyncbc1_MODE;      /* '<S162>/COMM Task - Sync bc 1' */
  boolean_T controllerbasiccycle0_MODE;/* '<S159>/controller basic cycle 0' */
  boolean_T COMPTaskVote3check_MODE;   /* '<S161>/COMP Task - Vote3 check' */
  boolean_T COMPTaskVote2check_MODE;   /* '<S161>/COMP Task - Vote2 check' */
  boolean_T COMPTaskVote1check_MODE;   /* '<S161>/COMP Task - Vote1 check' */
  boolean_T COMPTaskSyncbc0check_MODE; /* '<S161>/COMP Task - Sync bc0 check' */
  boolean_T Process_Messages_MODE_e;   /* '<S172>/Process_Messages' */
  boolean_T COMMTaskVote3_MODE;        /* '<S161>/COMM Task - Vote3' */
  boolean_T COMMTaskVote2_MODE;        /* '<S161>/COMM Task - Vote2' */
  boolean_T COMMTaskVote1_MODE;        /* '<S161>/COMM Task - Vote1' */
  boolean_T COMMTaskSyncbc0_MODE;      /* '<S161>/COMM Task - Sync bc 0' */
  boolean_T LogicAnalyzerCOMMdelayCAN2Tx_MO;/* '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */
  boolean_T LogicAnalyzerCOMMdelayCAN2Rx_MO;/* '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */
  boolean_T LogicAnalyzerCOMMdelayCAN1Tx_MO;/* '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */
  boolean_T LogicAnalyzerCOMMdelayCAN1Rx_MO;/* '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */
  boolean_T Initialization_MODE;       /* '<S36>/Initialization' */
  boolean_T RoleIDandGlobalTimeinit_MODE;/* '<S126>/RoleID and Global Time init' */
  boolean_T DEBUGToggledigitalpinD10_MODE;/* '<S36>/DEBUG - Toggle digital pin D10' */
  boolean_T DEBUGToggledigitalpinA4_MODE;/* '<S36>/DEBUG - Toggle digital pin A4' */
  boolean_T DEBUGToggledigitalpinA2_MODE;/* '<S36>/DEBUG - Toggle digital pin A2' */
  boolean_T DEBUGToggledigitalpinA1_MODE;/* '<S36>/DEBUG - Toggle digital pin A1' */
  boolean_T DEBUGToggledigitalpinA0_MODE;/* '<S36>/DEBUG - Toggle digital pin A0' */
  rtDW_DemuxmessageCAN1andcheck_o DemuxmessageCAN1andcheckcoher_i;/* '<S409>/Demux message CAN1 and check coherence1' */
  rtDW_DemuxmessageCAN1andcheckco DemuxmessageCAN1andcheckcoher_a;/* '<S409>/Demux message CAN1 and check coherence' */
  rtDW_Transmissionsubtasks Transmissionsubtasks1;/* '<S385>/Transmission subtasks1' */
  rtDW_Receptionsubstasks Receptionsubstasks_j;/* '<S385>/Reception substasks' */
  rtDW_Process_Messages1 Process_Messages_gc;/* '<S180>/Process_Messages' */
  rtDW_Process_Messages1 Process_Messages_g;/* '<S178>/Process_Messages' */
  rtDW_Process_Messages1 Process_Messages1_c;/* '<S176>/Process_Messages1' */
  rtDW_DemuxmessageCAN1andcheck_o DemuxmessageCAN1andcheckcohe_p3;/* '<S262>/Demux message CAN1 and check coherence1' */
  rtDW_DemuxmessageCAN1andcheckco DemuxmessageCAN1andcheckcoher_g;/* '<S262>/Demux message CAN1 and check coherence' */
  rtDW_Transmissionsubtasks_h Transmissionsubtasks_a;/* '<S167>/Transmission subtasks' */
  rtDW_Receptionsubstasks Receptionsubstasks_e;/* '<S167>/Reception substasks' */
  rtDW_Transmissionsubtasks_h Transmissionsubtasks_d;/* '<S166>/Transmission subtasks' */
  rtDW_Receptionsubstasks Receptionsubstasks_g;/* '<S166>/Reception substasks' */
  rtDW_Transmissionsubtasks_h Transmissionsubtasks_pw;/* '<S165>/Transmission subtasks' */
  rtDW_Receptionsubstasks Receptionsubstasks_k;/* '<S165>/Reception substasks' */
  rtDW_Transmissionsubtasks Transmissionsubtasks_l;/* '<S164>/Transmission subtasks' */
  rtDW_Receptionsubstasks Receptionsubstasks_h;/* '<S164>/Reception substasks' */
  rtDW_MeasureEXecutiontime MeasureEXecutiontime_d;/* '<S10>/Measure EXecution time' */
  rtDW_CAN2Send CAN2Send_h;            /* '<S10>/CAN2 Send' */
  rtDW_CAN2Recieve CAN2Recieve_b;      /* '<S10>/CAN2 Recieve' */
  rtDW_CAN1Recieve CAN1Recieve_h;      /* '<S10>/CAN1 Recieve' */
  rtDW_CAN1Send CAN1Send_o;            /* '<S10>/CAN1 Send' */
} rtDW_TTASystem;

/* Block signals (default storage) */
typedef struct {
  uint16_T Sum;                        /* '<S33>/Sum' */
  uint8_T Output;                      /* '<S13>/Output' */
  boolean_T Logic[2];                  /* '<S21>/Logic' */
  rtB_TTASystem TTASystem_c;           /* '<S10>/TTA System' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T init_clock;                   /* '<S10>/Data Store Memory18' */
  real_T Toggle_Pin_D13;               /* '<S10>/Data Store Memory21' */
  real_T Toggle_Pin_D12;               /* '<S10>/Data Store Memory23' */
  real_T Toggle_Pin_D9;                /* '<S10>/Data Store Memory25' */
  real_T Toggle_Pin_D8;                /* '<S10>/Data Store Memory27' */
  real_T Board_ID;                     /* '<S10>/Data Store Memory13' */
  real_T Master_ID;                    /* '<S10>/Data Store Memory5' */
  real_T Tx_msg_count_CAN1;            /* '<S10>/Data Store Memory' */
  real_T Tx_msg_count_CAN2;            /* '<S10>/Data Store Memory20' */
  msg_buffer_type Msg_Tx_CAN1;         /* '<S10>/Data Store Memory1' */
  msg_buffer_type Msg_Rx_CAN2;         /* '<S10>/Data Store Memory15' */
  msg_buffer_type Msg_Tx_CAN2;         /* '<S10>/Data Store Memory16' */
  msg_buffer_type Msg_Rx_CAN1;         /* '<S10>/Data Store Memory9' */
  uint32_T RxID_CAN2;                  /* '<S10>/Data Store Memory14' */
  uint32_T TxID_CAN2;                  /* '<S10>/Data Store Memory17' */
  uint32_T TxID_CAN1;                  /* '<S10>/Data Store Memory3' */
  uint32_T RxID_CAN1;                  /* '<S10>/Data Store Memory8' */
  struct {
    uint_T is_active_c9_HANcoder_E407_TTA_:1;/* '<S33>/Chart' */
  } bitsForTID1;

  uint16_T Local_Ticks;                /* '<S10>/Data Store Memory10' */
  uint16_T Msg_Rx_Ticks_CAN1;          /* '<S10>/Data Store Memory11' */
  uint16_T Msg_Rx_Ticks_CAN2;          /* '<S10>/Data Store Memory2' */
  uint8_T Output_DSTATE;               /* '<S12>/Output' */
  uint8_T Output_DSTATE_k;             /* '<S13>/Output' */
  int8_T If_ActiveSubsystem;           /* '<S10>/If' */
  uint8_T Rx_State_CAN2;               /* '<S10>/Data Store Memory12' */
  uint8_T Rx_State_CAN1;               /* '<S10>/Data Store Memory7' */
  boolean_T Toggle_Pin_A0;             /* '<S10>/Data Store Memory19' */
  boolean_T TmpLatchAtJKFlipFlopInport1_Pre;/* synthesized block */
  boolean_T TmpLatchAtJKFlipFlopInport2_Pre;/* synthesized block */
  boolean_T New_Msg_Ready_CAN1;        /* '<S10>/Data Store Memory4' */
  boolean_T New_Msg_Ready_CAN2;        /* '<S10>/Data Store Memory6' */
  boolean_T Memory_PreviousInput;      /* '<S21>/Memory' */
  boolean_T InitializeClockSchedule_MODE;/* '<S10>/Initialize Clock Schedule' */
  rtDW_TTASystem TTASystem_c;          /* '<S10>/TTA System' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState JKFlipFlop_Trig_ZCE;      /* '<S20>/J-K Flip-Flop' */
} PrevZCSigStates;

/* Invariant block signals for system '<S164>/Reception substasks' */
typedef struct {
  const uint32_T Cast13;               /* '<S183>/Cast13' */
  const uint32_T Cast3;                /* '<S183>/Cast3' */
  const uint8_T Cast15;                /* '<S183>/Cast15' */
  const uint8_T Cast6;                 /* '<S183>/Cast6' */
  const boolean_T Cast14;              /* '<S183>/Cast14' */
  const boolean_T Cast5;               /* '<S183>/Cast5' */
} rtC_Receptionsubstasks;

/* Invariant block signals for system '<S164>/Transmission subtasks' */
typedef struct {
  const uint32_T Cast8;                /* '<S193>/Cast8' */
  const uint32_T Cast;                 /* '<S187>/Cast' */
} rtC_Transmissionsubtasks;

/* Invariant block signals for system '<S165>/Transmission subtasks' */
typedef struct {
  const uint32_T Cast8;                /* '<S211>/Cast8' */
  const uint32_T Cast;                 /* '<S205>/Cast' */
} rtC_Transmissionsubtasks_d;

/* Invariant block signals for system '<S10>/TTA System' */
typedef struct {
  const real_T Sum18;                  /* '<S162>/Sum18' */
  const real_T Sum1;                   /* '<S162>/Sum1' */
  const real_T Sum2;                   /* '<S162>/Sum2' */
  const real_T Sum4;                   /* '<S162>/Sum4' */
  const real_T Sum14;                  /* '<S161>/Sum14' */
  const real_T Sum15;                  /* '<S161>/Sum15' */
  const real_T Sum17;                  /* '<S161>/Sum17' */
  const real_T Sum16;                  /* '<S161>/Sum16' */
  const real_T Sum1_j;                 /* '<S161>/Sum1' */
  const real_T Sum2_n;                 /* '<S161>/Sum2' */
  const real_T Sum3;                   /* '<S161>/Sum3' */
  const real_T Sum7;                   /* '<S161>/Sum7' */
  const real_T Sum6;                   /* '<S161>/Sum6' */
  const real_T Sum10;                  /* '<S161>/Sum10' */
  const real_T Sum9;                   /* '<S161>/Sum9' */
  const real_T Sum11;                  /* '<S161>/Sum11' */
  const real_T Sum13;                  /* '<S161>/Sum13' */
  const real_T Sum4_p;                 /* '<S161>/Sum4' */
  const real_T Sum12;                  /* '<S161>/Sum12' */
  const real_T Sum5;                   /* '<S161>/Sum5' */
  const real_T Sum8;                   /* '<S161>/Sum8' */
  const real_T Add1;                   /* '<S115>/Add1' */
  const uint16_T Cast;                 /* '<S140>/Cast' */
  const uint8_T Cast6;                 /* '<S260>/Cast6' */
  const uint8_T Cast1;                 /* '<S140>/Cast1' */
  const uint8_T Cast_e;                /* '<S115>/Cast' */
  const boolean_T Cast_h;              /* '<S261>/Cast' */
  const boolean_T Cast_p;              /* '<S260>/Cast' */
  const boolean_T NOT;                 /* '<S260>/NOT' */
  rtC_Transmissionsubtasks Transmissionsubtasks1;/* '<S385>/Transmission subtasks1' */
  rtC_Receptionsubstasks Receptionsubstasks_j;/* '<S385>/Reception substasks' */
  rtC_Transmissionsubtasks_d Transmissionsubtasks_a;/* '<S167>/Transmission subtasks' */
  rtC_Receptionsubstasks Receptionsubstasks_e;/* '<S167>/Reception substasks' */
  rtC_Transmissionsubtasks_d Transmissionsubtasks_d;/* '<S166>/Transmission subtasks' */
  rtC_Receptionsubstasks Receptionsubstasks_g;/* '<S166>/Reception substasks' */
  rtC_Transmissionsubtasks_d Transmissionsubtasks_pw;/* '<S165>/Transmission subtasks' */
  rtC_Receptionsubstasks Receptionsubstasks_k;/* '<S165>/Reception substasks' */
  rtC_Transmissionsubtasks Transmissionsubtasks_l;/* '<S164>/Transmission subtasks' */
  rtC_Receptionsubstasks Receptionsubstasks_h;/* '<S164>/Reception substasks' */
} rtC_TTASystem;

/* Invariant block signals (default storage) */
typedef struct {
  rtC_TTASystem TTASystem_c;           /* '<S10>/TTA System' */
} ConstBlockIO;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S127>/Constant'
   */
  real_T Constant_Value_f[20];

  /* Expression: TM_Type_bc0
   * Referenced by: '<S127>/Constant1'
   */
  real_T Constant1_Value[20];

  /* Computed Parameter: Logic_table
   * Referenced by: '<S21>/Logic'
   */
  boolean_T Logic_table[16];
} ConstParam;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    struct {
      uint8_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* External data declarations for dependent source files */
extern const msg_buffer_type HANcoder_E407_TTA_Template_rtZmsg_buffer_type;/* msg_buffer_type ground */
extern const ConstBlockIO rtConstB;    /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstParam rtConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T simulation_time;         /* '<S10>/Digital Clock' */
extern real_T script_run_s;            /* '<S10>/Constant' */
extern real_T Board_ID_s;              /* '<S31>/Add' */
extern uint32_T SI_FreeHeap;           /* '<S24>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S25>/Level-2 M-file S-Function' */
extern uint16_T local_ticks_interrupt; /* '<S33>/Switch' */
extern uint8_T SI_CPUload;             /* '<S23>/Level-2 M-file S-Function' */
extern boolean_T LedValue;             /* '<S2>/Data Type Conversion' */
extern real_T Master_ID_s;             /* '<S160>/Data Store Read' */
extern real_T Role_ID_s;               /* '<S160>/Data Store Read1' */
extern real_T sync_bc0_miss_counter_s; /* '<S160>/Data Store Read11' */
extern real_T sync_bc1_miss_counter_s; /* '<S160>/Data Store Read12' */
extern real_T votes_Board_1_DEBUG;     /* '<S160>/Data Store Read3' */
extern real_T votes_Board_2_DEBUG;     /* '<S160>/Data Store Read3' */
extern real_T votes_Board_3_DEBUG;     /* '<S160>/Data Store Read3' */
extern real_T Board_1_error_counter_s; /* '<S160>/Data Store Read4' */
extern real_T Board_2_error_counter_s; /* '<S160>/Data Store Read5' */
extern real_T Board_3_error_counter_s; /* '<S160>/Data Store Read6' */
extern real_T msg_count_DEBUG_s;       /* '<S163>/Data Store Read24' */
extern real_T Desync_Sync_bc1_s;       /* '<S413>/Saturation' */
extern real_T Desync_Sync_bc0_s;       /* '<S266>/Saturation' */
extern real_T TM1_timeout_counter_s;   /* '<S254>/Switch' */
extern real_T TM2_timeout_counter_s;   /* '<S255>/Switch' */
extern real_T TM3_timeout_counter_s;   /* '<S256>/Switch' */
extern uint16_T Rx_init_LT;            /* '<S141>/Cast' */
extern uint8_T Vote_s;                 /* '<S294>/Cast' */
extern uint8_T Rx_init_id;             /* '<S145>/bit_shift' */
extern uint8_T Rx_init_mc;             /* '<S144>/bit_shift' */
extern uint8_T Rx_init_bc;             /* '<S143>/bit_shift' */
extern uint8_T bacic_cycle_s;          /* '<S115>/Switch' */
extern boolean_T BC1_sync_processed_s; /* '<S160>/Data Store Read10' */
extern boolean_T BC0_sync_processed_s; /* '<S160>/Data Store Read2' */
extern boolean_T BC0_vote1_processed_s;/* '<S160>/Data Store Read7' */
extern boolean_T BC0_vote2_processed_s;/* '<S160>/Data Store Read8' */
extern boolean_T BC0_vote3_processed_s;/* '<S160>/Data Store Read9' */
extern boolean_T reset_s;              /* '<S170>/Data Store Read' */
extern real_T Tx_temporal_msg_CAN2;    /* '<S29>/Cast To Double' */
extern uint32_T TxCAN2_counter_s;      /* '<S29>/Sum1' */
extern uint32_T TxID_CAN2_s;           /* '<S29>/Data Store Read3' */
extern real_T Rx_temporal_msg_CAN2;    /* '<S74>/Cast To Double' */
extern uint32_T RxCAN2_counter_s;      /* '<S28>/Sum1' */
extern uint32_T RxID_CAN2_s;           /* '<S28>/Data Store Read' */
extern uint16_T Rx_msg_ticks_CAN2;     /* '<S74>/Local_Time' */
extern real_T Rx_temporal_msg_CAN1;    /* '<S40>/Cast To Double' */
extern uint32_T RxCAN1_counter_s;      /* '<S26>/Sum1' */
extern uint32_T RxID_CAN1_s;           /* '<S26>/Data Store Read' */
extern uint16_T Rx_msg_ticks_CAN1;     /* '<S40>/Local_Time' */
extern real_T Tx_temporal_msg_CAN1;    /* '<S27>/Cast To Double' */
extern uint32_T TxCAN1_counter_s;      /* '<S27>/Sum1' */
extern uint32_T TxID_CAN1_s;           /* '<S27>/Data Store Read3' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T COMM_Phase1;             /* Variable: COMM_Phase1
                                        * Referenced by:
                                        *   '<S127>/Constant2'
                                        *   '<S141>/Constant1'
                                        *   '<S184>/Constant24'
                                        *   '<S184>/Constant27'
                                        *   '<S202>/Constant24'
                                        *   '<S202>/Constant27'
                                        *   '<S220>/Constant24'
                                        *   '<S220>/Constant27'
                                        *   '<S238>/Constant24'
                                        *   '<S238>/Constant27'
                                        *   '<S266>/Constant'
                                        *   '<S392>/Constant24'
                                        *   '<S392>/Constant27'
                                        *   '<S413>/Constant'
                                        */
extern real_T COMM_Phase2;             /* Variable: COMM_Phase2
                                        * Referenced by:
                                        *   '<S127>/Constant3'
                                        *   '<S141>/Constant2'
                                        *   '<S185>/Constant24'
                                        *   '<S185>/Constant27'
                                        *   '<S203>/Constant24'
                                        *   '<S203>/Constant27'
                                        *   '<S221>/Constant24'
                                        *   '<S221>/Constant27'
                                        *   '<S239>/Constant24'
                                        *   '<S239>/Constant27'
                                        *   '<S266>/Constant1'
                                        *   '<S393>/Constant24'
                                        *   '<S393>/Constant27'
                                        *   '<S413>/Constant1'
                                        */
extern real_T COMM_Phase_init1;        /* Variable: COMM_Phase_init1
                                        * Referenced by:
                                        *   '<S127>/Constant6'
                                        *   '<S184>/Constant'
                                        *   '<S202>/Constant'
                                        *   '<S220>/Constant'
                                        *   '<S238>/Constant'
                                        *   '<S392>/Constant'
                                        */
extern real_T COMM_Phase_init2;        /* Variable: COMM_Phase_init2
                                        * Referenced by:
                                        *   '<S127>/Constant7'
                                        *   '<S185>/Constant'
                                        *   '<S203>/Constant'
                                        *   '<S221>/Constant'
                                        *   '<S239>/Constant'
                                        *   '<S393>/Constant'
                                        */
extern real_T script_run;              /* Variable: script_run
                                        * Referenced by: '<S10>/Constant'
                                        */
extern boolean_T HANtuneOverride;      /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_Template_initialize(void);
extern void HANcoder_E407_TTA_Template_step(void);

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
 * '<Root>' : 'HANcoder_E407_TTA_Template'
 * '<S1>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm'
 * '<S3>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S5>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S7>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode'
 * '<S8>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Outputs'
 * '<S9>'   : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S10>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System'
 * '<S11>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S12>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter'
 * '<S13>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited'
 * '<S14>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Increment Real World'
 * '<S15>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Wrap To Zero'
 * '<S16>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Increment Real World'
 * '<S17>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Wrap To Zero'
 * '<S18>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input'
 * '<S19>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode/Flip Flop T'
 * '<S20>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode/Flip Flop T/J-K Flip-Flop'
 * '<S21>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode/Flip Flop T/J-K Flip-Flop/J-K Flip-Flop'
 * '<S22>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output'
 * '<S23>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S24>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S25>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 * '<S26>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve'
 * '<S27>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Send'
 * '<S28>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve'
 * '<S29>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Send'
 * '<S30>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Compare Event IRQ'
 * '<S31>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/If Action Subsystem'
 * '<S32>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Initialize Clock Schedule'
 * '<S33>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation'
 * '<S34>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Measure EXecution time'
 * '<S35>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Output Compare Init'
 * '<S36>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System'
 * '<S37>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/Buffer ready'
 * '<S38>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/Prepare buffer'
 * '<S39>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN'
 * '<S40>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/Update message buffers'
 * '<S41>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutControl1_ID_CAN'
 * '<S42>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutControl2_ID_CAN'
 * '<S43>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutEmulator_ID_CAN'
 * '<S44>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/SensorValues_ID_CAN'
 * '<S45>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/SetValues_ID_CAN'
 * '<S46>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Sync_ID_CAN'
 * '<S47>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote1_ID_CAN'
 * '<S48>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote2_ID_CAN'
 * '<S49>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote3_ID_CAN'
 * '<S50>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutControl1_ID_CAN/CAN receive1'
 * '<S51>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutControl1_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S52>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutControl2_ID_CAN/CAN receive1'
 * '<S53>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutControl2_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S54>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutEmulator_ID_CAN/CAN receive1'
 * '<S55>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/OutEmulator_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S56>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/SensorValues_ID_CAN/CAN receive1'
 * '<S57>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/SensorValues_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S58>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/SetValues_ID_CAN/CAN receive1'
 * '<S59>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/SetValues_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S60>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Sync_ID_CAN/CAN receive1'
 * '<S61>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Sync_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S62>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote1_ID_CAN/CAN receive1'
 * '<S63>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote1_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S64>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote2_ID_CAN/CAN receive1'
 * '<S65>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote2_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S66>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote3_ID_CAN/CAN receive1'
 * '<S67>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/RxID_CAN/Vote3_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S68>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Recieve/Update message buffers/Logic Analyzer - COMM delay measurement'
 * '<S69>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Send/CAN send'
 * '<S70>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN1 Send/Logic Analyzer - COMM delay measurement'
 * '<S71>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/Buffer ready'
 * '<S72>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/Prepare buffer'
 * '<S73>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN'
 * '<S74>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/Update message buffers'
 * '<S75>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutControl1_ID_CAN'
 * '<S76>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutControl2_ID_CAN'
 * '<S77>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutEmulator_ID_CAN'
 * '<S78>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/SensorValues_ID_CAN'
 * '<S79>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/SetValues_ID_CAN'
 * '<S80>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Sync_ID_CAN'
 * '<S81>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote1_ID_CAN'
 * '<S82>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote2_ID_CAN'
 * '<S83>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote3_ID_CAN'
 * '<S84>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutControl1_ID_CAN/CAN receive1'
 * '<S85>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutControl1_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S86>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutControl2_ID_CAN/CAN receive1'
 * '<S87>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutControl2_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S88>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutEmulator_ID_CAN/CAN receive1'
 * '<S89>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/OutEmulator_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S90>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/SensorValues_ID_CAN/CAN receive1'
 * '<S91>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/SensorValues_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S92>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/SetValues_ID_CAN/CAN receive1'
 * '<S93>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/SetValues_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S94>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Sync_ID_CAN/CAN receive1'
 * '<S95>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Sync_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S96>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote1_ID_CAN/CAN receive1'
 * '<S97>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote1_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S98>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote2_ID_CAN/CAN receive1'
 * '<S99>'  : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote2_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S100>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote3_ID_CAN/CAN receive1'
 * '<S101>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/RxID_CAN/Vote3_ID_CAN/CAN receive1/Enabled Subsystem'
 * '<S102>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Recieve/Update message buffers/Logic Analyzer - COMM delay measurement'
 * '<S103>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Send/CAN send1'
 * '<S104>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/CAN2 Send/Logic Analyzer - COMM delay measurement'
 * '<S105>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/If Action Subsystem/Digital Input4'
 * '<S106>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/If Action Subsystem/Digital Input5'
 * '<S107>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/If Action Subsystem/Digital Input6'
 * '<S108>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/If Action Subsystem/Digital Input7'
 * '<S109>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Initialize Clock Schedule/Schedule Compare Event'
 * '<S110>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart'
 * '<S111>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Get Last Event Counter'
 * '<S112>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Schedule Compare Event1'
 * '<S113>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Measure EXecution time/DEBUG - Toggle digital pin A3'
 * '<S114>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Measure EXecution time/DEBUG - Toggle digital pin A3/Digital Output1'
 * '<S115>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Basic Cycle Increment'
 * '<S116>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart'
 * '<S117>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1'
 * '<S118>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2'
 * '<S119>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3'
 * '<S120>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4'
 * '<S121>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A0'
 * '<S122>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A1'
 * '<S123>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A2'
 * '<S124>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A4'
 * '<S125>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin D10'
 * '<S126>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization'
 * '<S127>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/LT_Update Desync_Positive'
 * '<S128>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN1 - Rx'
 * '<S129>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN1 - Tx'
 * '<S130>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN2 - Rx'
 * '<S131>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN2 - Tx'
 * '<S132>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager'
 * '<S133>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A0/Digital Output'
 * '<S134>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A1/Digital Output'
 * '<S135>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A2/Digital Output'
 * '<S136>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin A4/Digital Output'
 * '<S137>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/DEBUG - Toggle digital pin D10/Digital Output'
 * '<S138>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/Delay'
 * '<S139>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init'
 * '<S140>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Master'
 * '<S141>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave'
 * '<S142>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding'
 * '<S143>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift'
 * '<S144>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift1'
 * '<S145>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift2'
 * '<S146>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift3'
 * '<S147>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift4'
 * '<S148>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift/bit_shift'
 * '<S149>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift1/bit_shift'
 * '<S150>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift2/bit_shift'
 * '<S151>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift3/bit_shift'
 * '<S152>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Initialization/RoleID and Global Time init/Global Time Initialization Slave/msg_decoding/Bit Shift4/bit_shift'
 * '<S153>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/LT_Update Desync_Positive/Local Time Update with Positive Desync'
 * '<S154>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/LT_Update Desync_Positive/MATLAB Function'
 * '<S155>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN1 - Rx/Digital Output'
 * '<S156>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN1 - Tx/Digital Output'
 * '<S157>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN2 - Rx/Digital Output'
 * '<S158>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Logic Analyzer - COMM delay CAN2 - Tx/Digital Output'
 * '<S159>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle'
 * '<S160>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/Matrix_Cycle_Observation_DEBUG'
 * '<S161>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0'
 * '<S162>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1'
 * '<S163>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/msg_count_DEBUG observer'
 * '<S164>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0'
 * '<S165>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1'
 * '<S166>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2'
 * '<S167>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3'
 * '<S168>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Check Timeouts'
 * '<S169>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - New Master'
 * '<S170>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Reset Board'
 * '<S171>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Reset Variables BC0'
 * '<S172>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check'
 * '<S173>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Update LT'
 * '<S174>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote Decision'
 * '<S175>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 Count'
 * '<S176>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check'
 * '<S177>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 Count'
 * '<S178>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check'
 * '<S179>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 Count'
 * '<S180>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check'
 * '<S181>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Reception substasks'
 * '<S182>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks'
 * '<S183>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Reception substasks/RX buffers update'
 * '<S184>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN1'
 * '<S185>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN2'
 * '<S186>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Msg_Value_Data_Encoded'
 * '<S187>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1'
 * '<S188>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder'
 * '<S189>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift'
 * '<S190>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1'
 * '<S191>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S192>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S193>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2'
 * '<S194>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder'
 * '<S195>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift'
 * '<S196>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1'
 * '<S197>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S198>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Sync bc 0/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S199>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Reception substasks'
 * '<S200>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks'
 * '<S201>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Reception substasks/RX buffers update'
 * '<S202>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN1'
 * '<S203>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN2'
 * '<S204>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Msg_Value_Data_Encoded'
 * '<S205>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1'
 * '<S206>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder'
 * '<S207>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift'
 * '<S208>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1'
 * '<S209>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S210>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S211>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2'
 * '<S212>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder'
 * '<S213>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift'
 * '<S214>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1'
 * '<S215>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S216>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote1/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S217>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Reception substasks'
 * '<S218>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks'
 * '<S219>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Reception substasks/RX buffers update'
 * '<S220>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN1'
 * '<S221>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN2'
 * '<S222>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Msg_Value_Data_Encoded'
 * '<S223>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1'
 * '<S224>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder'
 * '<S225>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift'
 * '<S226>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1'
 * '<S227>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S228>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S229>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2'
 * '<S230>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder'
 * '<S231>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift'
 * '<S232>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1'
 * '<S233>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S234>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote2/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S235>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Reception substasks'
 * '<S236>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks'
 * '<S237>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Reception substasks/RX buffers update'
 * '<S238>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN1'
 * '<S239>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN2'
 * '<S240>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Msg_Value_Data_Encoded'
 * '<S241>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1'
 * '<S242>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder'
 * '<S243>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift'
 * '<S244>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1'
 * '<S245>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S246>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S247>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2'
 * '<S248>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder'
 * '<S249>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift'
 * '<S250>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1'
 * '<S251>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S252>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMM Task - Vote3/Transmission subtasks/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S253>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Check Timeouts/Timeout and Board error counter'
 * '<S254>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Check Timeouts/Timeout and Board error counter/Timeout Counter 1 DEBUG'
 * '<S255>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Check Timeouts/Timeout and Board error counter/Timeout Counter 2 DEBUG'
 * '<S256>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Check Timeouts/Timeout and Board error counter/Timeout Counter 3 DEBUG'
 * '<S257>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - New Master/New Master'
 * '<S258>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - New Master/New Master/Votes recount to choose Master'
 * '<S259>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - New Master/New Master/Votes recount to choose Master/Compare To Constant'
 * '<S260>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Reset Board/RESET Board - Return to initialization'
 * '<S261>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Reset Variables BC0/Reset variables'
 * '<S262>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages'
 * '<S263>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Reset Tx msg counter'
 * '<S264>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence'
 * '<S265>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1'
 * '<S266>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Desync calculation'
 * '<S267>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem'
 * '<S268>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/msg_count>2_DEBUG'
 * '<S269>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift'
 * '<S270>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1'
 * '<S271>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2'
 * '<S272>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3'
 * '<S273>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4'
 * '<S274>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift/bit_shift'
 * '<S275>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1/bit_shift'
 * '<S276>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2/bit_shift'
 * '<S277>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3/bit_shift'
 * '<S278>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4/bit_shift'
 * '<S279>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem'
 * '<S280>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/msg_count>2_DEBUG'
 * '<S281>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift'
 * '<S282>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1'
 * '<S283>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2'
 * '<S284>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3'
 * '<S285>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4'
 * '<S286>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift/bit_shift'
 * '<S287>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1/bit_shift'
 * '<S288>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2/bit_shift'
 * '<S289>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3/bit_shift'
 * '<S290>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Sync bc0 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4/bit_shift'
 * '<S291>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Update LT/LA - Ensemble precision'
 * '<S292>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Update LT/Local Time Update'
 * '<S293>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Update LT/Local Time Update/Desync_Negative'
 * '<S294>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote Decision/Vote Decision'
 * '<S295>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote Decision/Vote Decision/Ensure no self votes or failed master reelected'
 * '<S296>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote Decision/Vote Decision/Ensure no self votes or failed master reelected1'
 * '<S297>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote Decision/Vote Decision/Ensure no self votes or failed master reelected2'
 * '<S298>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 Count/Vote Count 1'
 * '<S299>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1'
 * '<S300>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Reset Tx msg counter'
 * '<S301>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence'
 * '<S302>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1'
 * '<S303>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem'
 * '<S304>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/msg_count>2_DEBUG'
 * '<S305>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift'
 * '<S306>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift1'
 * '<S307>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift2'
 * '<S308>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift3'
 * '<S309>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift4'
 * '<S310>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift/bit_shift'
 * '<S311>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift1/bit_shift'
 * '<S312>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift2/bit_shift'
 * '<S313>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift3/bit_shift'
 * '<S314>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence/Subsystem/Bit Shift4/bit_shift'
 * '<S315>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem'
 * '<S316>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/msg_count>2_DEBUG'
 * '<S317>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift'
 * '<S318>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1'
 * '<S319>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2'
 * '<S320>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3'
 * '<S321>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4'
 * '<S322>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift/bit_shift'
 * '<S323>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1/bit_shift'
 * '<S324>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2/bit_shift'
 * '<S325>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3/bit_shift'
 * '<S326>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote1 check/Process_Messages1/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4/bit_shift'
 * '<S327>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 Count/Vote Count 2'
 * '<S328>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages'
 * '<S329>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Reset Tx msg counter'
 * '<S330>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence'
 * '<S331>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1'
 * '<S332>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem'
 * '<S333>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/msg_count>2_DEBUG'
 * '<S334>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift'
 * '<S335>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1'
 * '<S336>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2'
 * '<S337>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3'
 * '<S338>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4'
 * '<S339>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift/bit_shift'
 * '<S340>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1/bit_shift'
 * '<S341>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2/bit_shift'
 * '<S342>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3/bit_shift'
 * '<S343>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4/bit_shift'
 * '<S344>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem'
 * '<S345>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/msg_count>2_DEBUG'
 * '<S346>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift'
 * '<S347>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1'
 * '<S348>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2'
 * '<S349>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3'
 * '<S350>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4'
 * '<S351>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift/bit_shift'
 * '<S352>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1/bit_shift'
 * '<S353>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2/bit_shift'
 * '<S354>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3/bit_shift'
 * '<S355>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote2 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4/bit_shift'
 * '<S356>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 Count/Vote Count 3'
 * '<S357>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages'
 * '<S358>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Reset Tx msg counter'
 * '<S359>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence'
 * '<S360>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1'
 * '<S361>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem'
 * '<S362>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/msg_count>2_DEBUG'
 * '<S363>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift'
 * '<S364>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1'
 * '<S365>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2'
 * '<S366>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3'
 * '<S367>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4'
 * '<S368>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift/bit_shift'
 * '<S369>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1/bit_shift'
 * '<S370>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2/bit_shift'
 * '<S371>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3/bit_shift'
 * '<S372>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4/bit_shift'
 * '<S373>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem'
 * '<S374>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/msg_count>2_DEBUG'
 * '<S375>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift'
 * '<S376>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1'
 * '<S377>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2'
 * '<S378>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3'
 * '<S379>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4'
 * '<S380>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift/bit_shift'
 * '<S381>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1/bit_shift'
 * '<S382>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2/bit_shift'
 * '<S383>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3/bit_shift'
 * '<S384>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 0/COMP Task - Vote3 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4/bit_shift'
 * '<S385>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1'
 * '<S386>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Reset Variables BC1'
 * '<S387>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check'
 * '<S388>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Update LT1'
 * '<S389>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Reception substasks'
 * '<S390>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1'
 * '<S391>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Reception substasks/RX buffers update'
 * '<S392>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN1'
 * '<S393>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN2'
 * '<S394>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Msg_Value_Data_Encoded'
 * '<S395>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN1/TX buffer update CAN1'
 * '<S396>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder'
 * '<S397>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift'
 * '<S398>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1'
 * '<S399>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S400>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN1/TX buffer update CAN1/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S401>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN2/TX buffer update CAN2'
 * '<S402>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder'
 * '<S403>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift'
 * '<S404>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1'
 * '<S405>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift/bit_shift'
 * '<S406>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMM Task - Sync bc 1/Transmission subtasks1/Check msg transmission CAN2/TX buffer update CAN2/Msg_Data_Encoder/Bit Shift1/bit_shift'
 * '<S407>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Reset Variables BC1/Check Timeouts'
 * '<S408>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Reset Variables BC1/Reset Variables'
 * '<S409>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages'
 * '<S410>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Reset Tx msg counter'
 * '<S411>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence'
 * '<S412>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1'
 * '<S413>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Desync calculation'
 * '<S414>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem'
 * '<S415>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/msg_count>2_DEBUG'
 * '<S416>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift'
 * '<S417>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1'
 * '<S418>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2'
 * '<S419>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3'
 * '<S420>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4'
 * '<S421>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift/bit_shift'
 * '<S422>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift1/bit_shift'
 * '<S423>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift2/bit_shift'
 * '<S424>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift3/bit_shift'
 * '<S425>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence/Subsystem/Bit Shift4/bit_shift'
 * '<S426>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem'
 * '<S427>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/msg_count>2_DEBUG'
 * '<S428>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift'
 * '<S429>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1'
 * '<S430>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2'
 * '<S431>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3'
 * '<S432>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4'
 * '<S433>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift/bit_shift'
 * '<S434>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift1/bit_shift'
 * '<S435>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift2/bit_shift'
 * '<S436>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift3/bit_shift'
 * '<S437>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Sync bc1 check/Process_Messages/Demux message CAN1 and check coherence1/Subsystem/Bit Shift4/bit_shift'
 * '<S438>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Update LT1/LA - Ensemble precision'
 * '<S439>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Update LT1/Local Time Update'
 * '<S440>' : 'HANcoder_E407_TTA_Template/HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Update LT1/Local Time Update/Desync_Negative'
 */
#endif                                 /* RTW_HEADER_HANcoder_E407_TTA_Template_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
