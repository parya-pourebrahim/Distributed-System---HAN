/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v4_6_private.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v4_6'.
 *
 * Model version                  : 1.179
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  8 18:05:42 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_Controller_v4_6_private_h_
#define RTW_HEADER_HANcoder_E407_TTA_Controller_v4_6_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "HANcoder_E407_TTA_Controller_v4_6.h"

extern real_T rt_modd(real_T u0, real_T u1);
extern real_T rt_roundd(real_T u);
void CanDrvByteSwap_x(uint8_t *b, size_t n);
extern void CAN1Send(rtB_CAN1Send *localB, rtDW_CAN1Send *localDW,
                     msg_buffer_type *rtd_Msg_Tx_CAN1, boolean_T
                     *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D13, uint32_T
                     *rtd_TxID_CAN1, real_T *rtd_Tx_msg_count_CAN1);
extern void CAN1Recieve_Start(void);
extern void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve
  *localDW);
extern void CAN1Recieve(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW,
  uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN1, uint16_T
  *rtd_Msg_Rx_Ticks_CAN1, boolean_T *rtd_New_Msg_Ready_CAN1, uint32_T
  *rtd_RxID_CAN1, uint8_T *rtd_Rx_State_CAN1, boolean_T *rtd_Toggle_Pin_A0,
  real_T *rtd_Toggle_Pin_D12);
extern void CAN2Recieve_Start(void);
extern void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve
  *localDW);
extern void CAN2Recieve(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW,
  uint16_T *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
  *rtd_Msg_Rx_Ticks_CAN2, boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T
  *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0,
  real_T *rtd_Toggle_Pin_D8);
extern void CAN2Send(rtB_CAN2Send *localB, rtDW_CAN2Send *localDW,
                     msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
                     *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D9, uint32_T
                     *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN2);
extern void MeasureEXecutiontime_Start(void);
extern void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW);
extern void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW);
extern void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB);
extern void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB);
extern void BitShift(uint8_T rtu_u, rtB_BitShift *localB);
extern void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB);
extern void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW);
extern void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Receptionsubstasks *localB, const rtC_Receptionsubstasks *localC,
  rtDW_Receptionsubstasks *localDW, uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_d, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2,
  uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
  *rtd_new_msg_Rx_l);
extern void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW);
extern void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count, real_T *rtd_delta_a_est, real_T *rtd_delta_f_est,
  real_T *rtd_speed_integral, real_T *rtd_torque_ar_integral, real_T
  *rtd_torque_fr_integral);
extern void COMMTaskSyncbc0_Disable(rtB_COMMTaskSyncbc0 *localB,
  rtDW_COMMTaskSyncbc0 *localDW);
extern void COMMTaskSyncbc0(boolean_T rtu_Enable, real_T rtu_TimeMark,
  rtB_COMMTaskSyncbc0 *localB, const rtC_COMMTaskSyncbc0 *localC,
  rtDW_COMMTaskSyncbc0 *localDW, real_T *rtd_Board_ID, uint16_T *rtd_Local_Ticks,
  msg_buffer_type *rtd_Msg_Rx_d, msg_buffer_type *rtd_Msg_Tx_CAN1,
  msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1,
  uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
  *rtd_Rx_State_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count, real_T *rtd_delta_a_est, real_T *rtd_delta_f_est,
  boolean_T *rtd_new_msg_Rx_l, real_T *rtd_speed_integral, real_T
  *rtd_torque_ar_integral, real_T *rtd_torque_fr_integral);
extern void Transmissionsubtasks_l_Disable(rtB_Transmissionsubtasks_f *localB,
  rtDW_Transmissionsubtasks_h *localDW);
extern void Transmissionsubtasks_p(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks_f *localB, const rtC_Transmissionsubtasks_d *localC,
  rtDW_Transmissionsubtasks_h *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint8_T *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T
  *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2,
  uint8_T *rtd_basic_cycle_count);
