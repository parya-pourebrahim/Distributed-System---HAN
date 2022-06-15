/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller_ValueDomain_TEST.h
 *
 * Code generated for Simulink model 'Controller_ValueDomain_TEST'.
 *
 * Model version                  : 1.82
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 09:06:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Controller_ValueDomain_TEST_h_
#define RTW_HEADER_Controller_ValueDomain_TEST_h_
#ifndef Controller_ValueDomain_TEST_COMMON_INCLUDES_
# define Controller_ValueDomain_TEST_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "digout.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "anin.h"
#include "mac.h"
#endif                                 /* Controller_ValueDomain_TEST_COMMON_INCLUDES_ */

#include "Controller_ValueDomain_TEST_types.h"

/* Macros for accessing real-time model data structure */
#define Controller_ValueDomain_TEST_M  (rtM)

/* Block signals (default storage) */
typedef struct {
  uint8_T Output;                      /* '<S11>/Output' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Local_Ticks;                  /* '<S8>/Data Store Memory' */
  real_T v_set_stored;                 /* '<S8>/Data Store Memory1' */
  real_T theta_ar_stored;              /* '<S8>/Data Store Memory10' */
  real_T theta_al_stored;              /* '<S8>/Data Store Memory11' */
  real_T delta_f_est;                  /* '<S8>/Data Store Memory12' */
  real_T delta_a_est;                  /* '<S8>/Data Store Memory13' */
  real_T theta_ar_prev;                /* '<S8>/Data Store Memory14' */
  real_T theta_al_prev;                /* '<S8>/Data Store Memory15' */
  real_T theta_fr_prev;                /* '<S8>/Data Store Memory16' */
  real_T theta_fl_prev;                /* '<S8>/Data Store Memory17' */
  real_T rx_data_time;                 /* '<S8>/Data Store Memory18' */
  real_T rx_data_prev_time;            /* '<S8>/Data Store Memory19' */
  real_T delta_f_set_stored;           /* '<S8>/Data Store Memory2' */
  real_T torque_fr_out;                /* '<S8>/Data Store Memory20' */
  real_T torque_fl_out;                /* '<S8>/Data Store Memory21' */
  real_T delta_dot_f_prev;             /* '<S8>/Data Store Memory22' */
  real_T delta_dot_a_prev;             /* '<S8>/Data Store Memory23' */
  real_T torque_ar_out;                /* '<S8>/Data Store Memory24' */
  real_T torque_al_out;                /* '<S8>/Data Store Memory25' */
  real_T delta_f_error_prev;           /* '<S8>/Data Store Memory26' */
  real_T delta_a_error_prev;           /* '<S8>/Data Store Memory27' */
  real_T torque_fr_integral;           /* '<S8>/Data Store Memory28' */
  real_T delta_a_set_stored;           /* '<S8>/Data Store Memory3' */
  real_T torque_ar_integral;           /* '<S8>/Data Store Memory30' */
  real_T theta_dot_fr;                 /* '<S8>/Data Store Memory32' */
  real_T theta_dot_ar;                 /* '<S8>/Data Store Memory33' */
  real_T theta_dot_fl;                 /* '<S8>/Data Store Memory34' */
  real_T theta_dot_al;                 /* '<S8>/Data Store Memory35' */
  real_T torque_fr_set;                /* '<S8>/Data Store Memory37' */
  real_T torque_fl_set;                /* '<S8>/Data Store Memory38' */
  real_T torque_ar_set;                /* '<S8>/Data Store Memory39' */
  real_T theta_fr;                     /* '<S8>/Data Store Memory4' */
  real_T torque_al_set;                /* '<S8>/Data Store Memory40' */
  real_T speed_error_prev;             /* '<S8>/Data Store Memory42' */
  real_T speed_integral;               /* '<S8>/Data Store Memory43' */
  real_T torque_fr;                    /* '<S8>/Data Store Memory45' */
  real_T torque_fl;                    /* '<S8>/Data Store Memory46' */
  real_T torque_ar;                    /* '<S8>/Data Store Memory47' */
  real_T torque_al;                    /* '<S8>/Data Store Memory48' */
  real_T delta_dot_f;                  /* '<S8>/Data Store Memory49' */
  real_T theta_fl;                     /* '<S8>/Data Store Memory5' */
  real_T delta_dot_a;                  /* '<S8>/Data Store Memory50' */
  real_T delta_double_dot_f_prev;      /* '<S8>/Data Store Memory51' */
  real_T delta_double_dot_a_prev;      /* '<S8>/Data Store Memory52' */
  real_T speed_act;                    /* '<S8>/Data Store Memory53' */
  real_T theta_fr_incr;                /* '<S8>/Data Store Memory54' */
  real_T theta_fl_incr;                /* '<S8>/Data Store Memory55' */
  real_T theta_ar;                     /* '<S8>/Data Store Memory6' */
  real_T theta_dot_fr_prev_ve;         /* '<S8>/Data Store Memory61' */
  real_T theta_dot_fl_prev_ve;         /* '<S8>/Data Store Memory62' */
  real_T theta_dot_ar_prev_ve;         /* '<S8>/Data Store Memory63' */
  real_T theta_dot_al_prev_ve;         /* '<S8>/Data Store Memory64' */
  real_T avg_force_prev;               /* '<S8>/Data Store Memory65' */
  real_T theta_ar_incr;                /* '<S8>/Data Store Memory66' */
  real_T theta_al_incr;                /* '<S8>/Data Store Memory67' */
  real_T theta_al;                     /* '<S8>/Data Store Memory7' */
  real_T theta_fr_stored;              /* '<S8>/Data Store Memory8' */
  real_T theta_fl_stored;              /* '<S8>/Data Store Memory9' */
  uint8_T Output_DSTATE;               /* '<S10>/Output' */
  uint8_T Output_DSTATE_k;             /* '<S11>/Output' */
} D_Work;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Gain1;                  /* '<S27>/Gain1' */
} ConstBlockIO;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick3;
    uint32_T clockTickH3;
    struct {
      uint16_T TID[4];
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
extern real_T LT_s;                    /* '<S8>/Data Store Read' */
extern real_T simulation_time;         /* '<S8>/Digital Clock' */
extern real_T theta_fr_s;              /* '<S48>/Minus2' */
extern real_T theta_fl_s;              /* '<S47>/Minus2' */
extern real_T theta_ar_s;              /* '<S46>/Minus2' */
extern real_T theta_al_s;              /* '<S45>/Minus2' */
extern real_T rx_data_time_s;          /* '<S27>/Gain' */
extern real_T theta_fr_stored_s;       /* '<S23>/Data Store Read1' */
extern real_T theta_fl_stored_s;       /* '<S23>/Data Store Read' */
extern real_T delta_dot_f_s;           /* '<S23>/Gain4' */
extern real_T theta_ar_stored_s;       /* '<S23>/Data Store Read2' */
extern real_T theta_al_stored_s;       /* '<S23>/Data Store Read3' */
extern real_T delta_dot_a_s;           /* '<S23>/Gain5' */
extern real_T delta_f_est_current_s;   /* '<S23>/Data Store Read20' */
extern real_T delta_dot_f_prev_s;      /* '<S23>/Data Store Read22' */
extern real_T rx_data_t_steerF_s;      /* '<S23>/Data Store Read16' */
extern real_T rx_data_prev_t_steerF_s; /* '<S23>/Data Store Read17' */
extern real_T delta_f_est_s;           /* '<S37>/Minus2' */
extern real_T delta_a_est_current_s;   /* '<S23>/Data Store Read21' */
extern real_T delta_dot_a_prev_s;      /* '<S23>/Data Store Read23' */
extern real_T rx_data_t_steerA_s;      /* '<S23>/Data Store Read18' */
extern real_T rx_data_prev_t_steerA_s; /* '<S23>/Data Store Read19' */
extern real_T delta_a_est_s;           /* '<S36>/Minus2' */
extern real_T v_est_s;                 /* '<S22>/Gain4' */
extern real_T v_integral_s;            /* '<S31>/Minus2' */
extern real_T v_ctreff_s;              /* '<S22>/Sum2' */
extern real_T torque_fr_set_s;         /* '<S22>/Sum3' */
extern real_T torque_fl_set_s;         /* '<S22>/Sum4' */
extern real_T torque_ar_set_s;         /* '<S22>/Sum5' */
extern real_T torque_al_set_s;         /* '<S22>/Sum6' */
extern uint32_T SI_FreeHeap;           /* '<S19>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S20>/Level-2 M-file S-Function' */
extern uint8_T SI_CPUload;             /* '<S18>/Level-2 M-file S-Function' */
extern boolean_T LedValue;             /* '<S2>/Data Type Conversion' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T delta_a_set;             /* Variable: delta_a_set
                                        * Referenced by: '<S28>/Constant2'
                                        */
extern real_T delta_f_set;             /* Variable: delta_f_set
                                        * Referenced by: '<S28>/Constant1'
                                        */
extern real_T speed_k_d;               /* Variable: speed_k_d
                                        * Referenced by: '<S22>/Gain7'
                                        */
extern real_T speed_k_i;               /* Variable: speed_k_i
                                        * Referenced by: '<S22>/Gain6'
                                        */
extern real_T speed_k_p;               /* Variable: speed_k_p
                                        * Referenced by: '<S22>/Gain5'
                                        */
extern real_T torque_a_k_d;            /* Variable: torque_a_k_d
                                        * Referenced by: '<S24>/Gain7'
                                        */
extern real_T torque_a_k_i;            /* Variable: torque_a_k_i
                                        * Referenced by: '<S24>/Gain6'
                                        */
extern real_T torque_a_k_p;            /* Variable: torque_a_k_p
                                        * Referenced by: '<S24>/Gain5'
                                        */
extern real_T torque_f_k_d;            /* Variable: torque_f_k_d
                                        * Referenced by: '<S24>/Gain4'
                                        */
extern real_T torque_f_k_i;            /* Variable: torque_f_k_i
                                        * Referenced by: '<S24>/Gain3'
                                        */
extern real_T torque_f_k_p;            /* Variable: torque_f_k_p
                                        * Referenced by: '<S24>/Gain2'
                                        */
extern real_T v_set;                   /* Variable: v_set
                                        * Referenced by: '<S28>/Constant'
                                        */
extern boolean_T HANtuneOverride;      /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void Controller_ValueDomain_TEST_initialize(void);
extern void Controller_ValueDomain_TEST_step(void);

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
 * '<Root>' : 'Controller_ValueDomain_TEST'
 * '<S1>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm'
 * '<S3>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S5>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S6>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Outputs'
 * '<S7>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S8>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain'
 * '<S9>'   : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S10>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter'
 * '<S11>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited'
 * '<S12>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Increment Real World'
 * '<S13>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Wrap To Zero'
 * '<S14>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Increment Real World'
 * '<S15>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Wrap To Zero'
 * '<S16>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input'
 * '<S17>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output'
 * '<S18>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S19>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S20>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 * '<S21>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Basic_Cycle_Manager'
 * '<S22>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate speed'
 * '<S23>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate steering'
 * '<S24>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate torque'
 * '<S25>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Local_Time_Generator'
 * '<S26>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Output torques'
 * '<S27>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Rx_Sensor_Values'
 * '<S28>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Rx_Set_Values'
 * '<S29>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator'
 * '<S30>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate speed/Derivative speed'
 * '<S31>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate speed/Integral speed'
 * '<S32>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate steering/Derivative_theta_al'
 * '<S33>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate steering/Derivative_theta_ar'
 * '<S34>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate steering/Derivative_theta_fl'
 * '<S35>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate steering/Derivative_theta_fr'
 * '<S36>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate steering/Integral_delta_a_est'
 * '<S37>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate steering/Integral_delta_f_est'
 * '<S38>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate torque/Derivative toque aft'
 * '<S39>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate torque/Derivative torque front'
 * '<S40>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate torque/Integral torque aft'
 * '<S41>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Calculate torque/Integral torque front'
 * '<S42>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator/Integral delta_dot aft'
 * '<S43>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator/Integral delta_dot front'
 * '<S44>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator/Integral speed act'
 * '<S45>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator/Integral theta aft left'
 * '<S46>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator/Integral theta aft right'
 * '<S47>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator/Integral theta front left'
 * '<S48>'  : 'Controller_ValueDomain_TEST/HANcoder STM32 Target - E407-STM32 algorithm/TTA Controller Value Domain/Vehicle emulator/Integral theta front right'
 */
#endif                                 /* RTW_HEADER_Controller_ValueDomain_TEST_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
