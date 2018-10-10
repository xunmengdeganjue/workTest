#include <stdio.h>
#include <libubox/uloop.h>

int main(int argc,char **argv){
    
    uloop_init();
    /* enter loop */
    uloop_run();
    /* exit loop */
    uloop_done();
    
    return 0;
}