extern void BitShift1_m(uint8_T rtu_u, rtB_BitShift1_j *localB);
extern void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB);
extern void DemuxmessageCAN1andchec_Disable(rtB_DemuxmessageCAN1andcheckcoh
  *localB, rtDW_DemuxmessageCAN1andcheckco *localDW);
extern void DemuxmessageCAN1andcheckcoheren(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW, real_T *rtd_msg_count_DEBUG_i);
extern void DemuxmessageCAN1andch_l_Disable(rtB_DemuxmessageCAN1andcheckc_k
  *localB, rtDW_DemuxmessageCAN1andcheck_o *localDW);
extern void DemuxmessageCAN1andcheckcoher_p(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW, real_T *rtd_msg_count_DEBUG_i);
extern void ResetTxmsgcounter(boolean_T rtu_Enable, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2);
extern void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time,
  real_T *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks);
extern void DemuxmessageCAN1andch_p_Disable(rtB_DemuxmessageCAN1andcheckc_c
  *localB, rtDW_DemuxmessageCAN1andcheck_f *localDW);
extern void DemuxmessageCAN1andcheckcoher_e(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN1_Rx_msg, real_T rtu_expected_board_id,
  rtB_DemuxmessageCAN1andcheckc_c *localB, rtDW_DemuxmessageCAN1andcheck_f
  *localDW, real_T *rtd_msg_count_DEBUG_i);
extern void DemuxmessageCAN1andch_a_Disable(rtB_DemuxmessageCAN1andcheckc_p
  *localB, rtDW_DemuxmessageCAN1andcheck_c *localDW);
extern void DemuxmessageCAN1andcheckcoher_m(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN2_Rx_msg, real_T rtu_expected_board_id,
  rtB_DemuxmessageCAN1andcheckc_p *localB, rtDW_DemuxmessageCAN1andcheck_c
  *localDW, real_T *rtd_msg_count_DEBUG_i);
extern void Process_Messages1_Disable(rtB_Process_Messages1 *localB,
  rtDW_Process_Messages1 *localDW);
extern void Process_Messages1(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  rtB_Process_Messages1 *localB, rtDW_Process_Messages1 *localDW,
  msg_buffer_type *rtd_Msg_Rx_d, boolean_T *rtd_Toggle_Pin_A0, real_T
  *rtd_msg_count_DEBUG_i, boolean_T *rtd_new_msg_Rx_l);
extern void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW);
extern void CheckmsgtransmissionCAN1(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_c, uint8_T rtu_ValueDomainMsg_d, uint8_T
  rtu_ValueDomainMsg_k, uint8_T rtu_ValueDomainMsg_p, uint8_T
  rtu_ValueDomainMsg_o, uint8_T rtu_ValueDomainMsg_kq,
  rtB_CheckmsgtransmissionCAN1 *localB, const rtC_CheckmsgtransmissionCAN1
  *localC, rtDW_CheckmsgtransmissionCAN1 *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, real_T
  *rtd_Tx_msg_count_CAN1, uint8_T *rtd_basic_cycle_count);
extern void CheckmsgtransmissionC_e_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW);
extern void CheckmsgtransmissionCAN2(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_n, uint8_T rtu_ValueDomainMsg_g, uint8_T
  rtu_ValueDomainMsg_m, uint8_T rtu_ValueDomainMsg_i, uint8_T
  rtu_ValueDomainMsg_j, uint8_T rtu_ValueDomainMsg_f,
  rtB_CheckmsgtransmissionCAN2 *localB, const rtC_CheckmsgtransmissionCAN2
  *localC, rtDW_CheckmsgtransmissionCAN2 *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count);
extern void Transmissionsubtasks1_Disable(rtB_Transmissionsubtasks1 *localB,
  rtDW_Transmissionsubtasks1 *localDW);
