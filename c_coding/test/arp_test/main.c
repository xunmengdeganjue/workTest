#include <stdio.h>
#include <libubox/uloop.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char **argv){
    
    uloop_init();
    /* enter loop */
    uloop_run();
    /* exit loop */
    uloop_done();
    
    return 0;
}
