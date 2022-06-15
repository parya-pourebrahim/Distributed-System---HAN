/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v4_7_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v4_7'.
 *
 * Model version                  : 1.183
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  8 19:45:50 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Controller_v4_7.h"
#include "HANcoder_E407_TTA_Controller_v4_7_private.h"

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    372.0,                             /* '<S1552>/Sum18' */
    364.0,                             /* '<S1552>/Sum17' */
    136.0,                             /* '<S1552>/Sum7' */
    44.0,                              /* '<S1552>/Sum1' */
    48.0,                              /* '<S1552>/Sum2' */
    40.0,                              /* '<S1552>/Sum4' */
    360.0,                             /* '<S1552>/Sum16' */
    132.0,                             /* '<S1552>/Sum6' */
    0.0584,                            /* '<S1772>/Multiply' */
    16.0,                              /* '<S1774>/Power1' */
    0.0625,                            /* '<S1774>/Power' */
    16.0,                              /* '<S1775>/Power1' */
    0.0625,                            /* '<S1775>/Power' */
    16.0,                              /* '<S1776>/Power1' */
    0.0625,                            /* '<S1776>/Power' */
    16.0,                              /* '<S1777>/Power1' */
    0.0625,                            /* '<S1777>/Power' */
    0.0625,                            /* '<S1696>/Power' */
    16.0,                              /* '<S1696>/Power1' */
    0.0625,                            /* '<S1697>/Power' */
    16.0,                              /* '<S1697>/Power1' */
    0.0625,                            /* '<S1698>/Power' */
    16.0,                              /* '<S1698>/Power1' */
    0.0625,                            /* '<S1699>/Power' */
    16.0,                              /* '<S1699>/Power1' */
    144.0,                             /* '<S1551>/Sum17' */
    208.0,                             /* '<S1551>/Sum16' */
    44.0,                              /* '<S1551>/Sum1' */
    48.0,                              /* '<S1551>/Sum2' */
    100.0,                             /* '<S1551>/Sum7' */
    52.0,                              /* '<S1551>/Sum3' */
    96.0,                              /* '<S1551>/Sum6' */
    40.0,                              /* '<S1551>/Sum4' */
    136.0,                             /* '<S1369>/Sum5' */
    372.0,                             /* '<S1369>/Sum18' */
    92.0,                              /* '<S1369>/Sum6' */
    44.0,                              /* '<S1369>/Sum1' */
    48.0,                              /* '<S1369>/Sum2' */
    40.0,                              /* '<S1369>/Sum4' */
    88.0,                              /* '<S1369>/Sum3' */
    0.015625,                          /* '<S1470>/Power' */
    64.0,                              /* '<S1470>/Power1' */
    0.125,                             /* '<S1471>/Power' */
    8.0,                               /* '<S1471>/Power1' */
    0.015625,                          /* '<S1472>/Power' */
    64.0,                              /* '<S1472>/Power1' */
    52.0,                              /* '<S1368>/Sum17' */
    208.0,                             /* '<S1368>/Sum16' */
    44.0,                              /* '<S1368>/Sum1' */
    48.0,                              /* '<S1368>/Sum2' */
    40.0,                              /* '<S1368>/Sum4' */
    148.0,                             /* '<S545>/Sum10' */
    140.0,                             /* '<S545>/Sum8' */
    144.0,                             /* '<S545>/Sum9' */
    372.0,                             /* '<S545>/Sum18' */
    192.0,                             /* '<S545>/Sum13' */
    236.0,                             /* '<S545>/Sum14' */
    316.0,                             /* '<S545>/Sum20' */
    364.0,                             /* '<S545>/Sum17' */
    136.0,                             /* '<S545>/Sum7' */
    92.0,                              /* '<S545>/Sum5' */
    44.0,                              /* '<S545>/Sum1' */
    320.0,                             /* '<S545>/Sum15' */
    48.0,                              /* '<S545>/Sum2' */
    40.0,                              /* '<S545>/Sum4' */
    188.0,                             /* '<S545>/Sum12' */
    232.0,                             /* '<S545>/Sum11' */
    360.0,                             /* '<S545>/Sum16' */
    312.0,                             /* '<S545>/Sum19' */
    88.0,                              /* '<S545>/Sum3' */
    132.0,                             /* '<S545>/Sum6' */
    1.0,                               /* '<S1321>/Gain' */
    1.0,                               /* '<S1321>/Gain1' */
    1.0,                               /* '<S1321>/Gain2' */
    1.0,                               /* '<S1321>/Gain3' */
    1.0,                               /* '<S1321>/Gain4' */
    1.0,                               /* '<S1321>/Gain5' */
    1.0,                               /* '<S1321>/Gain6' */
    1.0,                               /* '<S1321>/Gain7' */
    1.0,                               /* '<S1320>/Gain' */
    1.0,                               /* '<S1320>/Gain1' */
    1.0,                               /* '<S1320>/Gain2' */
    1.0,                               /* '<S1320>/Gain3' */
    1.0,                               /* '<S1320>/Gain4' */
    1.0,                               /* '<S1320>/Gain5' */
    1.0,                               /* '<S1320>/Gain6' */
    1.0,                               /* '<S1320>/Gain7' */
    1.0,                               /* '<S1319>/Gain' */
    1.0,                               /* '<S1319>/Gain1' */
    1.0,                               /* '<S1319>/Gain2' */
    1.0,                               /* '<S1319>/Gain3' */
    1.0,                               /* '<S1319>/Gain4' */
    1.0,                               /* '<S1319>/Gain5' */
    1.0,                               /* '<S1319>/Gain6' */
    1.0,                               /* '<S1319>/Gain7' */
    16.0,                              /* '<S1299>/Power1' */
    0.0625,                            /* '<S1299>/Power' */
    16.0,                              /* '<S1300>/Power1' */
    0.0625,                            /* '<S1300>/Power' */
    16.0,                              /* '<S1301>/Power1' */
    0.0625,                            /* '<S1301>/Power' */
    16.0,                              /* '<S1302>/Power1' */
    0.0625,                            /* '<S1302>/Power' */
    16.0,                              /* '<S1279>/Power1' */
    0.0625,                            /* '<S1279>/Power' */
    16.0,                              /* '<S1280>/Power1' */
    0.0625,                            /* '<S1280>/Power' */
    16.0,                              /* '<S1281>/Power1' */
    0.0625,                            /* '<S1281>/Power' */
    16.0,                              /* '<S1282>/Power1' */
    0.0625,                            /* '<S1282>/Power' */
    64.0,                              /* '<S1233>/Power1' */
    0.015625,                          /* '<S1233>/Power' */
    64.0,                              /* '<S1232>/Power1' */
    0.015625,                          /* '<S1232>/Power' */
    8.0,                               /* '<S1234>/Power1' */
    0.125,                             /* '<S1234>/Power' */
    16.0,                              /* '<S1181>/Power1' */
    0.0625,                            /* '<S1181>/Power' */
    16.0,                              /* '<S1182>/Power1' */
    0.0625,                            /* '<S1182>/Power' */
    16.0,                              /* '<S1183>/Power1' */
    0.0625,                            /* '<S1183>/Power' */
    16.0,                              /* '<S1184>/Power1' */
    0.0625,                            /* '<S1184>/Power' */
    0.0584,                            /* '<S1179>/Gain' */
    0.015625,                          /* '<S974>/Power' */
    64.0,                              /* '<S974>/Power1' */
    0.125,                             /* '<S975>/Power' */
    8.0,                               /* '<S975>/Power1' */
    0.015625,                          /* '<S976>/Power' */
    64.0,                              /* '<S976>/Power1' */
    0.0625,                            /* '<S914>/Power' */
    16.0,                              /* '<S914>/Power1' */
    0.0625,                            /* '<S915>/Power' */
    16.0,                              /* '<S915>/Power1' */
    0.0625,                            /* '<S916>/Power' */
    16.0,                              /* '<S916>/Power1' */
    0.0625,                            /* '<S917>/Power' */
    16.0,                              /* '<S917>/Power1' */
    200.0,                             /* '<S544>/Sum14' */
    204.0,                             /* '<S544>/Sum15' */
    212.0,                             /* '<S544>/Sum17' */
    208.0,                             /* '<S544>/Sum16' */
    44.0,                              /* '<S544>/Sum1' */
    48.0,                              /* '<S544>/Sum2' */
    52.0,                              /* '<S544>/Sum3' */
    100.0,                             /* '<S544>/Sum7' */
    96.0,                              /* '<S544>/Sum6' */
    148.0,                             /* '<S544>/Sum10' */
    144.0,                             /* '<S544>/Sum9' */
    196.0,                             /* '<S544>/Sum11' */
    192.0,                             /* '<S544>/Sum13' */
    40.0,                              /* '<S544>/Sum4' */
    188.0,                             /* '<S544>/Sum12' */
    92.0,                              /* '<S544>/Sum5' */
    140.0,                             /* '<S544>/Sum8' */
    324.0,                             /* '<S192>/Sum15' */
    372.0,                             /* '<S192>/Sum18' */
    192.0,                             /* '<S192>/Sum13' */
    236.0,                             /* '<S192>/Sum14' */
    316.0,                             /* '<S192>/Sum3' */
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
    0U,                                /* '<S1666>/Cast' */
    0U,                                /* '<S1666>/Cast1' */
    0U,                                /* '<S1666>/Cast2' */
    0U,                                /* '<S1667>/Cast' */
    0U,                                /* '<S1667>/Cast1' */
    0U,                                /* '<S1667>/Cast2' */
    0U,                                /* '<S1668>/Cast' */
    0U,                                /* '<S1668>/Cast1' */
    0U,                                /* '<S1668>/Cast2' */
    0U,                                /* '<S1669>/Cast' */
    0U,                                /* '<S1669>/Cast1' */
    0U,                                /* '<S1669>/Cast2' */
    0U,                                /* '<S1513>/Cast6' */
    0U,                                /* '<S944>/Cast' */
    0U,                                /* '<S944>/Cast1' */
    0U,                                /* '<S944>/Cast2' */
    0U,                                /* '<S945>/Cast' */
    0U,                                /* '<S945>/Cast1' */
    0U,                                /* '<S945>/Cast2' */
    0U,                                /* '<S946>/Cast' */
    0U,                                /* '<S946>/Cast1' */
    0U,                                /* '<S946>/Cast2' */
    0U,                                /* '<S947>/Cast' */
    0U,                                /* '<S947>/Cast1' */
    0U,                                /* '<S947>/Cast2' */
    0U,                                /* '<S143>/Cast1' */
    0U,                                /* '<S118>/Cast' */
    0,                                 /* '<S1513>/Cast' */
    1,                                 /* '<S1513>/NOT' */
    0,                                 /* '<S659>/Cast' */
    0,                                 /* '<S276>/NOT' */
    0,                                 /* '<S275>/NOT' */
    0,                                 /* '<S274>/NOT' */
    0,                                 /* '<S234>/Cast' */

    /* Start of '<S1552>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1726>/Gain' */
        0.0625,                        /* '<S1726>/Power' */
        16.0,                          /* '<S1726>/Power1' */
        -3.0,                          /* '<S1727>/Gain' */
        0.125,                         /* '<S1727>/Power' */
        8.0,                           /* '<S1727>/Power1' */
        -6.0,                          /* '<S1728>/Gain' */
        0.015625,                      /* '<S1728>/Power' */
        64.0,                          /* '<S1728>/Power1' */
        -6.0,                          /* '<S1729>/Gain' */
        0.015625,                      /* '<S1729>/Power' */
        64.0,                          /* '<S1729>/Power1' */
        -4.0,                          /* '<S1730>/Gain' */
        0.0625,                        /* '<S1730>/Power' */
        16.0,                          /* '<S1730>/Power1' */
        1U,                            /* '<S1720>/Cast8' */
        1U                             /* '<S1714>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1710>/Cast13' */
          1U,                          /* '<S1710>/Cast3' */
          0U,                          /* '<S1710>/Cast15' */
          0U,                          /* '<S1710>/Cast6' */
          0,                           /* '<S1710>/Cast14' */
          0                            /* '<S1710>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1552>/COMM Task - Sync bc 1' */

    /* Start of '<S1679>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1690>/Cast8' */
    }
    ,

    /* End of '<S1679>/Check msg transmission CAN2' */

    /* Start of '<S1679>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1684>/Cast' */
    }
    ,

    /* End of '<S1679>/Check msg transmission CAN1' */

    /* Start of '<S1641>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        22U,                           /* '<S1680>/Cast13' */
        22U,                           /* '<S1680>/Cast3' */
        0U,                            /* '<S1680>/Cast15' */
        0U,                            /* '<S1680>/Cast6' */
        0,                             /* '<S1680>/Cast14' */
        0                              /* '<S1680>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1641>/Reception substasks' */

    /* Start of '<S1649>/Check msg transmission CAN2' */
    {
      26U                              /* '<S1660>/Cast8' */
    }
    ,

    /* End of '<S1649>/Check msg transmission CAN2' */

    /* Start of '<S1649>/Check msg transmission CAN1' */
    {
      26U                              /* '<S1654>/Cast' */
    }
    ,

    /* End of '<S1649>/Check msg transmission CAN1' */

    /* Start of '<S1640>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        26U,                           /* '<S1650>/Cast13' */
        26U,                           /* '<S1650>/Cast3' */
        0U,                            /* '<S1650>/Cast15' */
        0U,                            /* '<S1650>/Cast6' */
        0,                             /* '<S1650>/Cast14' */
        0                              /* '<S1650>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1640>/Reception substasks' */

    /* Start of '<S1554>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1595>/Cast6' */
      0,                               /* '<S1595>/Cast' */
      1                                /* '<S1595>/NOT' */
    }
    ,

    /* End of '<S1554>/RESET Board - Return to initialization' */

    /* Start of '<S1551>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1579>/Gain' */
        0.0625,                        /* '<S1579>/Power' */
        16.0,                          /* '<S1579>/Power1' */
        -3.0,                          /* '<S1580>/Gain' */
        0.125,                         /* '<S1580>/Power' */
        8.0,                           /* '<S1580>/Power1' */
        -6.0,                          /* '<S1581>/Gain' */
        0.015625,                      /* '<S1581>/Power' */
        64.0,                          /* '<S1581>/Power1' */
        -6.0,                          /* '<S1582>/Gain' */
        0.015625,                      /* '<S1582>/Power' */
        64.0,                          /* '<S1582>/Power1' */
        -4.0,                          /* '<S1583>/Gain' */
        0.0625,                        /* '<S1583>/Power' */
        16.0,                          /* '<S1583>/Power1' */
        1U,                            /* '<S1573>/Cast8' */
        1U                             /* '<S1567>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1563>/Cast13' */
          1U,                          /* '<S1563>/Cast3' */
          0U,                          /* '<S1563>/Cast15' */
          0U,                          /* '<S1563>/Cast6' */
          0,                           /* '<S1563>/Cast14' */
          0                            /* '<S1563>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1551>/COMM Task - Sync bc 0' */

    /* Start of '<S1369>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1497>/Gain' */
        0.0625,                        /* '<S1497>/Power' */
        16.0,                          /* '<S1497>/Power1' */
        -3.0,                          /* '<S1498>/Gain' */
        0.125,                         /* '<S1498>/Power' */
        8.0,                           /* '<S1498>/Power1' */
        -6.0,                          /* '<S1499>/Gain' */
        0.015625,                      /* '<S1499>/Power' */
        64.0,                          /* '<S1499>/Power1' */
        -6.0,                          /* '<S1500>/Gain' */
        0.015625,                      /* '<S1500>/Power' */
        64.0,                          /* '<S1500>/Power1' */
        -4.0,                          /* '<S1501>/Gain' */
        0.0625,                        /* '<S1501>/Power' */
        16.0,                          /* '<S1501>/Power1' */
        1U,                            /* '<S1491>/Cast8' */
        1U                             /* '<S1485>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1481>/Cast13' */
          1U,                          /* '<S1481>/Cast3' */
          0U,                          /* '<S1481>/Cast15' */
          0U,                          /* '<S1481>/Cast6' */
          0,                           /* '<S1481>/Cast14' */
          0                            /* '<S1481>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1369>/COMM Task - Sync bc 1' */

    /* Start of '<S1453>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1464>/Cast8' */
    }
    ,

    /* End of '<S1453>/Check msg transmission CAN2' */

    /* Start of '<S1453>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1458>/Cast' */
    }
    ,

    /* End of '<S1453>/Check msg transmission CAN1' */

    /* Start of '<S1445>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        21U,                           /* '<S1454>/Cast13' */
        21U,                           /* '<S1454>/Cast3' */
        0U,                            /* '<S1454>/Cast15' */
        0U,                            /* '<S1454>/Cast6' */
        0,                             /* '<S1454>/Cast14' */
        0                              /* '<S1454>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1445>/Reception substasks' */

    /* Start of '<S1372>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1410>/Cast6' */
      0,                               /* '<S1410>/Cast' */
      1                                /* '<S1410>/NOT' */
    }
    ,

    /* End of '<S1372>/RESET Board - Return to initialization' */

    /* Start of '<S1368>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1394>/Gain' */
        0.0625,                        /* '<S1394>/Power' */
        16.0,                          /* '<S1394>/Power1' */
        -3.0,                          /* '<S1395>/Gain' */
        0.125,                         /* '<S1395>/Power' */
        8.0,                           /* '<S1395>/Power1' */
        -6.0,                          /* '<S1396>/Gain' */
        0.015625,                      /* '<S1396>/Power' */
        64.0,                          /* '<S1396>/Power1' */
        -6.0,                          /* '<S1397>/Gain' */
        0.015625,                      /* '<S1397>/Power' */
        64.0,                          /* '<S1397>/Power1' */
        -4.0,                          /* '<S1398>/Gain' */
        0.0625,                        /* '<S1398>/Power' */
        16.0,                          /* '<S1398>/Power1' */
        1U,                            /* '<S1388>/Cast8' */
        1U                             /* '<S1382>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1378>/Cast13' */
          1U,                          /* '<S1378>/Cast3' */
          0U,                          /* '<S1378>/Cast15' */
          0U,                          /* '<S1378>/Cast6' */
          0,                           /* '<S1378>/Cast14' */
          0                            /* '<S1378>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1368>/COMM Task - Sync bc 0' */

    /* Start of '<S545>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S271>/Transmission subtasks1' */
      {
        -4.0,                          /* '<S1001>/Gain' */
        0.0625,                        /* '<S1001>/Power' */
        16.0,                          /* '<S1001>/Power1' */
        -3.0,                          /* '<S1002>/Gain' */
        0.125,                         /* '<S1002>/Power' */
        8.0,                           /* '<S1002>/Power1' */
        -6.0,                          /* '<S1003>/Gain' */
        0.015625,                      /* '<S1003>/Power' */
        64.0,                          /* '<S1003>/Power1' */
        -6.0,                          /* '<S1004>/Gain' */
        0.015625,                      /* '<S1004>/Power' */
        64.0,                          /* '<S1004>/Power1' */
        -4.0,                          /* '<S1005>/Gain' */
        0.0625,                        /* '<S1005>/Power' */
        16.0,                          /* '<S1005>/Power1' */
        1U,                            /* '<S995>/Cast8' */
        1U                             /* '<S989>/Cast' */
      }
      ,

      /* End of '<S271>/Transmission subtasks1' */

      /* Start of '<S271>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S985>/Cast13' */
          1U,                          /* '<S985>/Cast3' */
          0U,                          /* '<S985>/Cast15' */
          0U,                          /* '<S985>/Cast6' */
          0,                           /* '<S985>/Cast14' */
          0                            /* '<S985>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S271>/Reception substasks' */
    }
    ,

    /* End of '<S545>/COMM Task - Sync bc 1' */

    /* Start of '<S957>/Check msg transmission CAN2' */
    {
      21U                              /* '<S968>/Cast8' */
    }
    ,

    /* End of '<S957>/Check msg transmission CAN2' */

    /* Start of '<S957>/Check msg transmission CAN1' */
    {
      21U                              /* '<S962>/Cast' */
    }
    ,

    /* End of '<S957>/Check msg transmission CAN1' */

    /* Start of '<S788>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        21U,                           /* '<S958>/Cast13' */
        21U,                           /* '<S958>/Cast3' */
        0U,                            /* '<S958>/Cast15' */
        0U,                            /* '<S958>/Cast6' */
        0,                             /* '<S958>/Cast14' */
        0                              /* '<S958>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S788>/Reception substasks' */

    /* Start of '<S927>/Check msg transmission CAN2' */
    {
      22U                              /* '<S938>/Cast8' */
    }
    ,

    /* End of '<S927>/Check msg transmission CAN2' */

    /* Start of '<S927>/Check msg transmission CAN1' */
    {
      22U                              /* '<S932>/Cast' */
    }
    ,

    /* End of '<S927>/Check msg transmission CAN1' */

    /* Start of '<S787>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        22U,                           /* '<S928>/Cast13' */
        22U,                           /* '<S928>/Cast3' */
        0U,                            /* '<S928>/Cast15' */
        0U,                            /* '<S928>/Cast6' */
        0,                             /* '<S928>/Cast14' */
        0                              /* '<S928>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S787>/Reception substasks' */

    /* Start of '<S897>/Check msg transmission CAN2' */
    {
      26U                              /* '<S908>/Cast8' */
    }
    ,

    /* End of '<S897>/Check msg transmission CAN2' */

    /* Start of '<S897>/Check msg transmission CAN1' */
    {
      26U                              /* '<S902>/Cast' */
    }
    ,

    /* End of '<S897>/Check msg transmission CAN1' */

    /* Start of '<S786>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        26U,                           /* '<S898>/Cast13' */
        26U,                           /* '<S898>/Cast3' */
        0U,                            /* '<S898>/Cast15' */
        0U,                            /* '<S898>/Cast6' */
        0,                             /* '<S898>/Cast14' */
        0                              /* '<S898>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S786>/Reception substasks' */

    /* Start of '<S785>/Transmission subtasks' */
    {
      -4.0,                            /* '<S884>/Gain' */
      0.0625,                          /* '<S884>/Power' */
      16.0,                            /* '<S884>/Power1' */
      -4.0,                            /* '<S885>/Gain' */
      0.0625,                          /* '<S885>/Power' */
      16.0,                            /* '<S885>/Power1' */
      -4.0,                            /* '<S886>/Gain' */
      0.0625,                          /* '<S886>/Power' */
      16.0,                            /* '<S886>/Power1' */
      -4.0,                            /* '<S887>/Gain' */
      0.0625,                          /* '<S887>/Power' */
      16.0,                            /* '<S887>/Power1' */

      /* Start of '<S805>/Check msg transmission CAN2' */
      {
        25U                            /* '<S878>/Cast8' */
      }
      ,

      /* End of '<S805>/Check msg transmission CAN2' */

      /* Start of '<S805>/Check msg transmission CAN1' */
      {
        25U                            /* '<S872>/Cast' */
      }
      /* End of '<S805>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S785>/Transmission subtasks' */

    /* Start of '<S785>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        25U,                           /* '<S868>/Cast13' */
        25U,                           /* '<S868>/Cast3' */
        0U,                            /* '<S868>/Cast15' */
        0U,                            /* '<S868>/Cast6' */
        0,                             /* '<S868>/Cast14' */
        0                              /* '<S868>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S785>/Reception substasks' */

    /* Start of '<S784>/Transmission subtasks' */
    {
      -4.0,                            /* '<S853>/Gain' */
      0.0625,                          /* '<S853>/Power' */
      16.0,                            /* '<S853>/Power1' */
      -4.0,                            /* '<S854>/Gain' */
      0.0625,                          /* '<S854>/Power' */
      16.0,                            /* '<S854>/Power1' */
      -4.0,                            /* '<S855>/Gain' */
      0.0625,                          /* '<S855>/Power' */
      16.0,                            /* '<S855>/Power1' */
      -4.0,                            /* '<S856>/Gain' */
      0.0625,                          /* '<S856>/Power' */
      16.0,                            /* '<S856>/Power1' */

      /* Start of '<S805>/Check msg transmission CAN2' */
      {
        24U                            /* '<S847>/Cast8' */
      }
      ,

      /* End of '<S805>/Check msg transmission CAN2' */

      /* Start of '<S805>/Check msg transmission CAN1' */
      {
        24U                            /* '<S841>/Cast' */
      }
      /* End of '<S805>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S784>/Transmission subtasks' */

    /* Start of '<S784>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        24U,                           /* '<S837>/Cast13' */
        24U,                           /* '<S837>/Cast3' */
        0U,                            /* '<S837>/Cast15' */
        0U,                            /* '<S837>/Cast6' */
        0,                             /* '<S837>/Cast14' */
        0                              /* '<S837>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S784>/Reception substasks' */

    /* Start of '<S783>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S822>/Gain' */
      0.0625,                          /* '<S822>/Power' */
      16.0,                            /* '<S822>/Power1' */
      -4.0,                            /* '<S823>/Gain' */
      0.0625,                          /* '<S823>/Power' */
      16.0,                            /* '<S823>/Power1' */
      -4.0,                            /* '<S824>/Gain' */
      0.0625,                          /* '<S824>/Power' */
      16.0,                            /* '<S824>/Power1' */
      -4.0,                            /* '<S825>/Gain' */
      0.0625,                          /* '<S825>/Power' */
      16.0,                            /* '<S825>/Power1' */

      /* Start of '<S805>/Check msg transmission CAN2' */
      {
        23U                            /* '<S816>/Cast8' */
      }
      ,

      /* End of '<S805>/Check msg transmission CAN2' */

      /* Start of '<S805>/Check msg transmission CAN1' */
      {
        23U                            /* '<S810>/Cast' */
      }
      /* End of '<S805>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S783>/Transmission subtasks1' */

    /* Start of '<S783>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        23U,                           /* '<S806>/Cast13' */
        23U,                           /* '<S806>/Cast3' */
        0U,                            /* '<S806>/Cast15' */
        0U,                            /* '<S806>/Cast6' */
        0,                             /* '<S806>/Cast14' */
        0                              /* '<S806>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S783>/Reception substasks' */

    /* Start of '<S553>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S658>/Cast6' */
      0,                               /* '<S658>/Cast' */
      1                                /* '<S658>/NOT' */
    }
    ,

    /* End of '<S553>/RESET Board - Return to initialization' */

    /* Start of '<S550>/Transmission subtasks' */
    {
      13U,                             /* '<S645>/Cast8' */
      13U                              /* '<S639>/Cast' */
    }
    ,

    /* End of '<S550>/Transmission subtasks' */

    /* Start of '<S550>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        13U,                           /* '<S635>/Cast13' */
        13U,                           /* '<S635>/Cast3' */
        0U,                            /* '<S635>/Cast15' */
        0U,                            /* '<S635>/Cast6' */
        0,                             /* '<S635>/Cast14' */
        0                              /* '<S635>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S550>/Reception substasks' */

    /* Start of '<S549>/Transmission subtasks' */
    {
      12U,                             /* '<S627>/Cast8' */
      12U                              /* '<S621>/Cast' */
    }
    ,

    /* End of '<S549>/Transmission subtasks' */

    /* Start of '<S549>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        12U,                           /* '<S617>/Cast13' */
        12U,                           /* '<S617>/Cast3' */
        0U,                            /* '<S617>/Cast15' */
        0U,                            /* '<S617>/Cast6' */
        0,                             /* '<S617>/Cast14' */
        0                              /* '<S617>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S549>/Reception substasks' */

    /* Start of '<S548>/Transmission subtasks' */
    {
      11U,                             /* '<S609>/Cast8' */
      11U                              /* '<S603>/Cast' */
    }
    ,

    /* End of '<S548>/Transmission subtasks' */

    /* Start of '<S548>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        11U,                           /* '<S599>/Cast13' */
        11U,                           /* '<S599>/Cast3' */
        0U,                            /* '<S599>/Cast15' */
        0U,                            /* '<S599>/Cast6' */
        0,                             /* '<S599>/Cast14' */
        0                              /* '<S599>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S548>/Reception substasks' */

    /* Start of '<S544>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S582>/Gain' */
        0.0625,                        /* '<S582>/Power' */
        16.0,                          /* '<S582>/Power1' */
        -3.0,                          /* '<S583>/Gain' */
        0.125,                         /* '<S583>/Power' */
        8.0,                           /* '<S583>/Power1' */
        -6.0,                          /* '<S584>/Gain' */
        0.015625,                      /* '<S584>/Power' */
        64.0,                          /* '<S584>/Power1' */
        -6.0,                          /* '<S585>/Gain' */
        0.015625,                      /* '<S585>/Power' */
        64.0,                          /* '<S585>/Power1' */
        -4.0,                          /* '<S586>/Gain' */
        0.0625,                        /* '<S586>/Power' */
        16.0,                          /* '<S586>/Power1' */
        1U,                            /* '<S576>/Cast8' */
        1U                             /* '<S570>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S566>/Cast13' */
          1U,                          /* '<S566>/Cast3' */
          0U,                          /* '<S566>/Cast15' */
          0U,                          /* '<S566>/Cast6' */
          0,                           /* '<S566>/Cast14' */
          0                            /* '<S566>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S544>/COMM Task - Sync bc 0' */

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
        25U,                           /* '<S281>/Cast13' */
        25U,                           /* '<S281>/Cast3' */
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
    144.0, 148.0, 188.0, 192.0, 232.0, 272.0, 312.0, 316.0, 317.0, 319.0, 320.0,
    360.0, 362.0, 364.0, 368.0, 370.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S130>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S130>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

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