extern void Transmissionsubtasks1(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks1 *localB, const rtC_Transmissionsubtasks1 *localC,
  rtDW_Transmissionsubtasks1 *localDW, real_T *rtd_Board_ID, boolean_T
  *rtd_Error_SensorValues_NotRX, boolean_T *rtd_Error_SetValues_NotRX, uint16_T *
  rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count, real_T *rtd_torque_al_set, real_T *rtd_torque_ar_set,
  real_T *rtd_torque_fl_set, real_T *rtd_torque_fr_set);
extern void Checkmsgtransmission_ek_Disable(rtB_CheckmsgtransmissionCAN1_c
  *localB, rtDW_CheckmsgtransmissionCAN1_m *localDW);
extern void CheckmsgtransmissionCAN1_o(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_m, uint8_T rtu_ValueDomainMsg_l, uint8_T
  rtu_ValueDomainMsg_g, uint8_T rtu_ValueDomainMsg_d,
  rtB_CheckmsgtransmissionCAN1_c *localB, const rtC_CheckmsgtransmissionCAN1_c
  *localC, rtDW_CheckmsgtransmissionCAN1_m *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, real_T
  *rtd_Tx_msg_count_CAN1, uint8_T *rtd_basic_cycle_count);
extern void CheckmsgtransmissionC_o_Disable(rtB_CheckmsgtransmissionCAN2_o
  *localB, rtDW_CheckmsgtransmissionCAN2_j *localDW);
extern void CheckmsgtransmissionCAN2_d(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_b, uint8_T rtu_ValueDomainMsg_g, uint8_T
  rtu_ValueDomainMsg_k, uint8_T rtu_ValueDomainMsg_bv,
  rtB_CheckmsgtransmissionCAN2_o *localB, const rtC_CheckmsgtransmissionCAN2_b
  *localC, rtDW_CheckmsgtransmissionCAN2_j *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count);
extern void Checkmsgtransmission_eq_Disable(rtB_CheckmsgtransmissionCAN1_c3
  *localB, rtDW_CheckmsgtransmissionCAN1_d *localDW);
extern void CheckmsgtransmissionCAN1_h(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_l, uint8_T rtu_ValueDomainMsg_c, uint8_T
  rtu_ValueDomainMsg_g, rtB_CheckmsgtransmissionCAN1_c3 *localB, const
  rtC_CheckmsgtransmissionCAN1_o *localC, rtDW_CheckmsgtransmissionCAN1_d
  *localDW, real_T *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T
  *rtd_TxID_CAN1, real_T *rtd_Tx_msg_count_CAN1, uint8_T *rtd_basic_cycle_count);
extern void CheckmsgtransmissionC_g_Disable(rtB_CheckmsgtransmissionCAN2_h
  *localB, rtDW_CheckmsgtransmissionCAN2_b *localDW);
extern void CheckmsgtransmissionCAN2_m(boolean_T rtu_Enable, uint16_T
  rtu_LocalTime, real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T
  rtu_ValueDomainMsg_c, uint8_T rtu_ValueDomainMsg_d, uint8_T
  rtu_ValueDomainMsg_n, rtB_CheckmsgtransmissionCAN2_h *localB, const
  rtC_CheckmsgtransmissionCAN2_j *localC, rtDW_CheckmsgtransmissionCAN2_b
  *localDW, real_T *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T
  *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count);
extern void ResetVariables(boolean_T rtu_Enable, boolean_T
  *rtd_BC1_Sync_processed, boolean_T *rtd_Desync_Positive, boolean_T
  *rtd_Toggle_Pin_A0);
extern void Process_Messages_Disable(rtB_Process_Messages *localB,
  rtDW_Process_Messages *localDW);
extern void Process_Messages(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  rtB_Process_Messages *localB, rtDW_Process_Messages *localDW, msg_buffer_type *
  rtd_Msg_Rx_f, boolean_T *rtd_Toggle_Pin_A0, real_T *rtd_msg_count_DEBUG_i,
  boolean_T *rtd_new_msg_Rx_g);
