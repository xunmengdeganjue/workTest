#include <stdio.h>
#include <stdint.h> /*for uint8_t*/

typedef uint8_t u8;

int main(int argc,char **argv){

	u8 mac[6];
	mac[0] = 0xaa;
	printf("the mac[0] = %02x\n",mac[0]);
	return 0;



}
