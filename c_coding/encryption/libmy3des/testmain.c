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

void print_usage(int argc,char **argv){
	printf("%s [cbc|ecb] [data] [key] [encode|decode]\n",argv[0]);

}

int main(int argc, char **argv){


	char * key = (char *)malloc(128);
	char * data = (char *)malloc(128);
	char * data_converted = (char *)malloc(64 * sizeof(char));
	char * opt = (char*) malloc(8);
	int decode_method = 0;

	if(argc < 5){
		print_usage(argc,argv);
		return -1;
	}else{
		if(!strcmp(argv[1],"ecb")){
			decode_method = 1;
		}else if(!strcmp(argv[1],"cbc")){
			decode_method = 0;
		}
		
		printf("the mode = [%s]\n",argv[1]);
		printf("the data = [%s]\n",argv[2]);
		printf("the key = [%s]\n",argv[3]);
		printf("the opration = [%s]\n",argv[4]);
		
		strcpy(data,argv[2]);
		strcpy(key,argv[3]);
		strcpy(opt,argv[4]);/*encode or decode*/
	}
	
	switch(decode_method){
		case 0:
			
			break;
		case 1:/*ecb mode*/
			printf("ecb mode\n");
			if(!strcmp(opt,"encoded")){
				data_converted = des3_ebc_encryption(argv[2],argv[3]);
				printf("the data [%s] encoded to [%s]\n",argv[2],data_converted);
			}else{
				data_converted = des3_ebc_decryption(data,key);
				printf("the data [%s] decoded to [%s]\n",argv[2],data_converted);
			}	
			break;
		default:
			printf("get the wrong mode!\n");
			break;

	}


	printf("++++++Test the lib3des++++++++\n");
/*	
	data_encoded = des3_ebc_encryption(data,key);

	printf("the encoded password = [%s]\n",data_encoded);
	
*/
	return 0;

}

