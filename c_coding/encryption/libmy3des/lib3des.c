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
 *       File Name      : lib3des.c
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

/************************************************************************
 * 二进制字节数组转换十六进制字符串函数
 * 输入： 
 *       data 二进制字节数组
 *       size 二进制字节数组长度
 * 输出：
 *       十六进制字符串，需要free函数释放空间，失败返回NULL
 *
 * author: tonglulin@gmail.com by www.qmailer.net
 ************************************************************************/
char *bin2hex(unsigned char *data, int size)
{
    int  i = 0;
    int  v = 0;
    char *p = NULL;
    char *buf = NULL;
    char base_char = 'A';
 
    buf = p = (char *)malloc(size * 2 + 1);
    for (i = 0; i < size; i++) {
        v = data[i] >> 4;
        *p++ = v < 10 ? v + '0' : v - 10 + base_char;
 
        v = data[i] & 0x0f;
        *p++ = v < 10 ? v + '0' : v - 10 + base_char;
    }
 
    *p = '\0';
    return buf;
}
 
/************************************************************************
 * 十六进制字符串转换二进制字节数组
 * 输入： 
 *       data 十六进制字符串
 *       size 十六进制字符串长度，2的倍数
 *       outlen 转换后的二进制字符数组长度
 * 输出：
 *       二进制字符数组，需要free函数释放空间，失败返回NULL
 *
 * author: tonglulin@gmail.com by www.qmailer.net
 ************************************************************************/
unsigned char *hex2bin(const char *data, int size, int *outlen)
{
    int i = 0;
    int len = 0;
    char char1 = '\0';
    char char2 = '\0';
    unsigned char value = 0;
    unsigned char *out = NULL;
 
    if (size % 2 != 0) {
		printf("[%s] trace 000 ERROR\n",__FUNCTION__);
        return NULL;
    }
 	printf("[%s] trace 111\n",__FUNCTION__);
	
    len = size / 2;
    out = (unsigned char *)malloc(len * sizeof(char) + 1);
    if (out == NULL) {
		printf("[%s] trace 222\n",__FUNCTION__);
        return NULL;
    }
 
    while (i < len) {
        char1 = *data;
        if (char1 >= '0' && char1 <= '9') {
            value = (char1 - '0') << 4;
        }
        else if (char1 >= 'a' && char1 <= 'f') {
            value = (char1 - 'a' + 10) << 4;
        }
        else if (char1 >= 'A' && char1 <= 'F') {
            value = (char1 - 'A' + 10) << 4;
        }
        else {
			printf("\033[31m[%s]ERROR\033[0m",__FUNCTION__);
            free(out);
            return NULL;
        }
        data++;
 
        char2 = *data;
        if (char2 >= '0' && char2 <= '9') {
            value |= char2 - '0';
        }
        else if (char2 >= 'a' && char2 <= 'f') {
            value |= char2 - 'a' + 10;
        }
        else if (char2 >= 'A' && char2 <= 'F') {
            value |= char2 - 'A' + 10;
        }
        else {
			printf("[%s] trace 333\n",__FUNCTION__);
            free(out);
            return NULL;
        }
 
        data++;
        *(out + i++) = value;
    }
    *(out + i) = '\0';
 
    if (outlen != NULL) {
        *outlen = i;
    }
 	printf("[%s] trace 444\n",__FUNCTION__);
    return out;
}


char * strTohex(char *string){
	char *ch;
	char *hexstr = (char *)malloc( 2 * strlen(string) );
	
	for(ch = string; *ch != '\0'; ++ch){
		sprintf(hexstr,"%s%02x",hexstr,*ch);
		printf("the code is %c\n",*ch);
	}
	
	return hexstr;

}

int getSubKeys(char * keysrc, char key[3][8]){

	char *p = NULL;
	int i  = 0;
	printf("[%s] trace 111\n",__FUNCTION__);
	for( p = keysrc ; *p != '\0' ;p += 8 ){
		
		memcpy(key[i],p,8);

		key[i][8]='\0';

		printf("subkey [%d] is [%s]\n",i,key[i]);

		i++;
	}

	printf("key[1] = [%s]\n",key[1]);
	printf("[%s] trace 222\n",__FUNCTION__);
	return 0;

}

int des3_cbc_encryption(char * source_data, char * key, char *encrypted_data){	
;
}

int des3_cbc_decryption(char * source_data, char * key, char *unencrypted_data){
;
}

int des3_ebc_encryption(char * source_data, char * key, char *encrypted_data){

	/*deal with the keys*/
	char subkey[3][8] = {{0}};


	unsigned char *ptr = NULL;
	unsigned block[8] = {0};
	int len  = 0;
	int nlen = 0;
	char *data_hex = (char *)malloc( 2 * strlen(source_data) );
	unsigned char data_src[64] = {0};
	unsigned char data_out[64] = {0};
	char ch = '\0';

	
	getSubKeys(key,subkey);
	printf("the subkey[0]=[%s]\n",subkey[0]);
	printf("the subkey[1]=[%s]\n",subkey[1]);
	printf("the subkey[2]=[%s]\n",subkey[2]);

	char key1[16] = {0};
	char key2[16] = {0};
	char key3[16] = {0};

	ptr = strTohex(subkey[0]);
	memcpy( key1, ptr, sizeof(key1) );
	printf("ptr = %s\n",ptr);
	free(ptr);
	
	ptr = strTohex(subkey[1]);
	memcpy( key2, ptr, sizeof(key2) );
	free(ptr);

	ptr = strTohex(subkey[2]);
	memcpy( key3, ptr, sizeof(key3) );
	free(ptr);
	

	printf("key1=[%s]\n",key1);
	printf("key2=[%s]\n",key2);
	printf("key3=[%s]\n",key3);


	DES_key_schedule skey1,skey2,skey3;

	/*设置密码表*/
	ptr = hex2bin(key1, strlen(key1), &nlen);
	memcpy( block, ptr, sizeof(block) );
	free(ptr);
	DES_set_key_unchecked( (C_Block *)block, &skey1 );

	ptr = hex2bin(key2, strlen(key2), &nlen);
	memcpy( block, ptr, sizeof(block) );
	free(ptr);
	DES_set_key_unchecked( (C_Block *)block, &skey2 );

	ptr = hex2bin(key3, strlen(key3), &nlen);
	memcpy( block, ptr, sizeof(block) );
	free(ptr);
	DES_set_key_unchecked( (C_Block *)block, &skey3 );

	data_hex = strTohex(source_data);/*在转化成二进制数据前，需要将普通字符串转化成16进制字符串*/
	ptr = hex2bin(data_hex, strlen(data_hex), &nlen);
	memcpy(data_src, ptr, nlen);
	free(ptr);

	/*数据补全操作*/
	len = (nlen / 8 + ( nlen % 8 ? 1:0 )) * 8;
	ch = 8 - nlen % 8;
	memset(data_src + nlen, ch, (8 - nlen % 8) % 8);
		
	/*加密数据操作*/
	int i  = 0;
	printf("加密前的数据：");
	for( i = 0; i < len; i++ ){
		printf( "%02x", *( data_src + i ));
	}
	printf("\n");
	
	for( i = 0; i < len; i += 8 ){
		DES_ecb3_encrypt( (C_Block *)(data_src + i), (C_Block *)(data_out + i), &skey1, 
						&skey2, &skey3, DES_ENCRYPT);
	}
	
	printf("加密后的数据：");
	for( i = 0; i < len; i += 8 ){
		printf("%02x" , *(data_out + i));
	}
	printf("\n");

}

int des3_ebc_decryption(char * source_data, char * key, char *unencrypted_data){

}



