extern void BitShift1_l(uint8_T rtu_u, rtB_BitShift1_n *localB);
extern void BitShift11(uint8_T rtu_u, rtB_BitShift11 *localB);
extern void BitShift12(uint8_T rtu_u, rtB_BitShift12 *localB);
extern void BitShift2_d(uint8_T rtu_u, rtB_BitShift2_i *localB);
extern void LocalTimeUpdate(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  boolean_T *rtd_BC1_Sync_processed, boolean_T *rtd_Desync_Positive, real_T
  *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks, boolean_T *rtd_Toggle_Pin_A0,
  boolean_T *rtd_Toggle_Pin_D10);
extern void RESETBoardReturntoinitializatio(boolean_T rtu_Enable, const
  rtC_RESETBoardReturntoinitializ *localC, boolean_T *rtd_Desync_Positive,
  boolean_T *rtd_Initialization_flag, real_T *rtd_Master_ID, boolean_T
  *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2, boolean_T
  *rtd_Reset_Board_m, real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1, uint32_T
  *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2,
  boolean_T *rtd_Toggle_Pin_A0);
extern void Resetvariables(boolean_T rtu_Enable, boolean_T
  *rtd_BC0_Sync_processed, boolean_T *rtd_Desync_Positive, boolean_T
  *rtd_Toggle_Pin_A0);
extern void DemuxmessageCAN1andch_b_Disable(rtB_DemuxmessageCAN1andcheckc_m
  *localB, rtDW_DemuxmessageCAN1andcheck_e *localDW);
extern void DemuxmessageCAN1andcheckcoher_l(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle,
  rtB_DemuxmessageCAN1andcheckc_m *localB, rtDW_DemuxmessageCAN1andcheck_e
  *localDW, real_T *rtd_msg_count_DEBUG_m);
extern void DemuxmessageCAN1andch_d_Disable(rtB_DemuxmessageCAN1andcheckc_g
  *localB, rtDW_DemuxmessageCAN1andchec_fq *localDW);
extern void DemuxmessageCAN1andcheckcoher_o(boolean_T rtu_Enable, const
  msg_buffer_type *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle,
  rtB_DemuxmessageCAN1andcheckc_g *localB, rtDW_DemuxmessageCAN1andchec_fq
  *localDW, real_T *rtd_msg_count_DEBUG_m);
extern void LocalTimeUpdate_n(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  boolean_T *rtd_BC0_Sync_processed, boolean_T *rtd_Desync_Positive, real_T
  *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks, boolean_T *rtd_Toggle_Pin_A0,
  boolean_T *rtd_Toggle_Pin_D10);
extern void TTASystem_Init(rtB_TTASystem *localB);
extern void TTASystem_Reset(rtDW_TTASystem *localDW);
extern void TTASystem_Start(rtDW_TTASystem *localDW);
extern void TTASystem_Disable(rtB_TTASystem *localB, rtDW_TTASystem *localDW);
extern void TTASystem_Const(const rtC_TTASystem *localC);
extern void TTASystem(rtB_TTASystem *localB, const rtC_TTASystem *localC,
                      rtDW_TTASystem *localDW, real_T *rtd_Board_ID, uint16_T
                      *rtd_Local_Ticks, real_T *rtd_Master_ID, msg_buffer_type
                      *rtd_Msg_Rx_CAN1, msg_buffer_type *rtd_Msg_Rx_CAN2,
                      uint16_T *rtd_Msg_Rx_Ticks_CAN1, uint16_T
                      *rtd_Msg_Rx_Ticks_CAN2, msg_buffer_type *rtd_Msg_Tx_CAN1,
                      msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
                      *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2,
                      uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2, uint8_T *
                      rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
                      *rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D12, real_T
                      *rtd_Toggle_Pin_D13, real_T *rtd_Toggle_Pin_D8, real_T
                      *rtd_Toggle_Pin_D9, uint32_T *rtd_TxID_CAN1, uint32_T
                      *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T
                      *rtd_Tx_msg_count_CAN2);

#endif                                 /* RTW_HEADER_HANcoder_E407_TTA_Controller_v4_6_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
