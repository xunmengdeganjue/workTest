/*
 ******************************************************************************
 *
 *    Copyright (C) 2015-2016 by Nick Li. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   ARM9
 *    OS                 :   OpenWRT
 *    Version          :   0.10
 *    Released by Nick Li
 *                      2015.12.31
 *
 *
 *
 *       File Name      : func.c
 *       Create Date  : 2015/12/31
 *       Author         	: Nick Li 
 *       Description    : 
 ******************************************************************************
*/

/****************************************************************************
 *  modify history(TransPlant-1st)                                         								 *
 *  NO.     modify reason              modify date      modify person      						 *
 *<--1-->                      
*****************************************************************************/

#include "func.h"

int exec_cmd(char *cmd, char *val,int size)
{
	FILE *fp;
	int ret = 0;
	
	fp = popen(cmd, "r");
	if(val != NULL){	
		fgets(val,size,fp);
	}
	ret = pclose(fp);

	return ret;
}

char* xasprintf(const char *format, ...)
{
	va_list p;
	int r = 0;
	char *string_ptr;
	va_start(p, format);
	r = vasprintf(&string_ptr, format, p);
	va_end(p);
	if (r < 0){
		exit(1);
	}
	return string_ptr;
}

/* This function reads an entire line from a text file, up to a newline
 * or NUL byte, inclusive.  It returns a malloc'ed char * which
 * must be free'ed by the caller.  If end is NULL '\n' isn't considered
 * end of line.  If end isn't NULL, length of the chunk is stored in it.
 * If lineno is not NULL, *lineno is incremented for each line,
 * and also trailing '\' is recognized as line continuation.
 * Returns NULL if EOF/error. */
char* bb_get_chunk_with_continuation(FILE *file, int *end, int *lineno)
{
	int ch;//change the int to the char 20121216
	int idx = 0;
	char *linebuf = NULL;
	int linebufsz = 0;
	while ((ch = getc(file)) != EOF)
	{
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
	}
	if (end)
		*end = idx;
	if (linebuf) 
	{
		linebuf = realloc(linebuf, idx + 1);
		linebuf[idx] = '\0';
	}
	return linebuf;
}

/* Get line.  Remove trailing \n */
char* xmalloc_fgetline(FILE *file)
{
	int i;
	char *c = bb_get_chunk_with_continuation(file, &i,NULL);
	if (i && c[--i] == '\n')
		c[i] = '\0';
	return c;
}

int data_transmission()
{
	printf("mv the data from the /proc/ip6addr to /tmp/ip6addrs\n");

	struct flock lock;
	struct stat sb;

	FILE *old_data_fp;
	FILE *new_data_fp;
	int old_fd;
	int new_fd;
	char *filename = IPV6CLIENTS;
	char *line = NULL;

	char *fnamesfx; /*the file name surfix*/
	char *sfx_char; /*the surfix char*/
	char *mac_got = (char *)malloc(256*sizeof(char));
	char *ipv6addr_got = (char *)malloc(1024*sizeof(char));
	int ret = 0;
	int i = 0;
	int add_flag = 1;
	

	/*get the original mac and ipv6addr*/
	exec_cmd(GET_MAC,mac_got,18);
	exec_cmd(GET_ADDR,ipv6addr_got,30);
	/*
	printf("\nthe mac_refer is [%s]\n",mac_refer);
	printf("\nthe ipv6addr_refer is [%s]\n",ipv6addr_refer);
	*/

	fnamesfx = xasprintf("%s+", filename);
	
	sfx_char = &fnamesfx[strlen(fnamesfx)-1];/*get the last char of the fnamesfx,which is '+'*/

	old_data_fp = fopen(filename,"r+");
	
	if (!old_data_fp){
		printf("opened the  file %s failed!!!\n",filename);
		ret = -1;
		goto free_mem;
	}
	old_fd = fileno(old_data_fp);//get the fp again because opened the file already	
	
	i = 30;
	do {
		new_fd = open(fnamesfx, O_WRONLY|O_CREAT|O_EXCL, 0600);
		if (new_fd >= 0)
		{		
			//printf("opened the file %s succeed!\n",fnamesfx);
			goto created;			
		}		
		if (errno != EEXIST) 
			break;
		usleep(100000); /* 0.1 sec */
	} while (--i);
	//printf("can't create '%s'", fnamesfx);
	goto close_old_fp;

 created:
	if (fstat(old_fd, &sb) == 0) 
	{
		fchmod(new_fd, sb.st_mode & 0777); /* ignore errors */
		fchown(new_fd, sb.st_uid, sb.st_gid);
	}
	//errno = 0;
	new_data_fp = fdopen(new_fd,"w"); 
	
	/* Backup file is "/tmp/ipv6clients-" */
	*sfx_char = '-';
	/* Delete old backup */
	i = (unlink(fnamesfx) && errno != ENOENT);
	/* Create backup as a hardlink to current */
	if (i || link(filename, fnamesfx))
		printf("warning: can't create backup copy '%s'",fnamesfx);
	*sfx_char = '+';
	
	/* Lock the original file before updating */
	lock.l_type = F_WRLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 0;
	if (fcntl(old_fd, F_SETLK, &lock) < 0)
	{
		printf("warning: can't lock '%s'\n", filename);
		ret = -1;
		goto unlink_new;
	}
	
	while(1){
		
		char *cp;
		
		line = xmalloc_fgetline(old_data_fp);	

		//printf("the line content is [%s]\n",line);
		
		if(!line){
			//printf("the content of the line is null\n");
			break;
		}
		if (strncmp(mac_got, line, strlen(mac_got)) != 0)//if the mac is not included in the line
		{
			fprintf(new_data_fp, "%s\n", line);//copy the content of a line of the oldfile to the new_fp	
			goto next;
		}else{/*the mac is same as the line's mac,then check if the ipv6addr should be updated*/
			cp = line +strlen(mac_got)+1;
			//printf("the cp is [%s]\n",cp);
			if(strcmp(ipv6addr_got,cp)){
				//printf("*******update a client's information to the record file******\n");
				fprintf(new_data_fp,"%s|%s\n",mac_got,ipv6addr_got);
				add_flag = 0;
			}else{/*the ipv6addr_refer is the same as the line's ipv6addr,so keep the old data*/
				//printf("*******keep the information as it used be******\n");
				fprintf(new_data_fp,"%s\n",line);
				add_flag = 0;
			}
		}
next:
		free(line);
		
	}
	//fclose(new_data_fp);//close the new_fp avoid mistakes?

	/*add the new clients information to the /tmp/ip6clients+*/
	if(add_flag){

		//printf("+++++add a new client to the record file++++++\n");
		/*
		if(!(new_data_fp = fopen(fnamesfx,"r+")))
		{
			printf("open file%s to add user failed",fnamesfx);
		}			
		*/
		fseek(new_data_fp,0,SEEK_END);
		
		char *p = xasprintf("%s|%s\n",mac_got,ipv6addr_got);

		fwrite(p,strlen(p),1,new_data_fp);
		
		//fclose(new_data_fp);
		
		free(p);;
	}

	fclose(new_data_fp);
	

	lock.l_type = F_UNLCK;/*set the unlock*/
	fcntl(old_fd, F_SETLK, &lock);/*unlock the old_fd*/

unlink_new:
	if (ret < 0)
		unlink(fnamesfx);
	
close_old_fp:
	fclose(old_data_fp);
	
free_mem:
	
	rename(fnamesfx,filename);	
	free(fnamesfx);
	free(mac_got);
	free(ipv6addr_got);
	
	return ret;
	
}

