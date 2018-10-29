#include <stdio.h>

/*
名字：binary_to_ascii
功能：将一个二进制的整数转化成可打印的字符形式。

*/
void binary_to_ascii(unsigned int value){
	unsigned int quotient;
	quotient = value / 10;
	if(quotient != 0){
		binary_to_ascii(quotient);
	}
	//printf("%c\n",value % 10 +'0');
	//printf("%d\n",value % 10 );
	putchar( value % 10 +'0');
}

int main(int argc,char**argv){
	int num=4276;
	
	binary_to_ascii((unsigned int )num);	
	return 0;

}
