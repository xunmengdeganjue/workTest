/* 
 *------------------------------------------------------------------------------ 
 * 
 *    Copyright (C) 2015-2016 Nick Li All rights reserved. 
 *    All source codes is distributed under the U-License. 
 * 
 *    CPU:        x86   
 *    RTOS:       
 *    Version:    0.50.00 
 *    Released by Chengdu Nick Li.
 *                  2016/06/01. 
 * 
 * 
 *  File Name    : string_opt_lib.c
 *  Create Date  : 2016/06/01 
 *  Author   	 : Nick Li
 *  Description  : 
 *------------------------------------------------------------------------------- 
 */ 
 
#include "string_opt_lib.h"

/*
*    Function Name    : get_profile_str
*    Create Date      : 2019.08.20
*    Author           : Nick Li
*    Description      : get the parameter from the profile
		profile content:
		-----------------------------------------------------------
			Manufacturer=AAAAAA
			CustomerHWVersion=xxxxxx
			......
			option125Code=01020304
			FirmwareBuildDate=2019-08-20 09:29:54 +0800 e83f8a8
		-----------------------------------------------------------
*    Param  Input     1 :string---the key word that need to search.
					  2 :string---the container that for the result.
					  3 :interger---the size of the container.
					  4 :string---the path of the file.
*    Return Code      : int---0:succeed,-1:failed.
*    revised History  :
*/
int get_profile_str(char *keyname,char *str_return, int size,char *path)
{
	FILE *fp;
	char *str_key= NULL;//,*str_enter= NULL;
	//int buffersize=100;
	char stream[MAXGET_PROFILE_SIZE]={0};
	int totalLength=0;
	char *p = NULL;
	int ret = 0;
	
	fp=fopen(path,"r");
	if(fp==NULL){
		fprintf(stderr,"Can't open %s\n",path);
		return -1;
	}

	memset(str_return, 0, size);
	fseek(fp, 0, SEEK_SET);

	while(fgets(stream, MAXGET_PROFILE_SIZE, fp) != NULL)
	{
		str_key = strstr(stream,keyname);
		if(str_key == NULL || str_key != stream)
		{
			continue;
		}	

		p = strtok(stream,"\r");
		while(p)
		{
			p = strtok(NULL,"\r");
		}

		p = strtok(stream,"\n");
		while(p)
		{
			p = strtok(NULL,"\n");
		}

		totalLength=strlen(stream)-strlen(keyname);
		if(size<totalLength+1){/*total length + '\0' should not less than buffer*/
			fprintf(stderr, "Too small buffer to catch the %s frome get_profile_str_new\n", keyname);
			fclose(fp);
			return -1;
		}
		else if(totalLength<0) {/*can't get a negative length string*/
			fprintf(stderr, "No profile string can get\n");
			fclose(fp);
			return -1;
		}
		else{
			strncpy(str_return, stream+strlen(keyname), totalLength);
			str_return[totalLength]= '\0';
			fclose(fp);
			return strlen(str_return);
		}
		memset(stream, 0, MAXGET_PROFILE_SIZE);
	}
	fclose(fp);
	fprintf(stderr,"File %s content %s is worng\n",path,keyname);
	return -1;
}


/*
*    Function Name    : delstrfromstrs
*    Create Date      : 2015.07.16
*    Author           : Nick Li
*    Description      : Delete the string from the strings
*    Param  Input     1 :string---the sub string that need to be deleted.
					  2:strings ---the strings that need to be deal with.
*    Return Code      : void
*    revised History  :
*/
static void delstrfromstrs(const char *string ,char *strings){
	char *p = NULL;
	char *tmp_strings = (char *)malloc(1024);
	int i  = 0;
	strcpy(tmp_strings,strings);
	while((p=strtok(tmp_strings,","))!=NULL){
		if(strcmp(p,string)!=0){
			if(i ==0){
				sprintf(strings,"%s",p);
			}else{
				sprintf(strings,"%s,%s",strings,p);
			}
		}
		tmp_strings = NULL;
		i++;
	}
}

/*
*Func: 	strrpl
*Dec :	replace an old sub-string of a source string whith a new string,and then 
*		fill the result into the pDstOut.
*Parm:	pDstOut ,contain the result of the string.
*		pSrcIn,the source string to be deal with.
* 		pSrcRpl,the old sub-string to be replaced.
*		pDstRpl,the new-string used to replace the old.
*Ret:	void.
*/
void strrpl(char* pDstOut, char* pSrcIn, const char* pSrcRpl, const char* pDstRpl){ 	
	char* pi = pSrcIn; 	
	char* po = pDstOut; 	
	int nSrcRplLen = strlen(pSrcRpl); 	
	int nDstRplLen = strlen(pDstRpl); 	
	char *p = NULL; 	
	int nLen = 0; 	
	do {		
		p = strstr(pi, pSrcRpl); 		
		if(p != NULL){ 					
			nLen = p - pi; 			
			memcpy(po, pi, nLen);	
			memcpy(po + nLen, pDstRpl, nDstRplLen); 		
		} else { 			
			strcpy(po, pi); 						
			break;		
		} 		
		pi = p + nSrcRplLen; 		
		po = po + nLen + nDstRplLen; 	
		} while (p != NULL); 
}

/*
	To convert a string to uppercase.	

*/

/*
*Func: 	strtoupper
*Dec :	To convert a string to uppercase.	
*Parm:	str,the source string to be deal with.
*Ret:	void.
*/
void strtoupper(char *str){
	cgi_trace_enter();
	int i = 0;
	for(i=0;i<strlen(str);i++){
		str[i]=toupper(str[i]);
	}
	
	if(!strcmp(str,"PPPOE")){
		memset(str,0x00,strlen(str));
		strcpy(str,"PPPoE");
	}
	
	cgi_trace_exit();
}

/*
*Func: 	randomstring
*Dec :	Create a random string consisting of letters and Numbers	
*Parm:	str_gain to contain the string created.
*Ret:	void.
*Need: #include<time.h>
*/
void randomstring(char *str_gain){
	int len,c;
	//len=rand() % 255 + 1;
	len = 24;
	srand((int)time(0));
	printf("\n");
	while(len--){
		switch(rand()%3){
			case 0:
				c='A'+rand()%26;
				break;
			case 1:
				c='a'+rand()%26;
				break;
			case 2:
				c='0'+rand()%10;
				break;
		}
		sprintf(str_gain,"%s%c",str_gain,c);
	}
}

/*
*名字：binary_to_ascii
*功能：将一个二进制的整数转化成可打印的字符形式。
*Parm: unsigned int number.
*Ret : void.
*/
void binary_to_ascii(unsigned int value){
    unsigned int quotient;
    quotient = value / 10;
    if(quotient != 0){
        binary_to_ascii(quotient);
    }
    //printf("%c\n",value % 10 +'0');
    //printf("%d\n",value % 10 );
    putchar( value % 10 +'0');
}

