#TOPDIR=$(shell cd ../../../../../; pwd)
#include $(TOPDIR)/Profile.mak

TARGET=detec mysend mymail
OBJS+=main.o suci.o
MYOBJS+=mysend.o suci.o
MAILOBJS+=mymail.o suci.o

CFLAGS+=-g -Wall
CFLAGS+=-isystem $(MODEL_APP_DIR)/libstatus/include -isystem $(APPSDIR)/libstatus/include
#CFLAGS+=-DSAMP_DBUG
LDFLAGS+=-L. -luci -I./ -lrt

#CFLAGS+=-g -Wall -I/usr/local/include/uci/
#CFLAGS+=-DSAMP_DBUG
#CFLAGS+=-isystem $(MODEL_APP_DIR)/libstatus/include -isystem $(APPSDIR)/libstatus/include
#LDFLAGS+=-L/usr/local/lib/ -luci -lubox -lpthread -lrt

all:$(TARGET)
detec:$(OBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o detec $(OBJS) 
mysend:$(MYOBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o mysend $(MYOBJS)
mymail:$(MAILOBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o mymail $(MAILOBJS) 


install:
	sudo cp detec /usr/sbin/detec
	sudo cp mysend /usr/sbin/mysend
	sudo cp mymail /usr/sbin/mymail
clean: 
	rm -rf ${TARGET} $(OBJS) $(MYOBJS) $(MAILOBJS) *.bak

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

