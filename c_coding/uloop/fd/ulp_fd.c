#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <libubox/usock.h>
#include <libubox/uloop.h>

//static void 
static void recv_string(struct uloop_fd *u, unsigned int events){
	char buf[1024] = {0};
	if( events & ULOOP_READ){
		if( recv( u->fd, buf, 1024, 0) > 0){
			printf("recv_buf:%s\n", buf);
			send(u->fd, "helloworld from server", strlen("helloworld from server"), 0);
		}
	}

}

static void read_std(struct uloop_fd *u, unsigned int events){

	char buf[1024] = {0};
	if(events & ULOOP_READ){
		if( read(u->fd,buf,1024) > 0){
			printf("read_std:%s\n",buf);
		}

	}

}


int main(){

	struct sockaddr_in cli_addr;
	socklen_t len = sizeof(struct sockaddr);
	int type = USOCK_TCP |USOCK_SERVER |USOCK_NOCLOEXEC |USOCK_IPV4ONLY;
	const char *host = "CarRadio";
	const char *service = "8000";
	//char recv_buf[1024] = {0};
	int connect_fd, u_fd = usock(type, host, service);
	if( u_fd < 0){
		perror("usock");
		return -1;
	}

	connect_fd = accept(u_fd, (struct sockaddr *)(&cli_addr), &len);
	if(connect_fd < 0){
		perror("accept");
		return -1;

	}
	struct uloop_fd fd[2] = {
		{
			.cb = recv_string,
			.fd = connect_fd,
			.registered = false,
			.flags = ULOOP_READ,
		},
		{
			.cb = read_std,
			.fd = STDIN_FILENO,
			.registered = false,
			.flags = ULOOP_READ,
		}

	};

	uloop_init();
	/*add uloop_fd*/
	uloop_fd_add(&fd[0], ULOOP_READ);	
	uloop_fd_add(&fd[1], ULOOP_READ);
	uloop_run();

	uloop_fd_delete(&fd[0]);
	uloop_done();


	return 0;

}
