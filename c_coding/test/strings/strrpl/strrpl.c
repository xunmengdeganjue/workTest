#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//************************************
// Method: strrpl
// FullName: strrpl
// Access: public 
// Returns: void
// Qualifier: 字符串替换函数,能替换所有的要替换的字符串,被替换的字符串和替换的字符串不一定一样长.
// Parameter: char * pDstOut,输出字符串,要保证足够的空间可以存储替换后的字符串.
// Parameter: char * pSrcIn,输入字符串.
// Parameter: char * pSrcRpl,被替换的字符串.
// Parameter: char * pDstRpl,替换后的字符串.
// 注意:以上的字符串均要以 '\0 '结尾.
//************************************

void strrpl(char* pDstOut, char* pSrcIn, const char* pSrcRpl, const char* pDstRpl)
{ 
	char* pi = pSrcIn; 
	char* po = pDstOut; 

	int nSrcRplLen = strlen(pSrcRpl); 
	int nDstRplLen = strlen(pDstRpl); 

	char *p = NULL; 
	int nLen = 0; 

	do {
		// 找到下一个替换点
		p = strstr(pi, pSrcRpl); 

		if(p != NULL) 
		{ 
			// 拷贝上一个替换点和下一个替换点中间的字符串
			nLen = p - pi; 
			memcpy(po, pi, nLen);

			// 拷贝需要替换的字符串
			memcpy(po + nLen, pDstRpl, nDstRplLen); 
		} else { 
			strcpy(po, pi); 

			// 如果没有需要拷贝的字符串,说明循环应该结束
			break;
		} 

		pi = p + nSrcRplLen; 
		po = po + nLen + nDstRplLen; 

	} while (p != NULL); 
}

int main(int argc, char ** argv){

	char src_strings[1024] = {0};
	char ret_strings[1024] = {0};
	char str_dest[128] = {0};
	char str_new[128] = {0};
	
	if(argc == 4){
		strcpy(src_strings,argv[1]);
		strcpy(str_dest,argv[2]);
		strcpy(str_new,argv[3]);
		strrpl(ret_strings,src_strings,str_dest,str_new);
		
		printf("The new strings is %s\n",ret_strings);
		
	}else{
		printf("USAGE:\n\t");
		
	}

	return 0;

}
