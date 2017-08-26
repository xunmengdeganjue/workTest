/*
 ******************************************************************************
 *
 *    Copyright (C) 2017-2018 by Nick(Sky Soft Co.,Ltd). All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   
 *    OS                : Ubuntu/OpenWRT
 *    Version           : 0.10
 *    Released by Nick
 *                      2013.01.30
 *
 *
 *
 *       File Name      : testmain.c
 *       Create Date    : 2017/08/26
 *       Author         : Nick Li
 *       Description    : 
 ******************************************************************************
*/
/****************************************************************************
 *  modify history(TransPlant-1st)                                          *
 *  NO.     modify reason              modify date      modify person       *
 *<--1-->   optimize             	            *
 *<--2-->					        	        *
/****************************************************************************/

#include "lib3des.h"

int main(int argc, char **argv){


	char * key = "12345678aaaaaaaaffffffff";
	char * data = "hello world!";
	char * data_encoded = (char *)malloc(128);

	printf("++++++Test the lib3des++++++++\n");
	
	des3_ebc_encryption(data,key,data_encoded);




	return 0;

}

