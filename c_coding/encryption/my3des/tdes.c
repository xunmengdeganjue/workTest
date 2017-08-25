
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/des.h>
#include <openssl/rand.h>
 
#include "hex.h"
 
/************************************************************************
 * 3DES-CBC 加密方式
 * 8字节密钥，加密内容8位补齐，补齐方式为：PKCS7。
 *
 * file: tdes.c
 * gcc -Wall -O2 -o tdes.c tdes.c hex.c -lcrypto
 *
 * author: tonglulin@gmail.com by www.qmailer.net
 ************************************************************************/
 
unsigned int des3_cbc_encrypt(void)
{

	int i = 0;
	int len = 0;
	int nlen = 0;

	char ch = '\0';
//#if 0
	char *key1 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
	char *key2 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
	char *key3 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
//#endif 

	
	char *data = "12345678912121212121121212121221";  /* 原始明文, 十六进制字符串 */
	unsigned char src[64] = {0};
	unsigned char out[64] = {0};
	unsigned char tmp[64] = {0};

	unsigned char *ptr  = NULL;
	unsigned char block[8] = {0};
	DES_key_schedule ks1, ks2, ks3;
	DES_cblock ivec;
	DES_cblock ivsetup = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

	/* 设置密码表 */
	ptr = hex2bin(key1, strlen(key1), &nlen);
	memcpy(block, ptr, sizeof(block));
	free(ptr);
	DES_set_key_unchecked((C_Block *)block, &ks1);

	ptr = hex2bin(key2, strlen(key2), &nlen);
	memcpy(block, ptr, sizeof(block));
	free(ptr);
	DES_set_key_unchecked((C_Block *)block, &ks2);

	ptr = hex2bin(key3, strlen(key3), &nlen);
	memcpy(block, ptr, sizeof(block));
	free(ptr);
	DES_set_key_unchecked((C_Block *)block, &ks3);

	ptr = hex2bin(data, strlen(data), &nlen);
	memcpy(src, ptr, nlen);
	free(ptr);

	len = (nlen / 8 + (nlen % 8 ? 1: 0)) * 8;

	ch = 8 - nlen % 8;
	memset(src + nlen, ch, (8 - nlen % 8) % 8);

	printf("加密前数据: ");
	for (i = 0; i < len; i++) {
	   printf("%02X", *(src + i));
	}
	printf("\n");

	memcpy(ivec, ivsetup, sizeof(ivsetup));
	/* 按照8字节数据进行加密，length=8 */
	for (i = 0; i < len; i += 8) {
	   DES_ede3_cbc_encrypt(src + i, out + i, 8, &ks1, &ks2, &ks3, &ivec, DES_ENCRYPT);
	}

	printf("加密后数据: ");
	for (i = 0; i < len; i++) {
	   printf("%02X" , *(out + i));
	}
	printf("\n");

	memcpy(ivec, ivsetup, sizeof(ivsetup));
	/* 按照8字节数据进行解密，length=8 */
	for (i = 0; i < len; i += 8) {
	   DES_ede3_cbc_encrypt(out + i, tmp + i, 8, &ks1, &ks2, &ks3, &ivec, DES_DECRYPT);
	}

	printf("解密后数据: ");
	for (i = 0; i < len; i++) {
	   printf("%02X", *(tmp + i));
	}
	printf("\n");

	return 0;

}

/************************************************************************
 * 3DES-ECB加密方式
 * 8字节密钥，加密内容8位补齐，补齐方式为：PKCS7。
 *
 * file: tdes.c
 * gcc -Wall -O2 -o tdes.c tdes.c hex.c -lcrypto
 *
 * author: tonglulin@gmail.com by www.qmailer.net
 ************************************************************************/
int des3_ebc_encrypt_new(){
	int i = 0;
	int len = 0;
	int nlen = 0;

	char ch = '\0';
	char *key1 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
	char *key2 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
	char *key3 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
	//char *data = "68656c6c6f686f77617265796f75";  /* 原始明文, 十六进制字符串 */
	char *data_string = "helloworld!";
	char *data = (char *)malloc(strlen(data_string)+1);

	strtohex(data_string,data);
	
	printf("\nthe data_string[%s] conver to hex[%x]\n",data_string,data);
	unsigned char src[64] = {0};
	unsigned char out[64] = {0};
	unsigned char tmp[64] = {0};

	unsigned char *ptr	= NULL;
	unsigned char block[8] = {0};
	DES_key_schedule ks1, ks2, ks3;

	/* 设置密码表 */
	ptr = hex2bin(key1, strlen(key1), &nlen);
	memcpy(block, ptr, sizeof(block));
	free(ptr);
	DES_set_key_unchecked((C_Block *)block, &ks1);

	ptr = hex2bin(key2, strlen(key2), &nlen);
	memcpy(block, ptr, sizeof(block));
	free(ptr);
	DES_set_key_unchecked((C_Block *)block, &ks2);

	ptr = hex2bin(key3, strlen(key3), &nlen);
	memcpy(block, ptr, sizeof(block));
	free(ptr);
	DES_set_key_unchecked((C_Block *)block, &ks3);

	ptr = hex2bin(data, strlen(data), &nlen);
	memcpy(src, ptr, nlen);
	free(ptr);

	len = (nlen / 8 + (nlen % 8 ? 1: 0)) * 8;

	ch = 8 - nlen % 8;
	memset(src + nlen, ch, (8 - nlen % 8) % 8);

	printf("加密前数据: ");
	for (i = 0; i < len; i++) {
		printf("%02X", *(src + i));
	}
	printf("\n");

	for (i = 0; i < len; i += 8) {
		DES_ecb3_encrypt((C_Block *)(src + i), (C_Block *)(out + i), &ks1, &
							ks2, &ks3, DES_ENCRYPT);
	}

	printf("加密后数据: ");
	for (i = 0; i < len; i++) {
		printf("%02X" , *(out + i));
	}
	printf("\n");

	for (i = 0; i < len; i += 8) {
		DES_ecb3_encrypt((C_Block *)(out + i), (C_Block *)(tmp + i), &ks1, &
								ks2, &ks3, DES_DECRYPT);
	}

	printf("解密后数据: ");
	for (i = 0; i < len; i++) {
		printf("%02X", *(tmp + i));
	}
	printf("\n");

	return 0;



}


