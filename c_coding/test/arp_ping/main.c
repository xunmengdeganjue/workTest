/*
* arping.c
*
*                This program is free software; you can redistribute it and/or
*                modify it under the terms of the GNU General Public License
*                as published by the Free Software Foundation; either version
*                2 of the License, or (at your option) any later version.
*
* Authors:        Alexey Kuznetsov, <kuznet@ms2.inr.ac.ru>;
*/

#include <stdlib.h>
#include <sys/param.h>
#include <sys/socket.h>
#include <linux/sockios.h>
#include <sys/file.h>
#include <sys/time.h>
#include <sys/signal.h>
#include <sys/ioctl.h>
#include <linux/if.h>
#include <linux/if_arp.h>
#include <sys/uio.h>

#include <netdb.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>

//#include "SNAPSHOT.h"

static void usage(void) __attribute__((noreturn));

int quit_on_reply=0;
char *device="eth0";
int ifindex;
char *source;
struct in_addr src, dst;
char *target;
int dad, unsolicited, advert;
int quiet;
int count=-1;
int timeout;
int unicasting;
int s;
int broadcast_only;

struct sockaddr_ll me;
struct sockaddr_ll he;

struct timeval start, last;

int sent, brd_sent;
int received, brd_recv, req_recv;

#define MS_TDIFF(tv1,tv2) ( ((tv1).tv_sec-(tv2).tv_sec)*1000 + \
                           ((tv1).tv_usec-(tv2).tv_usec)/1000 )

void usage(void)
{
        fprintf(stderr,
                "Usage: arping [-fqbDUAV] [-c count] [-w timeout] [-I device] [-s source] destination\n"
                "  -f : quit on first reply\n"
                "  -q : be quiet\n"
                "  -b : keep broadcasting, don't go unicast\n"
                "  -D : duplicate address detection mode\n"
                "  -U : Unsolicited ARP mode, update your neighbours\n"
                "  -A : ARP answer mode, update your neighbours\n"
                "  -V : print version and exit\n"
                "  -c count : how many packets to send\n"
                "  -w timeout : how long to wait for a reply\n"
                "  -I device : which ethernet device to use (eth0)\n"
                "  -s source : source ip address\n"
                "  destination : ask for what ip address\n"
                );
        exit(2);
}

void set_signal(int signo, void (*handler)(void))
{
        struct sigaction sa;

        memset(&sa, 0, sizeof(sa));
        sa.sa_handler = (void (*)(int))handler;
        sa.sa_flags = SA_RESTART;
        sigaction(signo, &sa, NULL);
}

int send_pack(int s, struct in_addr src, struct in_addr dst,
              struct sockaddr_ll *ME, struct sockaddr_ll *HE)
{
        int err;
        struct timeval now;
        unsigned char buf[256];
        struct arphdr *ah = (struct arphdr*)buf;
        unsigned char *p = (unsigned char *)(ah+1);
        
        ah->;ar_hrd = htons(ME->;sll_hatype);        /* 硬件地址类型*/
        if (ah->;ar_hrd == htons(ARPHRD_FDDI))
                ah->;ar_hrd = htons(ARPHRD_ETHER);
        ah->;ar_pro = htons(ETH_P_IP);                /* 协议地址类型   */
        ah->;ar_hln = ME->;sll_halen;                /* 硬件地址长度   */
        ah->;ar_pln = 4;                                /* 协议地址长度 */
        ah->;ar_op  = advert ? htons(ARPOP_REPLY) : htons(ARPOP_REQUEST);/* 操作类型*/

        memcpy(p, &ME->;sll_addr, ah->;ar_hln);                       /* 发送者硬件地址*/
        p+=ME->;sll_halen;        /*以太网为6*/

        memcpy(p, &src, 4);                /* 发送者IP */
        p+=4;
        /* 目的硬件地址*/
        if (advert)
                memcpy(p, &ME->;sll_addr, ah->;ar_hln);
        else
                memcpy(p, &HE->;sll_addr, ah->;ar_hln);
        p+=ah->;ar_hln;

