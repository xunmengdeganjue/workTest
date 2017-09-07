#include<stdio.h>
#include<string.h>

int asf_printf(){

	printf("\033[31mFUNC[%s]:hello\033[0m\n",__FUNCTION__);

}

#ifndef DEBUG_TURNOFF

#define printf asf_printf

#endif
int main(){
	
#ifndef DEBUG_TURNOFF
	printf();
#endif
	printf("hellohow are you?\n");

#ifdef DEBUG_TURNOFF
	printf("The debug_turnoff has been defined\n");

#endif




}