/************************************************************************ 
** 本例采用： 
** 3des-ecb加密方式； 
** 24位密钥，不足24位的右补0x00； 
** 加密内容8位补齐，补齐方式为：少1位补一个0x01,少2位补两个0x02,... 
** 本身已8位对齐的，后面补八个0x08。 
************************************************************************/
int des3_ebc_encrypt(){
	int docontinue = 1; 
	char *data = "hello world!"; /* 明文 */ 
	int data_len; 
	int data_rest; 
	unsigned char ch; 
	unsigned char *src = NULL; /* 补齐后的明文 */ 
	unsigned char *dst = NULL; /* 解密后的明文 */ 
	unsigned char *est = NULL; /* 加密后的明文 */ 
	int len; 
	unsigned char tmp[8]; 
	unsigned char in[8]; 
	unsigned char out[8]; 
	char *k = "01234567899876543210"; /* 原始密钥 */ 
	int key_len; 
#define LEN_OF_KEY 24

	unsigned char key[LEN_OF_KEY]; /* 补齐后的密钥 */ 
	unsigned char block_key[9]; 
	DES_key_schedule ks,ks2,ks3; 
	/* 构造补齐后的密钥 */ 
	key_len = strlen(k); 
	memcpy(key, k, key_len); 
	memset(key + key_len, 0x00, LEN_OF_KEY - key_len);
	
	/* 分析补齐明文所需空间及补齐填充数据 */ 
	data_len = strlen(data); 
	data_rest = data_len % 8; 
	len = data_len + (8 - data_rest); 
	ch = 8 - data_rest; 
	src = (unsigned char *)malloc(len); 
	dst = (unsigned char *)malloc(len); 
	est = (unsigned char *)malloc(len);

	if (NULL == src || NULL == dst) 
	{ 
		docontinue = 0; 
	} 
	if (docontinue) 
	{ 
		int count; 
		int i; 
		/* 构造补齐后的加密内容 */ 
		memset(src, 0, len); 
		memcpy(src, data, data_len); 
		memset(src + data_len, ch, 8 - data_rest); 
		/* 密钥置换 */ 
		memset(block_key, 0, sizeof(block_key)); 
		memcpy(block_key, key + 0, 8); 
		DES_set_key_unchecked((const_DES_cblock*)block_key, &ks); 
		memcpy(block_key, key + 8, 8); 
		DES_set_key_unchecked((const_DES_cblock*)block_key, &ks2); 
		memcpy(block_key, key + 16, 8); 
		DES_set_key_unchecked((const_DES_cblock*)block_key, &ks3); 
		printf("before encrypt:\n"); 
		for (i = 0; i < len; i++) 
		{ 
			printf("%.2X", *(src + i)); 
		} 
		printf("\n"); 
		/* 循环加密/解密，每8字节一次 */ 
		count = len / 8; 
		for (i = 0; i < count; i++) 
		{ 
			memset(tmp, 0, 8); 
			memset(in, 0, 8); 
			memset(out, 0, 8); 
			memcpy(tmp, src + 8 * i, 8); 
			
			/* 加密 */ 
			DES_ecb3_encrypt((const_DES_cblock*)tmp, (DES_cblock*)in, &ks, &ks2, &ks3, DES_ENCRYPT); 
			/* 将加密后的内容拷贝到加密后的明文*/
			memcpy(est + 8 * i, in, 8);
			
			/* 解密 */ 
			DES_ecb3_encrypt((const_DES_cblock*)in, (DES_cblock*)out, &ks, &ks2, &ks3, DES_DECRYPT);
			/* 将解密的内容拷贝到解密后的明文 */ 
			memcpy(dst + 8 * i, out, 8); 
		
	} 
		
	printf("after encrypt :\n");
	for( i = 0;i <len;i++){
		printf("%.2X",*(est +i));
	}
	
	printf("\nafter decrypt :\n"); 
	for (i = 0; i < len; i++) 
	{ 
		printf("%.2X", *(dst + i)); 
	} 
	printf("\n"); 
	
	} 
	if (NULL != src) 
	{ 
		free(src);
		src = NULL; 
	} 
	if (NULL != dst) 
	{ 
		free(dst); 
		dst = NULL; 
	} 
	
	return 0; 

}

int main(int argc, char *argv[])
{

	printf("\033[32m[****************Test of the 3DES encryption******************]\033[0m\n");
	/*cbc加密方式，经测试功能ok！*/
	//测试站点：http://tripledes.online-domain-tools.com/
	//参考：http://www.qmailer.net/archives/208.html
	des3_cbc_encrypt();

	/*ebc加密方式，经测试功能ok！*/
	//测试站点：http://tripledes.online-domain-tools.com/
	//参考：http://www.qmailer.net/archives/208.html	
	des3_ebc_encrypt_new();

	
	des3_ebc_encrypt();


    return 0;
}
