/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v4_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v4'.
 *
 * Model version                  : 1.173
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  8 13:28:39 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Controller_v4.h"
#include "HANcoder_E407_TTA_Controller_v4_private.h"

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    332.0,                             /* '<S1486>/Sum18' */
    324.0,                             /* '<S1486>/Sum17' */
    136.0,                             /* '<S1486>/Sum7' */
    44.0,                              /* '<S1486>/Sum1' */
    48.0,                              /* '<S1486>/Sum2' */
    40.0,                              /* '<S1486>/Sum4' */
    320.0,                             /* '<S1486>/Sum16' */
    132.0,                             /* '<S1486>/Sum6' */
    0.054400000000000004,              /* '<S1706>/Multiply' */
    16.0,                              /* '<S1708>/Power1' */
    0.0625,                            /* '<S1708>/Power' */
    16.0,                              /* '<S1709>/Power1' */
    0.0625,                            /* '<S1709>/Power' */
    16.0,                              /* '<S1710>/Power1' */
    0.0625,                            /* '<S1710>/Power' */
    16.0,                              /* '<S1711>/Power1' */
    0.0625,                            /* '<S1711>/Power' */
    0.0625,                            /* '<S1630>/Power' */
    16.0,                              /* '<S1630>/Power1' */
    0.0625,                            /* '<S1631>/Power' */
    16.0,                              /* '<S1631>/Power1' */
    0.0625,                            /* '<S1632>/Power' */
    16.0,                              /* '<S1632>/Power1' */
    0.0625,                            /* '<S1633>/Power' */
    16.0,                              /* '<S1633>/Power1' */
    144.0,                             /* '<S1485>/Sum17' */
    208.0,                             /* '<S1485>/Sum16' */
    44.0,                              /* '<S1485>/Sum1' */
    48.0,                              /* '<S1485>/Sum2' */
    100.0,                             /* '<S1485>/Sum7' */
    52.0,                              /* '<S1485>/Sum3' */
    96.0,                              /* '<S1485>/Sum6' */
    40.0,                              /* '<S1485>/Sum4' */
    136.0,                             /* '<S1303>/Sum5' */
    332.0,                             /* '<S1303>/Sum18' */
    92.0,                              /* '<S1303>/Sum6' */
    44.0,                              /* '<S1303>/Sum1' */
    48.0,                              /* '<S1303>/Sum2' */
    40.0,                              /* '<S1303>/Sum4' */
    88.0,                              /* '<S1303>/Sum3' */
    0.015625,                          /* '<S1404>/Power' */
    64.0,                              /* '<S1404>/Power1' */
    0.125,                             /* '<S1405>/Power' */
    8.0,                               /* '<S1405>/Power1' */
    0.015625,                          /* '<S1406>/Power' */
    64.0,                              /* '<S1406>/Power1' */
    52.0,                              /* '<S1302>/Sum17' */
    208.0,                             /* '<S1302>/Sum16' */
    44.0,                              /* '<S1302>/Sum1' */
    48.0,                              /* '<S1302>/Sum2' */
    40.0,                              /* '<S1302>/Sum4' */
    148.0,                             /* '<S509>/Sum10' */
    140.0,                             /* '<S509>/Sum8' */
    144.0,                             /* '<S509>/Sum9' */
    332.0,                             /* '<S509>/Sum18' */
    192.0,                             /* '<S509>/Sum13' */
    236.0,                             /* '<S509>/Sum14' */
    324.0,                             /* '<S509>/Sum17' */
    136.0,                             /* '<S509>/Sum7' */
    92.0,                              /* '<S509>/Sum5' */
    44.0,                              /* '<S509>/Sum1' */
    280.0,                             /* '<S509>/Sum15' */
    48.0,                              /* '<S509>/Sum2' */
    40.0,                              /* '<S509>/Sum4' */
    188.0,                             /* '<S509>/Sum12' */
    232.0,                             /* '<S509>/Sum11' */
    320.0,                             /* '<S509>/Sum16' */
    312.0,                             /* '<S509>/Sum19' */
    88.0,                              /* '<S509>/Sum3' */
    132.0,                             /* '<S509>/Sum6' */
    1.0,                               /* '<S1255>/Gain' */
    1.0,                               /* '<S1255>/Gain1' */
    1.0,                               /* '<S1255>/Gain2' */
    1.0,                               /* '<S1255>/Gain3' */
    1.0,                               /* '<S1255>/Gain4' */
    1.0,                               /* '<S1255>/Gain5' */
    1.0,                               /* '<S1255>/Gain6' */
    1.0,                               /* '<S1255>/Gain7' */
    1.0,                               /* '<S1254>/Gain' */
    1.0,                               /* '<S1254>/Gain1' */
    1.0,                               /* '<S1254>/Gain2' */
    1.0,                               /* '<S1254>/Gain3' */
    1.0,                               /* '<S1254>/Gain4' */
    1.0,                               /* '<S1254>/Gain5' */
    1.0,                               /* '<S1254>/Gain6' */
    1.0,                               /* '<S1254>/Gain7' */
    1.0,                               /* '<S1253>/Gain' */
    1.0,                               /* '<S1253>/Gain1' */
    1.0,                               /* '<S1253>/Gain2' */
    1.0,                               /* '<S1253>/Gain3' */
    1.0,                               /* '<S1253>/Gain4' */
    1.0,                               /* '<S1253>/Gain5' */
    1.0,                               /* '<S1253>/Gain6' */
    1.0,                               /* '<S1253>/Gain7' */
    16.0,                              /* '<S1233>/Power1' */
    0.0625,                            /* '<S1233>/Power' */
    16.0,                              /* '<S1234>/Power1' */
    0.0625,                            /* '<S1234>/Power' */
    16.0,                              /* '<S1235>/Power1' */
    0.0625,                            /* '<S1235>/Power' */
    16.0,                              /* '<S1236>/Power1' */
    0.0625,                            /* '<S1236>/Power' */
    16.0,                              /* '<S1213>/Power1' */
    0.0625,                            /* '<S1213>/Power' */
    16.0,                              /* '<S1214>/Power1' */
    0.0625,                            /* '<S1214>/Power' */
    16.0,                              /* '<S1215>/Power1' */
    0.0625,                            /* '<S1215>/Power' */
    16.0,                              /* '<S1216>/Power1' */
    0.0625,                            /* '<S1216>/Power' */
    64.0,                              /* '<S1167>/Power1' */
    0.015625,                          /* '<S1167>/Power' */
    64.0,                              /* '<S1166>/Power1' */
    0.015625,                          /* '<S1166>/Power' */
    8.0,                               /* '<S1168>/Power1' */
    0.125,                             /* '<S1168>/Power' */
    16.0,                              /* '<S1115>/Power1' */
    0.0625,                            /* '<S1115>/Power' */
    16.0,                              /* '<S1116>/Power1' */
    0.0625,                            /* '<S1116>/Power' */
    16.0,                              /* '<S1117>/Power1' */
    0.0625,                            /* '<S1117>/Power' */
    16.0,                              /* '<S1118>/Power1' */
    0.0625,                            /* '<S1118>/Power' */
    0.054400000000000004,              /* '<S1113>/Gain' */
    0.015625,                          /* '<S937>/Power' */
    64.0,                              /* '<S937>/Power1' */
    0.125,                             /* '<S938>/Power' */
    8.0,                               /* '<S938>/Power1' */
    0.015625,                          /* '<S939>/Power' */
    64.0,                              /* '<S939>/Power1' */
    0.0625,                            /* '<S877>/Power' */
    16.0,                              /* '<S877>/Power1' */
    0.0625,                            /* '<S878>/Power' */
    16.0,                              /* '<S878>/Power1' */
    0.0625,                            /* '<S879>/Power' */
    16.0,                              /* '<S879>/Power1' */
    0.0625,                            /* '<S880>/Power' */
    16.0,                              /* '<S880>/Power1' */
    200.0,                             /* '<S508>/Sum14' */
    204.0,                             /* '<S508>/Sum15' */
    212.0,                             /* '<S508>/Sum17' */
    208.0,                             /* '<S508>/Sum16' */
    44.0,                              /* '<S508>/Sum1' */
    48.0,                              /* '<S508>/Sum2' */
    52.0,                              /* '<S508>/Sum3' */
    100.0,                             /* '<S508>/Sum7' */
    96.0,                              /* '<S508>/Sum6' */
    148.0,                             /* '<S508>/Sum10' */
    144.0,                             /* '<S508>/Sum9' */
    196.0,                             /* '<S508>/Sum11' */
    192.0,                             /* '<S508>/Sum13' */
    40.0,                              /* '<S508>/Sum4' */
    188.0,                             /* '<S508>/Sum12' */
    92.0,                              /* '<S508>/Sum5' */
    140.0,                             /* '<S508>/Sum8' */
    284.0,                             /* '<S192>/Sum15' */
    332.0,                             /* '<S192>/Sum18' */
    192.0,                             /* '<S192>/Sum13' */
    236.0,                             /* '<S192>/Sum14' */
    280.0,                             /* '<S192>/Sum3' */
    44.0,                              /* '<S192>/Sum1' */
    48.0,                              /* '<S192>/Sum2' */
    40.0,                              /* '<S192>/Sum4' */
    188.0,                             /* '<S192>/Sum12' */
    232.0,                             /* '<S192>/Sum11' */
    312.0,                             /* '<S192>/Sum19' */
    1.0,                               /* '<S385>/Gain' */
    1.0,                               /* '<S385>/Gain1' */
    1.0,                               /* '<S385>/Gain2' */
    1.0,                               /* '<S385>/Gain3' */
    1.0,                               /* '<S385>/Gain4' */
    1.0,                               /* '<S385>/Gain5' */
    1.0,                               /* '<S385>/Gain6' */
    1.0,                               /* '<S385>/Gain7' */
    1.0,                               /* '<S384>/Gain' */
    1.0,                               /* '<S384>/Gain1' */
    1.0,                               /* '<S384>/Gain4' */
    1.0,                               /* '<S384>/Gain5' */
    1.0,                               /* '<S384>/Gain6' */
    1.0,                               /* '<S384>/Gain7' */
    1.0,                               /* '<S383>/Gain' */
    1.0,                               /* '<S383>/Gain1' */
    1.0,                               /* '<S383>/Gain2' */
    1.0,                               /* '<S383>/Gain3' */
    1.0,                               /* '<S383>/Gain4' */
    1.0,                               /* '<S383>/Gain5' */
    1.0,                               /* '<S383>/Gain6' */
    1.0,                               /* '<S383>/Gain7' */
    16.0,                              /* '<S363>/Power1' */
    0.0625,                            /* '<S363>/Power' */
    16.0,                              /* '<S364>/Power1' */
    0.0625,                            /* '<S364>/Power' */
    16.0,                              /* '<S365>/Power1' */
    0.0625,                            /* '<S365>/Power' */
    16.0,                              /* '<S366>/Power1' */
    0.0625,                            /* '<S366>/Power' */
    16.0,                              /* '<S343>/Power1' */
    0.0625,                            /* '<S343>/Power' */
    16.0,                              /* '<S344>/Power1' */
    0.0625,                            /* '<S344>/Power' */
    16.0,                              /* '<S345>/Power1' */
    0.0625,                            /* '<S345>/Power' */
    16.0,                              /* '<S346>/Power1' */
    0.0625,                            /* '<S346>/Power' */
    16.0,                              /* '<S323>/Power1' */
    0.0625,                            /* '<S323>/Power' */
    16.0,                              /* '<S324>/Power1' */
    0.0625,                            /* '<S324>/Power' */
    16.0,                              /* '<S325>/Power1' */
    0.0625,                            /* '<S325>/Power' */
    16.0,                              /* '<S326>/Power1' */
    0.0625,                            /* '<S326>/Power' */
    212.0,                             /* '<S191>/Sum17' */
    208.0,                             /* '<S191>/Sum16' */
    44.0,                              /* '<S191>/Sum1' */
    48.0,                              /* '<S191>/Sum2' */
    40.0,                              /* '<S191>/Sum4' */
    16.0,                              /* '<S146>/Power1' */
    0.0625,                            /* '<S146>/Power' */
    16.0,                              /* '<S147>/Power1' */
    0.0625,                            /* '<S147>/Power' */
    8.0,                               /* '<S148>/Power1' */
    0.125,                             /* '<S148>/Power' */
    64.0,                              /* '<S149>/Power1' */
    0.015625,                          /* '<S149>/Power' */
    64.0,                              /* '<S150>/Power1' */
    0.015625,                          /* '<S150>/Power' */
    1.0,                               /* '<S118>/Add1' */
    0U,                                /* '<S143>/Cast' */
    0U,                                /* '<S1600>/Cast' */
    0U,                                /* '<S1600>/Cast1' */
    0U,                                /* '<S1600>/Cast2' */
    0U,                                /* '<S1601>/Cast' */
    0U,                                /* '<S1601>/Cast1' */
    0U,                                /* '<S1601>/Cast2' */
    0U,                                /* '<S1602>/Cast' */
    0U,                                /* '<S1602>/Cast1' */
    0U,                                /* '<S1602>/Cast2' */
    0U,                                /* '<S1603>/Cast' */
    0U,                                /* '<S1603>/Cast1' */
    0U,                                /* '<S1603>/Cast2' */
    0U,                                /* '<S1447>/Cast6' */
    0U,                                /* '<S907>/Cast' */
    0U,                                /* '<S907>/Cast1' */
    0U,                                /* '<S907>/Cast2' */
    0U,                                /* '<S908>/Cast' */
    0U,                                /* '<S908>/Cast1' */
    0U,                                /* '<S908>/Cast2' */
    0U,                                /* '<S909>/Cast' */
    0U,                                /* '<S909>/Cast1' */
    0U,                                /* '<S909>/Cast2' */
    0U,                                /* '<S910>/Cast' */
    0U,                                /* '<S910>/Cast1' */
    0U,                                /* '<S910>/Cast2' */
    0U,                                /* '<S143>/Cast1' */
    0U,                                /* '<S118>/Cast' */
    0,                                 /* '<S1447>/Cast' */
    1,                                 /* '<S1447>/NOT' */
    0,                                 /* '<S623>/Cast' */
    0,                                 /* '<S234>/Cast' */

    /* Start of '<S1486>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1660>/Gain' */
        0.0625,                        /* '<S1660>/Power' */
        16.0,                          /* '<S1660>/Power1' */
        -3.0,                          /* '<S1661>/Gain' */
        0.125,                         /* '<S1661>/Power' */
        8.0,                           /* '<S1661>/Power1' */
        -6.0,                          /* '<S1662>/Gain' */
        0.015625,                      /* '<S1662>/Power' */
        64.0,                          /* '<S1662>/Power1' */
        -6.0,                          /* '<S1663>/Gain' */
        0.015625,                      /* '<S1663>/Power' */
        64.0,                          /* '<S1663>/Power1' */
        -4.0,                          /* '<S1664>/Gain' */
        0.0625,                        /* '<S1664>/Power' */
        16.0,                          /* '<S1664>/Power1' */
        1U,                            /* '<S1654>/Cast8' */
        1U                             /* '<S1648>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1644>/Cast13' */
          1U,                          /* '<S1644>/Cast3' */
          0U,                          /* '<S1644>/Cast15' */
          0U,                          /* '<S1644>/Cast6' */
          0,                           /* '<S1644>/Cast14' */
          0                            /* '<S1644>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1486>/COMM Task - Sync bc 1' */

    /* Start of '<S1613>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1624>/Cast8' */
    }
    ,

    /* End of '<S1613>/Check msg transmission CAN2' */

    /* Start of '<S1613>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1618>/Cast' */
    }
    ,

    /* End of '<S1613>/Check msg transmission CAN1' */

    /* Start of '<S1575>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        22U,                           /* '<S1614>/Cast13' */
        22U,                           /* '<S1614>/Cast3' */
        0U,                            /* '<S1614>/Cast15' */
        0U,                            /* '<S1614>/Cast6' */
        0,                             /* '<S1614>/Cast14' */
        0                              /* '<S1614>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1575>/Reception substasks' */

    /* Start of '<S1583>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1594>/Cast8' */
    }
    ,

    /* End of '<S1583>/Check msg transmission CAN2' */

    /* Start of '<S1583>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1588>/Cast' */
    }
    ,

    /* End of '<S1583>/Check msg transmission CAN1' */

    /* Start of '<S1574>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        25U,                           /* '<S1584>/Cast13' */
        25U,                           /* '<S1584>/Cast3' */
        0U,                            /* '<S1584>/Cast15' */
        0U,                            /* '<S1584>/Cast6' */
        0,                             /* '<S1584>/Cast14' */
        0                              /* '<S1584>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1574>/Reception substasks' */

    /* Start of '<S1488>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1529>/Cast6' */
      0,                               /* '<S1529>/Cast' */
      1                                /* '<S1529>/NOT' */
    }
    ,

    /* End of '<S1488>/RESET Board - Return to initialization' */

    /* Start of '<S1485>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1513>/Gain' */
        0.0625,                        /* '<S1513>/Power' */
        16.0,                          /* '<S1513>/Power1' */
        -3.0,                          /* '<S1514>/Gain' */
        0.125,                         /* '<S1514>/Power' */
        8.0,                           /* '<S1514>/Power1' */
        -6.0,                          /* '<S1515>/Gain' */
        0.015625,                      /* '<S1515>/Power' */
        64.0,                          /* '<S1515>/Power1' */
        -6.0,                          /* '<S1516>/Gain' */
        0.015625,                      /* '<S1516>/Power' */
        64.0,                          /* '<S1516>/Power1' */
        -4.0,                          /* '<S1517>/Gain' */
        0.0625,                        /* '<S1517>/Power' */
        16.0,                          /* '<S1517>/Power1' */
        1U,                            /* '<S1507>/Cast8' */
        1U                             /* '<S1501>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1497>/Cast13' */
          1U,                          /* '<S1497>/Cast3' */
          0U,                          /* '<S1497>/Cast15' */
          0U,                          /* '<S1497>/Cast6' */
          0,                           /* '<S1497>/Cast14' */
          0                            /* '<S1497>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1485>/COMM Task - Sync bc 0' */

    /* Start of '<S1303>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1431>/Gain' */
        0.0625,                        /* '<S1431>/Power' */
        16.0,                          /* '<S1431>/Power1' */
        -3.0,                          /* '<S1432>/Gain' */
        0.125,                         /* '<S1432>/Power' */
        8.0,                           /* '<S1432>/Power1' */
        -6.0,                          /* '<S1433>/Gain' */
        0.015625,                      /* '<S1433>/Power' */
        64.0,                          /* '<S1433>/Power1' */
        -6.0,                          /* '<S1434>/Gain' */
        0.015625,                      /* '<S1434>/Power' */
        64.0,                          /* '<S1434>/Power1' */
        -4.0,                          /* '<S1435>/Gain' */
        0.0625,                        /* '<S1435>/Power' */
        16.0,                          /* '<S1435>/Power1' */
        1U,                            /* '<S1425>/Cast8' */
        1U                             /* '<S1419>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1415>/Cast13' */
          1U,                          /* '<S1415>/Cast3' */
          0U,                          /* '<S1415>/Cast15' */
          0U,                          /* '<S1415>/Cast6' */
          0,                           /* '<S1415>/Cast14' */
          0                            /* '<S1415>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1303>/COMM Task - Sync bc 1' */

    /* Start of '<S1387>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1398>/Cast8' */
    }
    ,

    /* End of '<S1387>/Check msg transmission CAN2' */

    /* Start of '<S1387>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1392>/Cast' */
    }
    ,

    /* End of '<S1387>/Check msg transmission CAN1' */

    /* Start of '<S1379>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        21U,                           /* '<S1388>/Cast13' */
        21U,                           /* '<S1388>/Cast3' */
        0U,                            /* '<S1388>/Cast15' */
        0U,                            /* '<S1388>/Cast6' */
        0,                             /* '<S1388>/Cast14' */
        0                              /* '<S1388>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1379>/Reception substasks' */

    /* Start of '<S1306>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1344>/Cast6' */
      0,                               /* '<S1344>/Cast' */
      1                                /* '<S1344>/NOT' */
    }
    ,

    /* End of '<S1306>/RESET Board - Return to initialization' */

    /* Start of '<S1302>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1328>/Gain' */
        0.0625,                        /* '<S1328>/Power' */
        16.0,                          /* '<S1328>/Power1' */
        -3.0,                          /* '<S1329>/Gain' */
        0.125,                         /* '<S1329>/Power' */
        8.0,                           /* '<S1329>/Power1' */
        -6.0,                          /* '<S1330>/Gain' */
        0.015625,                      /* '<S1330>/Power' */
        64.0,                          /* '<S1330>/Power1' */
        -6.0,                          /* '<S1331>/Gain' */
        0.015625,                      /* '<S1331>/Power' */
        64.0,                          /* '<S1331>/Power1' */
        -4.0,                          /* '<S1332>/Gain' */
        0.0625,                        /* '<S1332>/Power' */
        16.0,                          /* '<S1332>/Power1' */
        1U,                            /* '<S1322>/Cast8' */
        1U                             /* '<S1316>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1312>/Cast13' */
          1U,                          /* '<S1312>/Cast3' */
          0U,                          /* '<S1312>/Cast15' */
          0U,                          /* '<S1312>/Cast6' */
          0,                           /* '<S1312>/Cast14' */
          0                            /* '<S1312>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1302>/COMM Task - Sync bc 0' */

    /* Start of '<S509>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S271>/Transmission subtasks1' */
      {
        -4.0,                          /* '<S964>/Gain' */
        0.0625,                        /* '<S964>/Power' */
        16.0,                          /* '<S964>/Power1' */
        -3.0,                          /* '<S965>/Gain' */
        0.125,                         /* '<S965>/Power' */
        8.0,                           /* '<S965>/Power1' */
        -6.0,                          /* '<S966>/Gain' */
        0.015625,                      /* '<S966>/Power' */
        64.0,                          /* '<S966>/Power1' */
        -6.0,                          /* '<S967>/Gain' */
        0.015625,                      /* '<S967>/Power' */
        64.0,                          /* '<S967>/Power1' */
        -4.0,                          /* '<S968>/Gain' */
        0.0625,                        /* '<S968>/Power' */
        16.0,                          /* '<S968>/Power1' */
        1U,                            /* '<S958>/Cast8' */
        1U                             /* '<S952>/Cast' */
      }
      ,

      /* End of '<S271>/Transmission subtasks1' */

      /* Start of '<S271>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S948>/Cast13' */
          1U,                          /* '<S948>/Cast3' */
          0U,                          /* '<S948>/Cast15' */
          0U,                          /* '<S948>/Cast6' */
          0,                           /* '<S948>/Cast14' */
          0                            /* '<S948>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S271>/Reception substasks' */
    }
    ,

    /* End of '<S509>/COMM Task - Sync bc 1' */

    /* Start of '<S920>/Check msg transmission CAN2' */
    {
      21U                              /* '<S931>/Cast8' */
    }
    ,

    /* End of '<S920>/Check msg transmission CAN2' */

    /* Start of '<S920>/Check msg transmission CAN1' */
    {
      21U                              /* '<S925>/Cast' */
    }
    ,

    /* End of '<S920>/Check msg transmission CAN1' */

    /* Start of '<S752>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        21U,                           /* '<S921>/Cast13' */
        21U,                           /* '<S921>/Cast3' */
        0U,                            /* '<S921>/Cast15' */
        0U,                            /* '<S921>/Cast6' */
        0,                             /* '<S921>/Cast14' */
        0                              /* '<S921>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S752>/Reception substasks' */

    /* Start of '<S890>/Check msg transmission CAN2' */
    {
      22U                              /* '<S901>/Cast8' */
    }
    ,

    /* End of '<S890>/Check msg transmission CAN2' */

    /* Start of '<S890>/Check msg transmission CAN1' */
    {
      22U                              /* '<S895>/Cast' */
    }
    ,

    /* End of '<S890>/Check msg transmission CAN1' */

    /* Start of '<S751>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        22U,                           /* '<S891>/Cast13' */
        22U,                           /* '<S891>/Cast3' */
        0U,                            /* '<S891>/Cast15' */
        0U,                            /* '<S891>/Cast6' */
        0,                             /* '<S891>/Cast14' */
        0                              /* '<S891>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S751>/Reception substasks' */

    /* Start of '<S860>/Check msg transmission CAN2' */
    {
      25U                              /* '<S871>/Cast8' */
    }
    ,

    /* End of '<S860>/Check msg transmission CAN2' */

    /* Start of '<S860>/Check msg transmission CAN1' */
    {
      25U                              /* '<S865>/Cast' */
    }
    ,

    /* End of '<S860>/Check msg transmission CAN1' */

    /* Start of '<S750>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        25U,                           /* '<S861>/Cast13' */
        25U,                           /* '<S861>/Cast3' */
        0U,                            /* '<S861>/Cast15' */
        0U,                            /* '<S861>/Cast6' */
        0,                             /* '<S861>/Cast14' */
        0                              /* '<S861>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S750>/Reception substasks' */

    /* Start of '<S749>/Transmission subtasks' */
    {
      -4.0,                            /* '<S847>/Gain' */
      0.0625,                          /* '<S847>/Power' */
      16.0,                            /* '<S847>/Power1' */
      -4.0,                            /* '<S848>/Gain' */
      0.0625,                          /* '<S848>/Power' */
      16.0,                            /* '<S848>/Power1' */
      -4.0,                            /* '<S849>/Gain' */
      0.0625,                          /* '<S849>/Power' */
      16.0,                            /* '<S849>/Power1' */
      -4.0,                            /* '<S850>/Gain' */
      0.0625,                          /* '<S850>/Power' */
      16.0,                            /* '<S850>/Power1' */

      /* Start of '<S768>/Check msg transmission CAN2' */
      {
        26U                            /* '<S841>/Cast8' */
      }
      ,

      /* End of '<S768>/Check msg transmission CAN2' */

      /* Start of '<S768>/Check msg transmission CAN1' */
      {
        26U                            /* '<S835>/Cast' */
      }
      /* End of '<S768>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S749>/Transmission subtasks' */

    /* Start of '<S749>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        26U,                           /* '<S831>/Cast13' */
        26U,                           /* '<S831>/Cast3' */
        0U,                            /* '<S831>/Cast15' */
        0U,                            /* '<S831>/Cast6' */
        0,                             /* '<S831>/Cast14' */
        0                              /* '<S831>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S749>/Reception substasks' */

    /* Start of '<S748>/Transmission subtasks' */
    {
      -4.0,                            /* '<S816>/Gain' */
      0.0625,                          /* '<S816>/Power' */
      16.0,                            /* '<S816>/Power1' */
      -4.0,                            /* '<S817>/Gain' */
      0.0625,                          /* '<S817>/Power' */
      16.0,                            /* '<S817>/Power1' */
      -4.0,                            /* '<S818>/Gain' */
      0.0625,                          /* '<S818>/Power' */
      16.0,                            /* '<S818>/Power1' */
      -4.0,                            /* '<S819>/Gain' */
      0.0625,                          /* '<S819>/Power' */
      16.0,                            /* '<S819>/Power1' */

      /* Start of '<S768>/Check msg transmission CAN2' */
      {
        24U                            /* '<S810>/Cast8' */
      }
      ,

      /* End of '<S768>/Check msg transmission CAN2' */

      /* Start of '<S768>/Check msg transmission CAN1' */
      {
        24U                            /* '<S804>/Cast' */
      }
      /* End of '<S768>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S748>/Transmission subtasks' */

    /* Start of '<S748>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        24U,                           /* '<S800>/Cast13' */
        24U,                           /* '<S800>/Cast3' */
        0U,                            /* '<S800>/Cast15' */
        0U,                            /* '<S800>/Cast6' */
        0,                             /* '<S800>/Cast14' */
        0                              /* '<S800>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S748>/Reception substasks' */

    /* Start of '<S747>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S785>/Gain' */
      0.0625,                          /* '<S785>/Power' */
      16.0,                            /* '<S785>/Power1' */
      -4.0,                            /* '<S786>/Gain' */
      0.0625,                          /* '<S786>/Power' */
      16.0,                            /* '<S786>/Power1' */
      -4.0,                            /* '<S787>/Gain' */
      0.0625,                          /* '<S787>/Power' */
      16.0,                            /* '<S787>/Power1' */
      -4.0,                            /* '<S788>/Gain' */
      0.0625,                          /* '<S788>/Power' */
      16.0,                            /* '<S788>/Power1' */

      /* Start of '<S768>/Check msg transmission CAN2' */
      {
        23U                            /* '<S779>/Cast8' */
      }
      ,

      /* End of '<S768>/Check msg transmission CAN2' */

      /* Start of '<S768>/Check msg transmission CAN1' */
      {
        23U                            /* '<S773>/Cast' */
      }
      /* End of '<S768>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S747>/Transmission subtasks1' */

    /* Start of '<S747>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        23U,                           /* '<S769>/Cast13' */
        23U,                           /* '<S769>/Cast3' */
        0U,                            /* '<S769>/Cast15' */
        0U,                            /* '<S769>/Cast6' */
        0,                             /* '<S769>/Cast14' */
        0                              /* '<S769>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S747>/Reception substasks' */

    /* Start of '<S517>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S622>/Cast6' */
      0,                               /* '<S622>/Cast' */
      1                                /* '<S622>/NOT' */
    }
    ,

    /* End of '<S517>/RESET Board - Return to initialization' */

    /* Start of '<S514>/Transmission subtasks' */
    {
      13U,                             /* '<S609>/Cast8' */
      13U                              /* '<S603>/Cast' */
    }
    ,

    /* End of '<S514>/Transmission subtasks' */

    /* Start of '<S514>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        13U,                           /* '<S599>/Cast13' */
        13U,                           /* '<S599>/Cast3' */
        0U,                            /* '<S599>/Cast15' */
        0U,                            /* '<S599>/Cast6' */
        0,                             /* '<S599>/Cast14' */
        0                              /* '<S599>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S514>/Reception substasks' */

    /* Start of '<S513>/Transmission subtasks' */
    {
      12U,                             /* '<S591>/Cast8' */
      12U                              /* '<S585>/Cast' */
    }
    ,

    /* End of '<S513>/Transmission subtasks' */

    /* Start of '<S513>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        12U,                           /* '<S581>/Cast13' */
        12U,                           /* '<S581>/Cast3' */
        0U,                            /* '<S581>/Cast15' */
        0U,                            /* '<S581>/Cast6' */
        0,                             /* '<S581>/Cast14' */
        0                              /* '<S581>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S513>/Reception substasks' */

    /* Start of '<S512>/Transmission subtasks' */
    {
      11U,                             /* '<S573>/Cast8' */
      11U                              /* '<S567>/Cast' */
    }
    ,

    /* End of '<S512>/Transmission subtasks' */

    /* Start of '<S512>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        11U,                           /* '<S563>/Cast13' */
        11U,                           /* '<S563>/Cast3' */
        0U,                            /* '<S563>/Cast15' */
        0U,                            /* '<S563>/Cast6' */
        0,                             /* '<S563>/Cast14' */
        0                              /* '<S563>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S512>/Reception substasks' */

    /* Start of '<S508>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S546>/Gain' */
        0.0625,                        /* '<S546>/Power' */
        16.0,                          /* '<S546>/Power1' */
        -3.0,                          /* '<S547>/Gain' */
        0.125,                         /* '<S547>/Power' */
        8.0,                           /* '<S547>/Power1' */
        -6.0,                          /* '<S548>/Gain' */
        0.015625,                      /* '<S548>/Power' */
        64.0,                          /* '<S548>/Power1' */
        -6.0,                          /* '<S549>/Gain' */
        0.015625,                      /* '<S549>/Power' */
        64.0,                          /* '<S549>/Power1' */
        -4.0,                          /* '<S550>/Gain' */
        0.0625,                        /* '<S550>/Power' */
        16.0,                          /* '<S550>/Power1' */
        1U,                            /* '<S540>/Cast8' */
        1U                             /* '<S534>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S530>/Cast13' */
          1U,                          /* '<S530>/Cast3' */
          0U,                          /* '<S530>/Cast15' */
          0U,                          /* '<S530>/Cast6' */
          0,                           /* '<S530>/Cast14' */
          0                            /* '<S530>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S508>/COMM Task - Sync bc 0' */

    /* Start of '<S192>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S271>/Transmission subtasks1' */
      {
        -4.0,                          /* '<S304>/Gain' */
        0.0625,                        /* '<S304>/Power' */
        16.0,                          /* '<S304>/Power1' */
        -3.0,                          /* '<S305>/Gain' */
        0.125,                         /* '<S305>/Power' */
        8.0,                           /* '<S305>/Power1' */
        -6.0,                          /* '<S306>/Gain' */
        0.015625,                      /* '<S306>/Power' */
        64.0,                          /* '<S306>/Power1' */
        -6.0,                          /* '<S307>/Gain' */
        0.015625,                      /* '<S307>/Power' */
        64.0,                          /* '<S307>/Power1' */
        -4.0,                          /* '<S308>/Gain' */
        0.0625,                        /* '<S308>/Power' */
        16.0,                          /* '<S308>/Power1' */
        1U,                            /* '<S298>/Cast8' */
        1U                             /* '<S292>/Cast' */
      }
      ,

      /* End of '<S271>/Transmission subtasks1' */

      /* Start of '<S271>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S288>/Cast13' */
          1U,                          /* '<S288>/Cast3' */
          0U,                          /* '<S288>/Cast15' */
          0U,                          /* '<S288>/Cast6' */
          0,                           /* '<S288>/Cast14' */
          0                            /* '<S288>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S271>/Reception substasks' */
    }
    ,

    /* End of '<S192>/COMM Task - Sync bc 1' */

    /* Start of '<S270>/Reception substasks' */
    {
      /* Start of '<S282>/RX buffers update' */
      {
        24U,                           /* '<S285>/Cast13' */
        24U,                           /* '<S285>/Cast3' */
        0U,                            /* '<S285>/Cast15' */
        0U,                            /* '<S285>/Cast6' */
        0,                             /* '<S285>/Cast14' */
        0                              /* '<S285>/Cast5' */
      }
      /* End of '<S282>/RX buffers update' */
    }
    ,

    /* End of '<S270>/Reception substasks' */

    /* Start of '<S269>/Reception substasks' */
    {
      /* Start of '<S282>/RX buffers update' */
      {
        23U,                           /* '<S283>/Cast13' */
        23U,                           /* '<S283>/Cast3' */
        0U,                            /* '<S283>/Cast15' */
        0U,                            /* '<S283>/Cast6' */
        0,                             /* '<S283>/Cast14' */
        0                              /* '<S283>/Cast5' */
      }
      /* End of '<S282>/RX buffers update' */
    }
    ,

    /* End of '<S269>/Reception substasks' */

    /* Start of '<S268>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        26U,                           /* '<S281>/Cast13' */
        26U,                           /* '<S281>/Cast3' */
        0U,                            /* '<S281>/Cast15' */
        0U,                            /* '<S281>/Cast6' */
        0,                             /* '<S281>/Cast14' */
        0                              /* '<S281>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S268>/Reception substasks' */

    /* Start of '<S196>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S233>/Cast6' */
      0,                               /* '<S233>/Cast' */
      1                                /* '<S233>/NOT' */
    }
    ,

    /* End of '<S196>/RESET Board - Return to initialization' */

    /* Start of '<S191>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S218>/Gain' */
        0.0625,                        /* '<S218>/Power' */
        16.0,                          /* '<S218>/Power1' */
        -3.0,                          /* '<S219>/Gain' */
        0.125,                         /* '<S219>/Power' */
        8.0,                           /* '<S219>/Power1' */
        -6.0,                          /* '<S220>/Gain' */
        0.015625,                      /* '<S220>/Power' */
        64.0,                          /* '<S220>/Power1' */
        -6.0,                          /* '<S221>/Gain' */
        0.015625,                      /* '<S221>/Power' */
        64.0,                          /* '<S221>/Power1' */
        -4.0,                          /* '<S222>/Gain' */
        0.0625,                        /* '<S222>/Power' */
        16.0,                          /* '<S222>/Power1' */
        1U,                            /* '<S212>/Cast8' */
        1U                             /* '<S206>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S202>/Cast13' */
          1U,                          /* '<S202>/Cast3' */
          0U,                          /* '<S202>/Cast15' */
          0U,                          /* '<S202>/Cast6' */
          0,                           /* '<S202>/Cast14' */
          0                            /* '<S202>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    /* End of '<S191>/COMM Task - Sync bc 0' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S130>/Constant'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 50.0, 52.0, 92.0, 96.0, 100.0, 140.0, 142.0,
    144.0, 148.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S130>/Constant4'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 88.0, 90.0, 92.0, 132.0, 134.0, 136.0, 140.0,
    144.0, 148.0, 188.0, 192.0, 232.0, 272.0, 276.0, 277.0, 279.0, 280.0, 320.0,
    322.0, 324.0, 328.0, 330.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S130>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S130>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S21>/Logic'
   */
  { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
