#include <stdio.h>
#include <stdlib.h>

#include "toolkit.h"

int main(char argc, char **argv){

	char cmdline[128] = {0};
	char buf[128] = {0};

	sprintf(cmdline,"%s","echo hello");
	do_cmd_and_get_result(cmdline,buf,sizeof(buf));
	printf("comd result [%s]\n",buf);


}
