#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char *ret=(char*)malloc(125);
	//sprintf(ret,"%d",1);
	sprintf(ret,"%s","1aaaaa;aaaaaa");
	printf("the result of the ret is %s\n",ret);
	return 0;

}
