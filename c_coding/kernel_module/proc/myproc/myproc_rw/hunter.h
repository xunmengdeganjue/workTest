/*
 ******************************************************************************
 *
 *    Copyright (C) 2012-2013 by TianFu Software Park Co.,Ltd. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   ARM9
 *    OS                :   OpenWRT
 *    Version           :   0.10
 *    Released by TianFu Software Park Co.,Ltd
 *                      2013.01.30
 *
 *
 *
 *       File Name      : hunter.h
 *       Create Date    : 2016/12/21
 *       Author         : Li Qiyuan
 *       Description    : This file contains all the header files 
 ******************************************************************************
*/
/****************************************************************************
 *  modify history(TransPlant-1st)                                          *
 *  NO.     modify reason              modify date      modify person       *
 *<--1-->   creat                      2016/12/21		liqiyuan            *
 *<--2-->	
 *<--3-->
****************************************************************************/

	
#ifndef __HUNTER_H__
#define __HUNTER_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h> 
#include <errno.h>
#include <time.h>  /*For nanosleep(const struct timespec *req, struct timespec *rem)*/

#define PID_FILE 	"/proc/message_hunter"
#define CSAMESSAGE	"/proc/myproc_message"
#define CSACCALOG	"/tmp/proc_test.log"

int read_write(int fd, unsigned char *packet, int size, int rw);

static int pid_write(void);
static void sighandle(int signo);
static int do_capture(void);



#endif



