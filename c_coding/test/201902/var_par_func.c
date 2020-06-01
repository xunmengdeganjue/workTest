#include<stdio.h>
#include<string.h>
#include<stdarg.h>

void print_num1(int count, ...)
{
	int *args;
	int i = 0;
	args = &count + 1;
	printf("addr of the count = %x\n", &count);
	for(i = 0; i < count; i++){
		printf("*args = %d\n", *args);
		printf("args[%d] = %x\n",i,args);
		args ++;
	}

}

void print_num2(int count, ...)
{
	char *args;
	int i = 0;
	args = (char *)&count + 4;
	printf("addr of the count = %x\n", &count);
	for(i = 0; i < count; i++){
		printf("*args = %d\n", *(int *)args);
		printf("args[%d] = %x\n",i,args);
		args += 4;
	}
}

void __attribute__((format(printf,1,2))) my_printf(char *fmt,...)
{
    va_list args;
    va_start(args,fmt);
    vprintf(fmt,args);
    va_end(args);
}

int main(void){
	printf("\ntest the print_num1\n");
	print_num1(5,1,2,3,4,5);
	
	printf("\ntest the print_num2\n");
	print_num2(5,1,2,3,4,5);
	
	int num = 0;
	my_printf("I am litao, I have %d car\n", num);
}
