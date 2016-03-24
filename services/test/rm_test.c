#include <stdio.h>
#include <string.h>
int main(){

	char cmdline[256]={0};

	char folder[128]={"hello nihao"};
	sprintf(cmdline,"rm -rf ./\"%s\"",folder);
	system(cmdline);
	return 0;

}
