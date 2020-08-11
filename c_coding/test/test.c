#include <stdio.h>



int gloable = 0;
int gloable_1 __attribute__((section(".data")));
int main(){
	printf("globale = %d\n",gloable);
	return 0;
}
