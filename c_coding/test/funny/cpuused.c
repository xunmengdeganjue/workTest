#include <stdio.h>


int main(void){

	int i ;

	while(1){
		i++;
		sleep(1);
		if(i>=60)
			i = 0;
	}

	return 0;
}
