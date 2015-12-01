#include<stdio.h>
#include <sys/types.h>

int main(){
	long long int c=0x7FFFFFFFFFFFFFFF;
	off_t b = 0x7FFFFFFFFFFFFFFF;
	long int a = 0x7fffffff;
	printf("the long int a is %ld \n",a);
	printf("the off_t b is %ld\n",b);
	printf("the long long int c is %lld\n",c);



	return 0;

}
