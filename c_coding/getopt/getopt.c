/*
THIS PROGRAM IS TO SHOW THE FUNCTION OF THE "getopt"
*/
#include <stdio.h>
#include<unistd.h>

int main(int argc,char **argv)
{
 int c ;
 
 while((c = getopt(argc,argv,"S::N:T:P:l:c:d:")) != -1){ /*S::means that the parameter must follow the "-S" option*/
  switch(c){
   case 'S':
    printf("You selected the S option!\n");
    printf("the parameter is [%d]\n",(optarg?atoi(optarg):-1));
    break;
   case 'N':
    printf("You selected the N option!\n");
    printf("the parameter is [%s]\n",optarg);
    break;
   case 'T':
    printf("You selected the T option!\n");
    printf("the parameter is [%s]\n",optarg);
    break;
   case 'P':
    printf("You selected the P option!\n");
    printf("the parameter is [%s]\n",optarg);
    break;
   case 'l':
    printf("You selected the l option!\n");
    printf("the parameter is [%s]\n",optarg);
    break;
  }
 }
 
 printf("The first parameter without the option is %s\n",argv[optind]); //the optind direct the first parameter that without the option. 
 
 
 
 return (0);
 
}

