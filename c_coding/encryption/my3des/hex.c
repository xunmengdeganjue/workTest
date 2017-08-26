#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
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

int strtohex(char *srcstr,char *hexbuf ){

	char *c;
	int i = 0;
	//hexbuf = (char *)malloc(sizeof(char) * (strlen(srcstr) + 1));
	
	printf("Func[%s] the string is [%s]\n",__FUNCTION__,srcstr);
#if 0	
	for(c = srcstr; *c != '\0' ; ++c){

		//sprintf(hexbuf[i],"%x",c);
		sprintf(hexbuf[i],"%x", *c);
		//hexbuf++;
	
		//hexbuf[i] = ()*c;
		//strcpy(hexbuf[i],c);
		i++;
		printf("%x",*c);
	}
#endif
	sprintf(hexbuf,"%x",strtol(srcstr,NULL,16));
	printf("\n");
	return 0;

}
unsigned char *hextostr(){
;



}

#if 0
unsigned char *stringToBin(const char *data, int size, int *outlen){

	int cnt;
	char *outbit = NULL;
	char *char1 = NULL;
	char *char2 = NULL;
	
	int outlen = size;
	
	for(cnt = 0; cnt < size; cnt++){
		*(outbit+cnt) = (data>>cnt)&1;
	}
	return 0;
}

int charToBit64
#endif


