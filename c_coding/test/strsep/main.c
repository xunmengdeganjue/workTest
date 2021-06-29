#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){


    char rule[] = "udp6,tp_dst=53,dl_src=a4:e9:75:48:a3:7f,dl_dst=aa:bb:cc:dd:ee:ff";
    char *sstr = rule;
    char *k = NULL;
    char *v = NULL;
    char *ptr = NULL;
    int i = 0;
    while((ptr = strsep(&sstr, ","))){
		i++;
		printf("[%d] times, ptr=[%s],sstr=[%s]\n",i,ptr,sstr);
        if((k = strsep(&ptr, "=")) && (v = strsep(&ptr, ""))){
			printf("[%d] times, k=[%s],v=[%s]\n",i,k,v);
            if((!strcmp(k, "dl_src")) || (!strcmp(k, "dl_dst")) ){
                printf("k=%s\n", k);
                printf("v=%s\n", v);
            
            }
		}
	}
}
