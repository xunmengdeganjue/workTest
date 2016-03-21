/*
 ******************************************************************************
 *
 *    Copyright (C) 2015-2016 by Nick Li. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   
 *    OS                :   Ubuntu-14.04
 *    Version           :   0.10
 *    Released by Nick Li
 *                      2016.3.31
 *
 *
 *
 *       File Name      : data_test.h
 *       Create Date    : 2016/03/31
 *       Author         : Nick Li 
 *       Description    : 
 ******************************************************************************
*/
/****************************************************************************
 *  modify history(TransPlant-1st)                                         	*
 *  NO.     modify reason              modify date      modify person       *
 *<--1-->                      
*****************************************************************************/
#ifndef __DATA_TEST_H__
#define __DATA_TEST_H__

#include <stdio.h>
#include <string.h>
#include "doubleLinkList.h"

#define DevNumber 4


int fill_default_list(devList *tail_list);
int list_show(devList *list);

#endif
