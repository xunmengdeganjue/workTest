#TOPDIR=$(shell cd ../../../../../; pwd)
#include $(TOPDIR)/Profile.mak

TARGET=test
OBJS+=main.o re.o
CFLAGS+=-g -Wall 
CFLAGS+=-D_RE_DEBUG -D_GNU_SOURCE
LDFLAGS+= -I.

#CFLAGS+=-isystem $(MODEL_APP_DIR)/libstatus/include -isystem $(APPSDIR)/libstatus/include
#CFLAGS+=-DSAMP_DBUG
#LDFLAGS+=-L. -luci -I./ -lrt


all:$(OBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJS) 

install:
	sudo cp $(TARGET) /usr/sbin/$(TARGET)
	
clean: 
	rm -rf $(TARGET) $(OBJS) *.bak

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

