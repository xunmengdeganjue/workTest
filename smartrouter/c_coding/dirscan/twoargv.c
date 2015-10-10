#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
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
	}
	chdir("..");
	closedir(dp);
	return 0;
}


int main()
{
	char mnt_subs[100][128]={0};
	char disks[100][128]={0};
	char subdirs[100][128]={0};
	int i = 0;
	
	char dest_dir[128] = {"/mnt"};
	getsubdir(dest_dir,0,mnt_subs);//get the subdirs of the /mnt ,mnt_subs is the container
	/*get the disk name*/
	for(i = 0;i<100;i++){	
		if(mnt_subs[i][0] != 0){
			printf("hello\n");
			if(strstr(mnt_subs[i],"sda")){
				printf("hello2\n");
				printf("\t%s\n",mnt_subs[i]);
				
			}
			if(strstr(mnt_subs[i],"sdb")){
				printf("hello3\n");
				printf("\t%s\n",mnt_subs[i]);
				
			}
		}
	}
	
}
