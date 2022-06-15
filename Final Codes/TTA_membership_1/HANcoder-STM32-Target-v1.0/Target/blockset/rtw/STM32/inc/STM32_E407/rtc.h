/************************************************************************************//**
* \file         rtc.h
* \brief        RTC driver header file.
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*  Copyright (c) 2014  by HAN Automotive   http://www.han.nl        All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of the HANcoder Target Matlab/Simulink Blockset environment. For the
* licensing terms, please contact HAN Automotive.
*
* This software has been carefully tested, but is not guaranteed for any particular
* purpose. HAN Automotive does not offer any warranties and does not guarantee the
* accuracy, adequacy, or completeness of the software and is not responsible for any
* errors or omissions or the results obtained from use of the software.
*
* \endinternal
****************************************************************************************/
/* Define to prevent recursive inclusion */
#ifndef __RTC_H
#define __RTC_H

/****************************************************************************************
* Include files
****************************************************************************************/
#include "stm32f4xx_rtc.h"		/* For RTC functions */
#include "stm32f4xx.h"			/* For SUCCES and ERROR definition */
#include "errorcodes.h"         /* for error codes               */
#include "errorList.h"          /* for error list                */

/****************************************************************************************
* Function prototypes
****************************************************************************************/
void InitRtcClock(void);
void SetRtcClock(RTC_DateTypeDef* RTC_DateStruct, RTC_TimeTypeDef* RTC_TimeStruct);

#endif /*__RTC_H */
/*********************************** end of rtc.h ********************************/