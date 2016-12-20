#TOPDIR=$(shell cd ../../../../../; pwd)
#include $(TOPDIR)/Profile.mak

TARGET=csa_hunter
OBJS+=main.o
CFLAGS+=-g -Wall
#CFLAGS+=-isystem $(MODEL_APP_DIR)/libstatus/include -isystem $(APPSDIR)/libstatus/include
#CFLAGS+=-DSAMP_DBUG
#LDFLAGS+=-L. -luci -I./ -lrt


all:$(OBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJS) 

install:
	sudo cp csa_hunter /usr/sbin/csa_hunter
	
clean: 
	rm -rf $(TARGET) $(OBJS) *.bak

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

