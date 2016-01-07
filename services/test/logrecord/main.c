/*
	this file is just a test of the daemon_log system.

*/
#include "daemon_log.h"
#include "log.h"

/** cgi opt log pointer */
t_log_p cgi_log;

int main(){
	
	printf("hello how are you?\n");
	
	logtest();
	
	printf("reach the end point!\n");
	//cgi_trace_line();
	
	return 0;

}