        memcpy(p, &dst, 4);                /* 目的IP地址*/
        p+=4;

        gettimeofday(&now, NULL);
        err = sendto(s, buf, p-buf, 0, (struct sockaddr*)HE, sizeof(*HE));
        if (err == p-buf) {
                last = now;
                sent++;
                if (!unicasting)
                        brd_sent++;
        }
        return err;
}

void finish(void)
{
        if (!quiet) {
                printf("Sent %d probes (%d broadcast(s))\n", sent, brd_sent);
                printf("Received %d response(s)", received);
                if (brd_recv || req_recv) {
                        printf(" (");
                        if (req_recv)
                                printf("%d request(s)", req_recv);
                        if (brd_recv)
                                printf("%s%d broadcast(s)",
                                       req_recv ? ", " : "",
                                       brd_recv);
                        printf(")");
                }
                printf("\n");
                fflush(stdout);
        }
        if (dad)
                exit(!!received);
        if (unsolicited)
                exit(0);
        exit(!received);
}

void catcher(void)
{
        /*这个函数的主要作用是调用send_pack发送一次arp请求*/
        struct timeval tv;

        gettimeofday(&tv, NULL);

        if (start.tv_sec==0)
                start = tv;

        if (count-- == 0 || (timeout && MS_TDIFF(tv,start) >; timeout*1000 + 500))
                finish();

        if (last.tv_sec==0 || MS_TDIFF(tv,last) >; 500) {
                send_pack(s, src, dst, &me, &he);
                if (count == 0 && unsolicited)
                        finish();
        }
        alarm(1);        /*每秒放松一个包*/
}

