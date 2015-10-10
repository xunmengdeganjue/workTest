#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

#include "suci.h"

#define UCI 1

/*
Parm:	root_dir ---the desstination directory that to be scaned
		depth    ---the depth of the directory that to be sanned
		dirs 	 ---the container of the sub-dirs of the root_dir
Return: successed 0;failed -1.
*/
int getsubdir(char *root_dir,int depth,char dirs[][128])
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
			if(strcmp(".",entry->d_name) == 0 || strcmp("..",entry->d_name) == 0 )
			{		
				continue;
			}
			//printf("%*s%s/\n",depth,"",entry->d_name);
			strcpy( dirs[i], entry->d_name );
			i++;
		}
		#if 0
		//if the destnation is not the dir.
		else 
			printf("%*s%s\n",depth,"",entry->d_name);
		#endif
	}
	chdir("..");
	closedir(dp);
	return 0;
}


int main(char argc,char **argv)
{
	char dirs[128][128] = {{0}};
	char sub_dirs[128][128] = {{0}};
	char linebuffer[1024] = {0};
	int ret = -1;
		//printf("done.\n");
	int i = 0;
	int j = 0;
	//char *dest_dir = (char *)malloc(128*sizeof(char));
#if UCI	
	for(i = 0;i<10;i++){
		memset(linebuffer,0x00,sizeof(linebuffer));
		sprintf(linebuffer,"devices.@automount[%d].label",i);
		ret = do_uci_get(linebuffer,dirs[i]);
		if(ret){
			break;
		}
	}	
#else
	char dest_dir[128]={"/mnt"};
	getsubdir(dest_dir,0,dirs); //get the /mnt sub dirs such as /mnt/UNTITLED /mnt/UNTITLED(1)
#endif


	

	for(i=0;i<10;i++)
	{
		if( strlen(dirs[i]) != 0 )
		printf("i=%d:%s\n",i,dirs[i]);	
		getsubdir(dirs[i],0,sub_dirs);
		for(j= 0;j < 10;j++)
		{
			if(strlen(sub_dirs[j]) != 0)
			{
				printf("j = %d:%s\n",j,sub_dirs[j]);
			}
			
		}
	}

	return 0;	
}