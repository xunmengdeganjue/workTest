#TOPDIR=$(shell cd ../../../../../; pwd)
#include $(TOPDIR)/Profile.mak
TARGET=test
OBJS+=main.o statableopt.o
CFLAGS+=-g -Wall 
CFLAGS+=-D_GNU_SOURCE
#CFLAGS+=-D_RE_DEBUG 
CC=colorgcc

all:$(OBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJS) 

install:
	sudo cp $(TARGET) /usr/sbin/$(TARGET)
	
clean: 
	rm -rf $(TARGET) $(OBJS) *.bak

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

