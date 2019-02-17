#include <stdio.h>
#include <string.h>

//#define max(a,b) ((a) >= (b) ? (a) : (b))
#define max(a,b) ({\
					typeof(a) _a = a;\
					typeof(b) _b = b;\
					_a > _b ? _a:_b;\
					}\
					)
/*
	1) use the domain name to set the default value of the array.
	2) use the '...' to present the range of the number.
*/
int test(void)
{
	
	int number[100] = {[1 ... 10] = 2,[30 ... 40 ] = 8};
	for(int i = 0;i<100;i++){
		
		switch (i){
			case 1 ... 10:
				printf("\033[32mnumber[%d] = %d\033[0m\n",i,number[i]);
				break;
			case 11 ... 20:
				printf("\033[31mnumber[%d] = %d\033[0m\n",i,number[i]);
				break;
			case 21 ... 29:
				printf("\033[32mnumber[%d] = %d\033[0m\n",i,number[i]);
				break;
			case 30 ... 40:
				printf("\033[33mnumber[%d] = %d\033[0m\n",i,number[i]);
				break;
			default:
				printf("number[%d] = %d\n",i,number[i]);
				break;
		}
		
		
	}
	printf("a = 7,b=8,max(7,8) = %d\n",max(7,8));
	return  0;
}

/*
*/
#define SWAP(a,b)	\
do {\
	typeof(a) __temp = (a);	\
	(a) = (b);	\
	(b) = __temp;	\
}while(0)

void print_num(int count, ...){
	int *args ;
	args = &count + 1;

	for(int i = 0;i <count ;i++){
		printf("*args =  %d\n",*args);
		args++;
	
	}


}


int main(int argc, char ** argv){
	
	test();
	int a=10;
	int b=20;
	printf("%d %d\n",a,b);
	SWAP(a,b);
	printf("swap result :%d %d\n",a,b);

	printf("test the parametric unknown function\n");
	print_num(5,1,2,3,4,5);
	
	


	return 0;

}

