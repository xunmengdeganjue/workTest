#include "daemon_log.h"

#define LOGFILE "/tmp/daemon.log"

int daemon_log(const char *format, ...){
	FILE * logfd = NULL;
	va_list args;
	char linebuffer[1024] = {0};
	
	sprintf(linebuffer,"%s %s %d %s",__FILE__,__FUNCTION__,__LINE__,format);
	logfd = fopen(LOGFILE,"a+");
	if(logfd == NULL)
	{
		printf("open the log file %s filed!\n",LOGFILE);	
		return -1;
	}
	fprintf(logfd,"%s",linebuffer);
	fflush(logfd);
	fclose(logfd);
	
}


void logtest()
{
	printf("hello how are you!");
	daemon_log("test the logtest fuction!\n");
}
