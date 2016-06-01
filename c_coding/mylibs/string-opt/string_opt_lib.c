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