void print_hex(unsigned char *p, int len)
{
        int i;
        /*打印MAC地址*/
        for (i=0; i<len; i++) {
                printf("%02X", p[i]);
                if (i != len-1)
                        printf(":");
        }
}
/*数据包分析主程序.
把ARP 请求和答复的数据包格式画在这里,希望对理解下面的数据包分析有帮助

                             |---------------28 bytes arp request/reply-----------------------------|        
|--------ethernet header----|
_____________________________________________________________________________________________________
|ethernet | ethernet| frame|hardware|protocol|hardware|protocol|op|sender  |sender|target  |target|
|dest addr|src addr | type| type   |type    | length |length  |  |eth addr| IP   |eth addr| IP    |
-----------------------------------------------------------------------------------------------------  
  6 types    6        2      2        2         1        1      2     6       4       6        4
*/
int recv_pack(unsigned char *buf, int len, struct sockaddr_ll *FROM)
{
        struct timeval tv;
        struct arphdr *ah = (struct arphdr*)buf;
        unsigned char *p = (unsigned char *)(ah+1);
        struct in_addr src_ip, dst_ip;

        gettimeofday(&tv, NULL);

        /* Filter out wild packets */
        if (FROM->;sll_pkttype != PACKET_HOST &&
            FROM->;sll_pkttype != PACKET_BROADCAST &&
            FROM->;sll_pkttype != PACKET_MULTICAST)
                return 0;
        /*到这里pkttype为HOST||BROADCAST||MULTICAST*/
        
        /* Only these types are recognised */
        /*只要ARP request and reply*/
        if (ah->;ar_op != htons(ARPOP_REQUEST) &&
            ah->;ar_op != htons(ARPOP_REPLY))
                return 0;

        /* ARPHRD check and this darned FDDI hack here :-( */
        if (ah->;ar_hrd != htons(FROM->;sll_hatype) &&
            (FROM->;sll_hatype != ARPHRD_FDDI || ah->;ar_hrd != htons(ARPHRD_ETHER)))
                return 0;

        /* Protocol must be IP. */
        if (ah->;ar_pro != htons(ETH_P_IP))
                return 0;
        if (ah->;ar_pln != 4)
                return 0;
        if (ah->;ar_hln != me.sll_halen)
                return 0;
        if (len < sizeof(*ah) + 2*(4 + ah->;ar_hln))
                return 0;
        /*src_ip:对方的IP
          det_ip:我的IP*/
        memcpy(&src_ip, p+ah->;ar_hln, 4);
        memcpy(&dst_ip, p+ah->;ar_hln+4+ah->;ar_hln, 4);
        if (!dad) {
                if (src_ip.s_addr != dst.s_addr)
                        return 0;
                if (src.s_addr != dst_ip.s_addr)
                        return 0;
                if (memcmp(p+ah->;ar_hln+4, &me.sll_addr, ah->;ar_hln))
                        return 0;
        } else {
        /*一般是执行这里,被理上面那段*/
                /* DAD packet was:
                   src_ip = 0 (or some src)
                   src_hw = ME
                   dst_ip = tested address
                   dst_hw = <unspec>;

                   We fail, if receive request/reply with:
                   src_ip = tested_address
                   src_hw != ME
                   if src_ip in request was not zero, check
                   also that it matches to dst_ip, otherwise
                   dst_ip/dst_hw do not matter.
                 */
                 /*dst.s_addr是我们发送请求是置的对方的IP,当然要等于对方发来的包的src_ip啦*/
                if (src_ip.s_addr != dst.s_addr)
                        return 0;
                if (memcmp(p, &me.sll_addr, me.sll_halen) == 0)
                        return 0;
                /*同理,src.s_addr是我们发包是置的自己的IP,要等于对方回复包的目的地址*/
                if (src.s_addr && src.s_addr != dst_ip.s_addr)
                        return 0;
        }
        if (!quiet) {
        /*显示一些答复的信息,不是重点*/
                int s_printed = 0;
                printf("%s ", FROM->;sll_pkttype==PACKET_HOST ? "Unicast" : "Broadcast");
                printf("%s from ", ah->;ar_op == htons(ARPOP_REPLY) ? "reply" : "request");
                printf("%s [", inet_ntoa(src_ip));
                print_hex(p, ah->;ar_hln);
                printf("] ");
                if (dst_ip.s_addr != src.s_addr) {
                        printf("for %s ", inet_ntoa(dst_ip));
                        s_printed = 1;
                }
                if (memcmp(p+ah->;ar_hln+4, me.sll_addr, ah->;ar_hln)) {
                        if (!s_printed)
                                printf("for ");
                        printf("[");
                        print_hex(p+ah->;ar_hln+4, ah->;ar_hln);
                        printf("]");
                }
                if (last.tv_sec) {
                        long usecs = (tv.tv_sec-last.tv_sec) * 1000000 +
                                tv.tv_usec-last.tv_usec;
                        long msecs = (usecs+500)/1000;
                        usecs -= msecs*1000 - 500;
                        printf(" %ld.%03ldms\n", msecs, usecs);
                } else {
                        printf(" UNSOLICITED?\n");
                }
                fflush(stdout);
        }
        received++;
        if (FROM->;sll_pkttype != PACKET_HOST)
                brd_recv++;
        if (ah->;ar_op == htons(ARPOP_REQUEST))
                req_recv++;
        if (quit_on_reply)
                finish();
        if(!broadcast_only) {
                memcpy(he.sll_addr, p, me.sll_halen);
                unicasting=1;
        }
        return 1;
}

