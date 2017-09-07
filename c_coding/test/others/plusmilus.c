#include <stdio.h>
#include <string.h>



int main (int argc,char **argv){

	char c[10]={1,2,3,4,5,6,7,8,9,0};
	int i = 5;

	printf("the c[i--] = %d\n",c[i--]);
	i = 5;
	printf("the c[--i] = %d\n",c[--i]);
	


	return 0;


}
