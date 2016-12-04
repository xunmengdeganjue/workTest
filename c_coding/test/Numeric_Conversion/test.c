#include<stdio.h>



int main(){
	unsigned int a = 0xffffffff;
	unsigned int b = 47;
	printf("%x-%d = %x\n",a,b,a-b);

	int i = -16;
	printf("the i to hex is %x\n",i);

	return 0;
}
