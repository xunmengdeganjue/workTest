#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define ATTACH_FILE "./attach_device"

int main(int argc,char **argv){

	char linebuffer[512]={0};
	FILE *fp_attach_device;
	int ch= 0;
	fp_attach_device = fopen(ATTACH_FILE,"r");
	/*first judge whether the dest file is empty */
	if(NULL != fp_attach_device) {
		printf("The %s is existing!\n",ATTACH_FILE);
		ch = fgetc(fp_attach_device);
		if(ch != EOF){
			/*reset the location pointer to the head of the file, or the fgets following will get 
			wrong result!*/
			fseek(fp_attach_device,-1,SEEK_CUR);
			printf("The attach_device contains some information!goto netscan!\n");
			goto netscan;
		 }
	}	 
	
netscan:
	memset(linebuffer,0x00,sizeof(linebuffer));
	while(fgets(linebuffer,512,fp_attach_device)){
		printf("the linebuffer is %s\n",linebuffer);	

	}

	return 0;
}
