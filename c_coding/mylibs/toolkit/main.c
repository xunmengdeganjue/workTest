#include <stdio.h>
#include <stdlib.h>
#include "toolkit.h"

void test_do_cmd_and_tet_result(){
	char cmdline[128] = {0};
	char buf[128] = {0};

	sprintf(cmdline,"%s","echo hello");
	do_cmd_and_get_result(cmdline,buf,sizeof(buf));
	printf("comd result [%s]\n",buf);

}

int main(char argc, char **argv){

	test_do_cmd_and_tet_result();

}
