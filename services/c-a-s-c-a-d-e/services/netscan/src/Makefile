#TOPDIR=$(shell cd ../../../../../; pwd)
#include $(TOPDIR)/Profile.mak

TARGET=netscan

OBJS+=main.o arp.o bios.o ns.o

CFLAGS += -Wall -g

LDFLAGS+=-L. -luci -lsuci

all:${OBJS}
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJS)

install:
	sudo cp wifi_network /sbin/wifi_network

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o 
	rm -f netscan
