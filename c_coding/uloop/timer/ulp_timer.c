#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <libubox/usock.h>
#include <libubox/uloop.h>

int g_fd = -1;
void send_sock(struct uloop_timeout *t);

struct uloop_timeout tm = {
	.cb = send_sock,

};
//static void 
void send_sock(struct uloop_timeout *t){
	char buf[1024] = {0};
	send(g_fd, "hello world from client",strlen("hello world from client"), 0);
	if( recv( g_fd, buf, 1024, 0) > 0){
		printf("recv_buf:%s\n", buf);
	}
	/*add uloop_timeout to loop timer*/
	uloop_timeout_set(&tm, 5000);
}

int main(){

	struct sockaddr cli_addr;
	socklen_t len = sizeof(struct sockaddr);
	int type = USOCK_TCP |USOCK_NOCLOEXEC |USOCK_IPV4ONLY;
	const char *host = "CarRadio";
	const char *service = "8000";
	//char recv_buf[1024] = {0};
	g_fd = usock(type, host, service);
	if( g_fd < 0){
		perror("usock");
		return -1;
	}

	uloop_init();
	/*add uloop_timeout*/
	uloop_timeout_set(&tm, 5000);
	uloop_run();

	uloop_done();
	close(g_fd);

	return 0;

}
