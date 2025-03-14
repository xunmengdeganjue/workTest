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
 *       File Name      : lib3des.h
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
#ifndef __LIB_3DES_H__
#define __LIB_3DES_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/des.h>



#define SUBKEY_LEN 16


char * strTohex(char *string);
char * hexTostr(char *hexstring);
unsigned char *hex2bin(const char *data, int size, int *outlen);
char *bin2hex(unsigned char *data, int size);
int hex2int(char hex);
int hex_to_ascii(char c, char d);



int getSubKeys(char * keysrc, char *key1,char *key2,char *key3);

int des3_cbc_encryption(char * source_data, char * key, char *encrypted_data);
int des3_cbc_decryption(char * source_data, char * key, char *unencrypted_data);

char * des3_ebc_encryption(char * source_data, char * key/*, char *encrypted_data*/);
char * des3_ebc_decryption(char * source_data, char * key);


int dataEncryption(char *plaintext, char *key, char *data_encrypted);

int dataDecryption(char *data_encrypted, char *key, char *plaintext);



#endif


