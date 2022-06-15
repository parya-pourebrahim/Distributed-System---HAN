/************************************************************************************//**
* \file         ftp_server.h
* \brief        FTP server header file.
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*  Copyright (c) 2013  by HAN Automotive   http://www.han.nl        All rights reserved
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
#ifndef _FTP_SERVER_H_
#define _FTP_SERVER_H_

/** \brief Enumeration to hold the status of the connection */
enum
{
  FTP_CLOSED,
  FTP_OPEN
};

/** \brief String to hold the username. */
extern const char FTP_UserName[];
/** \brief String to hold the password. */
extern const char FTP_Password[];

/*** FTP Server settings ***/
#define FTP_TCP_CONTROL_PORT       	21
#define FTP_REQUEST_SPACE          	32 /*Client request should not be longer*/
#define BLOCK_SIZE					1460 /* 1460 is max TCP packet size (MSS) */

/* FTP Server Requests */
#define FTP_USER_REQUEST			"USER"  /* User name request */
#define FTP_PASS_REQUEST			"PASS"  /* Password request */
#define FTP_CWD_REQUEST				"CWD"   /* Change working directory */
#define FTP_CDUP_REQUEST			"CDUP"  /* Up one directory */
#define FTP_TYPE_REQUEST			"TYPE"  /* Supported transfer types */
#define FTP_QUIT_REQUEST			"QUIT"  /* Quit session request */
#define FTP_PORT_REQUEST			"PORT"  /* Host and port specs */
#define FTP_PASV_REQUEST			"PASV"	/* Passive request */
#define FTP_NLST_REQUEST			"NLST" 
#define FTP_STOR_REQUEST			"STOR"
#define FTP_RETR_REQUEST			"RETR"	/* File retrieve request */
#define FTP_APPE_REQUEST			"APPE"
#define FTP_RNAMEFR_REQUEST			"RNFR"	/* Rename From */
#define FTP_RNAMETO_REQUEST			"RNTO"	/* Rename To */
#define FTP_ABORT_REQUEST			"ABOR"	/* Abort previous request */
#define FTP_DELE_REQUEST			"DELE"	/* Delete file in pathname */
#define FTP_RMD_REQUEST				"RMD"	/* Remove directory */
#define FTP_MKD_REQUEST				"MKD"	/* Make directory */
#define FTP_PWD_REQUEST				"PWD"	/* Print working directory */
#define FTP_LIST_REQUEST			"LIST"	/* List files or list file info */
#define FTP_SYST_REQUEST			"SYST"	/* Get type of OS of server */
#define FTP_FEAT_REQUEST			"FEAT"	/* Get the features from server */
#define FTP_MDTM_REQUEST			"MDTM"	/* Get the modified date and time */
#define FTP_RESTART_REQUEST			"REST"  /* Restart command */
#define FTP_MKD_REQUEST				"MKD"	/* Make directory command */
#define FTP_RMD_REQUEST				"RMD"	/* Remove directory command */
#define FTP_SIZE_REQUEST			"SIZE"	/* Size command */



/* FTP Server Response */
#define FTP_DATA_CONNECTION_OPEN	"125 Data conn. open\r\n"
#define FTP_FILE_OK_RESPONSE        "150 OK\r\n"
#define FTP_COMMAND_OK				"200 Command okay\r\n"
#define FTP_SYST_RESPONSE			"215 Windows_NT\r\n"
#define FTP_FEAT_RESPONSE			"211-Extended features supported:"
#define FTP_FEAT_RESPONSE2			" SIZE\r\n211 END\r\n" /* Only size and modification date available */
#define FTP_WELCOME_RESPONSE        "220 Service Ready\r\n"
#define FTP_QUIT_RESPONSE           "221 BYE OK\r\n"
#define FTP_PASV_RESPONSE			"227 " /* 227 Entering Passive Mode (h1,h2,h3,h4,p1,p2).\r\n */
#define FTP_TRANSFER_OK_RESPONSE    "226 Transfer OK\r\n"
#define FTP_PASS_OK_RESPONSE        "230 User logged in\r\n"
#define FTP_FILE_ACT_OK_RESPONSE	"250 File action OK\r\n"
#define FTP_USER_RESPONSE           "331 USER OK. PASS needed\r\n"
#define FTP_FILE_ACTION_PENDING     "350 Restarting at 0\r\n"
#define FTP_DATA_PORT_FAILED        "425 Cannot open Data Port\r\n"
#define FTP_ACT_ABORTED				"451 Requested action aborted: local error in processing."
#define FTP_UNKNOWN_RESPONSE        "500 Unrecognised Command\r\n"
#define FTP_CMD_NOT_IMP_RESPONSE    "502 Command Unimplemented\r\n"
#define FTP_BAD_SEQUENCE_RESPONSE   "503 Bad Sequence of Commands\r\n"
#define FTP_USER_FAIL_RESPONSE		"530 Not logged in.\r\n"
#define FTP_WRITE_FAIL_RESPONSE     "550 File unavailable\r\n"


/********Prototype Functions************************************/
/*** FTP server init ***/
void FtpServerInit(void);
/*** FTP server Task: 1 client and 1 file per transfer ***/
void FtpServerTask( void *pvParameters );

#endif
