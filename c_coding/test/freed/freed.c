#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	

	FILE *p_fd;
	FILE *fd;
	char logfile[64]={"/tmp/log.log"};


	char cmdline[128] = {0};
	char buffer[256] = {0};	
	


	sprintf(cmdline,"%s","cat test.txt");
	system(cmdline);
	
	if(p_fd = popen(cmdline,"r") ){
		fread(buffer,1,256,p_fd);
		if(fd = fopen(logfile,"w")){
			fwrite("The analysis data of the 2G\n",1,28,fd);
			fwrite(buffer,1,256,fd);
		//	fclose(fd);		
		}

		pclose(p_fd);
	}
	printf("The content of the p_fd is\n :%s\n",buffer);


	fwrite("The analysis data of the 5G\n",1,29,fd);
	fwrite("hello\n",1,6,fd);
	
	
	fclose(fd);		

}



