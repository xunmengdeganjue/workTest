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
 *                  2016/06/24. 
 * 
 * 
 *  File Name    : popen-opt.c
 *  Create Date  : 2016/06/24 
 *  Author   	 : Nick Li
 *  Description  : Test the popen().
 *------------------------------------------------------------------------------- 
 */ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* bb_get_chunk_with_continuation(FILE *file, int *end, int *lineno)
{
	int ch;//change the int to the char 20121216
	int idx = 0;
	char *linebuf = NULL;
	int linebufsz = 0;
	while ((ch = getc(file)) != EOF)
	{
		//cgi_trace_line();
		/* grow the line buffer as necessary */
		if (idx >= linebufsz) 
		{
			linebufsz += 256;
			linebuf = realloc(linebuf, linebufsz);
		}
		linebuf[idx++] = (char) ch;
		if (!ch)
			break;
		if (end && ch == '\n')
		{
			if (lineno == NULL)
				break;
			(*lineno)++;
			if (idx < 2 || linebuf[idx-2] != '\\')
				break;
			idx -= 2;
		}
		//cgi_trace_line();
	}
	if (end)
		*end = idx;
	if (linebuf) 
	{
		linebuf = realloc(linebuf, idx + 1);
		linebuf[idx] = '\0';
	}
	//cgi_trace_line();
	return linebuf;
}

/* Get line.  Remove trailing \n */
char* xmalloc_fgetline(FILE *file)
{
	int i;
	//cgi_trace_line();
	char *c = bb_get_chunk_with_continuation(file, &i,NULL);
	if (i && c[--i] == '\n')
		c[i] = '\0';
	//cgi_trace_line();
	return c;
}

int main(int argc, char ** argv)
{
	char ret_list[1024] = {0};
	char cmdline[1024] = {0};
	FILE *fp = 0;
	char *p,*q;
	sprintf(cmdline, "%s",argv[1]);
	
	fp = popen(cmdline,"r");
	if(fp != NULL){
		p = ret_list;
		while(1){
			q = xmalloc_fgetline(fp);
			if(q){
				strcpy(p,q);
				p=p+strlen(q);
			}else{
				break;
			}	
		}
	}
	pclose(fp);
	printf("The result is %s\n",ret_list);
	return 0;
}
