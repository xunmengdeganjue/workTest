#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp = NULL;
	int pid = 2225;
	int ret  = 0;
	char pidnumber[16] = {0};
	
	
	if((fp = fopen("/proc/csahunter","w"))){
		printf("open the file successfully!\n");
		sprintf(pidnumber,"%d",pid);
		ret = fwrite(pidnumber,strlen(pidnumber),1,fp);
		if(ret==0){
			printf("data write error!\n");
		}else{
			printf("data write successfully!\n");
			
		}
		
	}else{
		printf("open the file failed!\n");
	} 
	
	
	
	fclose(fp);
	return 0;
}         
