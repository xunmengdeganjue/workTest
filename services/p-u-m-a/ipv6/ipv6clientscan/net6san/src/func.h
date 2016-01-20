/*
 ******************************************************************************
 *
 *    Copyright (C) 2015-2016 by Sky Software  Co.,Ltd. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   ARM9
 *    OS                :   OpenWRT
 *    Version          :   0.10
 *    Released by Sky Software  Co.,Ltd
 *                      2015.12.31
 *
 *
 *
 *       File Name      : func.h
 *       Create Date  : 2015/12/31
 *       Author         	: Nick Li 
 *       Description    : 
 ******************************************************************************
*/

/****************************************************************************
 *  modify history(TransPlant-1st)                                         								 *
 *  NO.     modify reason              modify date      modify person      						 *
 *<--1-->                      
*****************************************************************************/

#ifndef __FUNC_H__ 
#define __FUNC_H__

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<string.h>
#include<fcntl.h>
#include<stdarg.h> //for va_start
#include<errno.h> //for the error
#include<sys/stat.h>//for the struct stat


/*for openwrt*/
#define PIDFILE			"/proc/pid6"
#define PROCIP6CLIENTS 	"/proc/ip6addr"
#define IPV6CLIENTS 		"/tmp/ip6clients"
#define GET_MAC 			"cat /proc/ip6addr |awk -F \"|\" '{print $1}'"
#define GET_ADDR 		"echo -n `cat /proc/ip6addr |awk -F \"|\" '{print $2}'`"


/*for unbuntu*/
//#define PROCIP6CLIENTS 	"/tmp/ip6addr"
//#define PIDFILE 			"/tmp/ip6scan.pid"
//#define GET_MAC 			"cat /tmp/ip6addr |awk -F \"|\" '{print $1}'"
//#define GET_ADDR 		"echo -n `cat /tmp/ip6addr |awk -F \"|\" '{print $2}'`"

int exec_cmd(char *cmd, char *val,int size);
char* xasprintf(const char *format, ...);
char* bb_get_chunk_with_continuation(FILE *file, int *end, int *lineno);
char* xmalloc_fgetline(FILE *file);
int data_transmission();

//extern int vasprintf(char **ret, const char *format, va_list ap);


#endif
