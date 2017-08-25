
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/des.h>
#include <openssl/rand.h>
 
#include "hex.h"
 
/************************************************************************
 * 3DES-ECB加密方式
 * 8字节密钥，加密内容8位补齐，补齐方式为：PKCS7。
 *
 * file: test_des3_ecb.c
 * gcc -Wall -O2 -o test_des3_cbc test_des3_cbc.c hex.c -lcrypto
 *
 * author: tonglulin@gmail.com by www.qmailer.net
 ************************************************************************/
int main(int argc, char *argv[])
{
    int i = 0;
    int len = 0;
    int nlen = 0;
 
    char ch = '\0';
    char *key1 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
    char *key2 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
    char *key3 = "0000000000000000";  /* 原始密钥, 十六进制字符串 */
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
