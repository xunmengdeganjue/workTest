
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
 *  File Name    : directory_and_file_opt.c
 *  Create Date  : 2016/06/01 
 *  Author   	 : Nick Li
 *  Description  : 
 *------------------------------------------------------------------------------- 
 */ 

/*
*    Function Name		: getsubdir
*    Create Date        : 2016.06.01
*    Author             : Nick Li
*    Description        : get the sub folders of a root directory.
*    Param  Input     	1: root_dir	---the desstination directory that to be scaned
						2: depth		---the depth of the directory that to be sanned
						3: dirs		---the container of the sub-dirs of the root_dir
*    Return Code  		0: successed
						-1: failed
*    revised History   	:
*/
int getsubdir(char *root_dir,int depth,char dirs[][64])
{
	DIR *dp;
	struct dirent *entry;
	struct stat statbuf;
	int i = 0;
	if((dp = opendir(root_dir)) == NULL )
	{
		fprintf(stderr,"cant open directory: %s\n",root_dir);
		return -1;
	}
	chdir(root_dir);
	while((entry = readdir(dp)) != NULL)
	{
		lstat(entry->d_name,&statbuf);
		if(S_ISDIR(statbuf.st_mode))
		{
			/*found a directory,but ignore . and ..*/
			if(strcmp(".",entry->d_name) == 0 || strcmp("..",entry->d_name) == 0 /*||strncmp(".",entry->d_name,1) == 0 */)
			{
				continue;
			}
			//printf("%*s%s/\n",depth,"",entry->d_name);
			strcpy( dirs[i], entry->d_name );
			i++;
		}
	}
	chdir("..");
	closedir(dp);
	return 0;
}
