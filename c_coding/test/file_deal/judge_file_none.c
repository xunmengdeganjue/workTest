#include <stdio.h>
#include <string.h>

#define ATTACH_FILE "./attach_device"

int main(){

	FILE *fp_attach_device;
	int ch = 0;
	fp_attach_device = fopen(ATTACH_FILE, "r");
	
	if(NULL != fp_attach_device) {
		ch=fgetc(fp_attach_device);
		if(ch != EOF){
			printf("the getchar is %d\n",ch);		
			printf("The file %s is not none!\n",ATTACH_FILE);
		}else{
			printf("The attach_file has no content!\n");
		}
	
	}else{
		printf("There is no file!\n");
	}

	return 0;

}
