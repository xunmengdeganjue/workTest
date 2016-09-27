#include<stdio.h>
#include<string.h>


main(){
	char *line="TCP:16883:BitSpirit - Powered by LANSPIRIT.NET!";
	char protocol[128] = {0};
	char port[128] = {0};
	char name[128] = {0};

	sscanf(line,"%[^:]:%[^:]:%[^\n]",protocol,port,name);
	printf("the protocol is %s\n",protocol);
	printf("the port is %s\n",port);
	printf("the name is %s\n",name);




}
