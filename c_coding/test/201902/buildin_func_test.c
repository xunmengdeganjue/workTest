#include <stdio.h>
#include <string.h>
/*
__builtinreturnaddress(LEVEL)
这个函数用来返回当前函数或调用者的返回地址。函数的参
数 LEVEl 表示函数调用链中的不同层次的函数，各个值代
表的意义如下。

0：返回当前函数的返回地址；
1：返回当前函数调用者的返回地址；
2：返回当前函数调用者的调用者的返回地址；

*/


void f(void)
{
        int *p;
        p = __builtin_return_address(0);
        printf("f    return address: %p\n",p);
        p = __builtin_return_address(1);;
        printf("func return address: %p\n",p);
        p = __builtin_return_address(2);;
        printf("main return address: %p\n",p);
        printf("\n");
}
void func(void)
{
        int *p;
        p = __builtin_return_address(0);
        printf("func return address: %p\n",p);
        p = __builtin_return_address(1);;
        printf("main return address: %p\n",p);
        printf("\n");
        f();
}

int main(void)
{
        int *p;
        p = __builtin_return_address(0);
        printf("main return address: %p\n",p);
        printf("\n"); 
        func();
        printf("goodbye!\n");
        
		char ipt = 99;
		if( !!(ipt) ){
			printf(" TRUE: %d\n",ipt);
			
		}else{
			printf(" FALSE: %d\n",ipt);
			
		}
		
		return 0;
		
		
		
		
}
