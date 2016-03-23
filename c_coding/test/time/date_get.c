/*
*get the current time of the system.
*/
#include<stdio.h>
#include<time.h> //for time_t and asctime

int main(){
	time_t now;  
	struct tm *timenow;
	char strtemp[255]; 
	time(&now); 
	timenow = localtime(&now);  
	printf("Current time is: %s /n", asctime(timenow));
}
