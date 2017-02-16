#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>

#define TEST_FILE "./csacca.log"
#define FILE_MAX_SIZE 1024*1


int getfilesize(char *filename)
{
    struct stat statbuf;
    stat(filename,&statbuf);
    int size=statbuf.st_size;

    return size;
}

int dump_last_content(char *filename){
	FILE *src_fp,*tmp_fp;
	char *temp_filename = "./csacca_tmp.log";
	char buffer[256] = {0};
	
	if(src_fp=fopen(filename,"r")){
		fseek(src_fp,-1000L,SEEK_END);
		if((tmp_fp=fopen(temp_filename,"w"))){
			while(fgets(buffer,256,src_fp)){
				fwrite(buffer,strlen(buffer),1,tmp_fp);
			}
			fclose(tmp_fp);
		}		
		fclose(src_fp);
	}else{
		printf("file open failed!\n");
		return -1;
	}
		
	rename(temp_filename,filename);
	return 0;
}

int main(){
	
	int filesize = 0;

	filesize = getfilesize(TEST_FILE);
	printf("file size is %d\n",filesize);
	if(filesize >= FILE_MAX_SIZE ){
		printf("SIZE TOO HUGE!\n");
		dump_last_content(TEST_FILE);
	}else{
		printf("SIZE IS NORMAL!\n");
	}
	return 0;
}

