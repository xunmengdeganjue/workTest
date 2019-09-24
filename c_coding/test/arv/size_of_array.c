#include<stdio.h>
#include<string.h>

char param[][32]={
	"ssid",
	"key",
	"encryption"

};

int main(){
	printf("test\n");
	printf("the length of the param=%d\n",(int)sizeof(param)/32);
	int i = 0;
	for(i = 0;i<(int)sizeof(param)/32;i++){

		printf("the number[%d] is [%s]\n",i,param[i]);
	}

	printf("end");
	return 0;

}
