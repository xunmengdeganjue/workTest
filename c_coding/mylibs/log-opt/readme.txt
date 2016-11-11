usage:


#include "logopt.h"

main{

	//definetion of the local varionment.
	//should init the log module at first.
	logopt_log_init();
	
	
	
	......
	
	logopt_dbg("show some message!\n");


	logopt_trace_line();
......


}

