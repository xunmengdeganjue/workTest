#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* stringToBinary(char* s) {
	if(s == NULL) return 0; /* no input string */
	size_t len = strlen(s);
	char *binary = malloc(len*8 + 1); // each char is one byte (8 bits) and + 1 at the end for null terminator
	binary[0] = '\0';
    	size_t i = 0;
	int j = 0;
	for(i = 0; i < len; ++i) {
        char ch = s[i];
        for(j = 7; j >= 0; --j){
            if(ch & (1 << j)) {
                strcat(binary,"1");
            } else {
                strcat(binary,"0");
            }
        }
    }
    return binary;
}

int main(int argc,char**argv){
	
	char *buffer = (char *)malloc(strlen(argv[1])*8 + 1);

	buffer = stringToBinary(argv[1]);

	printf("the [%s] convert to binary string [%s]\n",argv[1],buffer);

}