int
main(int argc, char **argv)
{
        int socket_errno;
        int ch;
        uid_t uid = getuid();
        /*取得一个packet socket.
        int packet_sock=socket(PF_PACKET,int sock_type,int protocol);
        其中sock_type有两种:
            1.SOCK_RAW,使用类型的套接子,那么当你向设备写数据时,要提供physical layer 
        header.当从设备读数据时,得到的数据是含有physical layer header的
            2.SOCK_DGRAM.这种类型的套接字使用在相对高层.当数据传送给用户之前,physical layer 
            header已经去掉了(可能说的不合适,这是一个解封装的过程)*/
        s = socket(PF_PACKET, SOCK_DGRAM, 0);
        socket_errno = errno;
        /*这个setuid没有什么用,因为arping没有setuid(我的系统是Mandrake 10)*/
        setuid(uid);

        while ((ch = getopt(argc, argv, "h?bfDUAqc:w:s:I:V")) != EOF) {
                switch(ch) {
                case 'b':
                        broadcast_only=1;
                        break;
                /*duplicate address dection mode对这个参数一直不明白.man page里说see rfc2131.4.4.1 
                但rfc2131里好像没有这一节.好在这不是重点.大家有理解的请告诉我吧*/
                case 'D':
                        dad++;
                        quit_on_reply=1;
                        break;
                case 'U':
                        unsolicited++;
                        break;
                case 'A':
                        advert++;
                        unsolicited++;
                        break;
                case 'q':
                        quiet++;
                        break;
                case 'c':
                        count = atoi(optarg);
                        break;
                case 'w':
                        timeout = atoi(optarg);
                        break;
                case 'I':
                        device = optarg;
                        break;
                case 'f':
                        quit_on_reply=1;
                        break;
                case 's':
                        source = optarg;
                        break;
                case 'V':
                        printf("arping utility, iputils-ss%s\n", SNAPSHOT);
                        exit(0);
                case 'h':
                case '?':
                default:
                        usage();
                }
        }
        argc -= optind;
        argv += optind;

        if (argc != 1)
                usage();

        target = *argv;

        if (device == NULL) {
                fprintf(stderr, "arping: device (option -I) is required\n");
                usage();
        }

        if (s < 0) {
                errno = socket_errno;
                perror("arping: socket");
                exit(2);
        }

        if (1) {
                struct ifreq ifr;
                memset(&ifr, 0, sizeof(ifr));
                strncpy(ifr.ifr_name, device, IFNAMSIZ-1);
                if (ioctl(s, SIOCGIFINDEX, &ifr) < 0) {
                        fprintf(stderr, "arping: unknown iface %s\n", device);
                        exit(2);
                }
                ifindex = ifr.ifr_ifindex;

                if (ioctl(s, SIOCGIFFLAGS, (char*)&ifr)) {
                        perror("ioctl(SIOCGIFFLAGS)");
                        exit(2);
                }
                /*设备当然是要up的想要bring up eth0 可以/etc/sysconfig/network-scripts/ifup eth0*/
                if (!(ifr.ifr_flags&IFF_UP)) {
                        if (!quiet)
                                printf("Interface \"%s\" is down\n", device);
                        exit(2);
                }
                if (ifr.ifr_flags&(IFF_NOARP|IFF_LOOPBACK)) {
                        if (!quiet)
                                printf("Interface \"%s\" is not ARPable\n", device);
                        exit(dad?0:2);
                }
        }
        /*下面处理用户输入的目的地址,是11.22.33.44还是www.host.com?*/
        if (inet_aton(target, &dst) != 1) {
                /*看来是www.host.com,那我们得到他的信息byname*/
                struct hostent *hp;
                hp = gethostbyname2(target, AF_INET);
                if (!hp) {
                        fprintf(stderr, "arping: unknown host %s\n", target);
                        exit(2);
                }
                /*要的是他的IP地址的binary representation*/
                memcpy(&dst, hp->;h_addr, 4);
        }

        if (source && inet_aton(source, &src) != 1) {
                fprintf(stderr, "arping: invalid source %s\n", source);
                exit(2);
        }

        if (!dad && unsolicited && src.s_addr == 0)
                src = dst;
        /*下面这一大段确实有用么?好像唯一有用功是这一句  src = saddr.sin_addr;  */
        if (!dad || src.s_addr) 
        {
                struct sockaddr_in saddr;
                int probe_fd = socket(AF_INET, SOCK_DGRAM, 0);

                if (probe_fd < 0) 
                {
                        perror("socket");
                        exit(2);
                }
                if (device) 
                {
                        /*bind这个socket to 
                        "device".操作的结果是只有那个设备收到的数据才传送到这个socket*/
                        if (setsockopt(probe_fd, SOL_SOCKET, SO_BINDTODEVICE, device, strlen(device)+1) == 
                        -1)
                                perror("WARNING: interface is ignored");
                }
                memset(&saddr, 0, sizeof(saddr));
                saddr.sin_family = AF_INET;
                if (src.s_addr) 
                {
                        saddr.sin_addr = src;
                        if (bind(probe_fd, (struct sockaddr*)&saddr, sizeof(saddr)) == -1) 
                        {
                                perror("bind");
                                exit(2);
                        }
                } 
                else if (!dad) 
                {
                        int on = 1;
                        int alen = sizeof(saddr);

                        saddr.sin_port = htons(1025);
                        saddr.sin_addr = dst;
                /*SO_DONTROUTE的作用:don't send via a gateway,only send to directly connected hosts*/
                        if (setsockopt(probe_fd, SOL_SOCKET, SO_DONTROUTE, (char*)&on, sizeof(on)) == -1)
                                perror("WARNING: setsockopt(SO_DONTROUTE)");
                        if (connect(probe_fd, (struct sockaddr*)&saddr, sizeof(saddr)) == -1) 
                        {
                                perror("connect");
                                exit(2);
                        }
                        /*getsockname returns the local IP address and local port number assigned to the 
                        connection by 
                        the kernel*/
                        if (getsockname(probe_fd, (struct sockaddr*)&saddr, &alen) == -1) 
                        {
                                perror("getsockname");
                                exit(2);
                        }
                        /*这是最终目的,取得本机IP地址*/
                        src = saddr.sin_addr;
                }
                close(probe_fd);
        }

        me.sll_family = AF_PACKET;
        me.sll_ifindex = ifindex;
        me.sll_protocol = htons(ETH_P_ARP);
        /* 只想要由me指定的接口收到的数据包*/
        if (bind(s, (struct sockaddr*)&me, sizeof(me)) == -1) {
                perror("bind");
                exit(2);
        }

        if (1) {
                int alen = sizeof(me);
                /*get link layer information   是下面这些.因为sll_family sll_ifindex sll_protocol已知
                  unsigned short  sll_hatype;            Header type 
                  unsigned char   sll_pkttype;           Packet type 
                  unsigned char   sll_halen;             Length of address 
                  unsigned char   sll_addr[8];           Physical layer address */
                if (getsockname(s, (struct sockaddr*)&me, &alen) == -1) {
                        perror("getsockname");
                        exit(2);
                }
        }
        if (me.sll_halen == 0) {
                if (!quiet)
                        printf("Interface \"%s\" is not ARPable (no ll address)\n", device);
                exit(dad?0:2);
        }

        he = me;
        /*把他的地址设为ff:ff:ff:ff:ff:ff  即广播地址,当然假设是以太网*/
        memset(he.sll_addr, -1, he.sll_halen);

        if (!quiet) {
                printf("ARPING %s ", inet_ntoa(dst));
                printf("from %s %s\n",  inet_ntoa(src), device ? : "");
        }

        if (!src.s_addr && !dad) {
                fprintf(stderr, "arping: no source address in not-DAD mode\n");
                exit(2);
        }

        set_signal(SIGINT, finish);
        set_signal(SIGALRM, catcher);

        catcher();

        while(1) {
                sigset_t sset, osset;
                char packet[4096];
                struct sockaddr_ll from;
                int alen = sizeof(from);
                int cc;
                /*注意s的类型是SOCK_DGRAM,所以收到的数据包里没有link layer info,这些信息被记录在from里*/
                if ((cc = recvfrom(s, packet, sizeof(packet), 0,
                                   (struct sockaddr *)&from, &alen)) < 0) {
                        perror("arping: recvfrom");
                        continue;
                }
                sigemptyset(&sset);
                sigaddset(&sset, SIGALRM);
                sigaddset(&sset, SIGINT);
                sigprocmask(SIG_BLOCK, &sset, &osset);
                recv_pack(packet, cc, &from);
                sigprocmask(SIG_SETMASK, &osset, NULL);
        }
}

