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
 ****************************************************************************/

#include "lib3des.h"

void print_usage(int argc,char **argv){
	printf("%s [cbc|ecb] [data] [key] [encode|decode]\n",argv[0]);

}

int main(int argc, char **argv){


	char * key = (char *)malloc(strlen(argv[3]));
	char * data = (char *)malloc(strlen(argv[2]));

	char * data_converted = (char *)malloc( strlen(argv[2]) );
	char * opt = (char*) malloc(8);
	int decode_method = 0;
	char * data_decoded_string = (char *)malloc(2 * strlen(argv[2]));


	printf("data length = [%d]\n",(int)strlen(argv[2]));


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
			if(!strncmp(opt,"encode",3)){
#if 0
				data_converted = des3_ebc_encryption(argv[2],argv[3]);
#endif 
				printf("key = [%s],data[%s]\n",key,data);
				dataEncryption(data, key, data_converted);
			
				printf("the data [%s] encoded to [%s]\n",data,data_converted);

				//free(data_converted);
				//free(key);
				//free(data);
			}else if(!strncmp(opt,"decode",3)){

			#if 0
				data_converted = des3_ebc_decryption(data,key);/*returned the hex string*/
				printf("the decoded data by hex format:[%s]\n",data_converted);
				
				/*convert the hex string to the ASCII string*/
				//memset(data_coverted_string,0,128);
				printf("convert the hex string to the ASCII string\n");
				data_decoded_string = hexTostr(data_converted); 
				//free(data_converted);
			#endif
				dataDecryption(data,key,data_decoded_string);
				printf("the data [%s] decoded to\n [%s]\n",data,data_decoded_string);
				//free(data);
				//free(data_coverted_string);
				
			}	
			break;
		default:
			printf("get the wrong mode!\n");
			break;

	}


	printf("\n\033[32m++++++Test the lib3des++++++++\033[0m\n");


	
/*	free(data_converted);
	free(key);
	free(data);
	free(opt);
*/	
	return 0;

}

