#TOPDIR=$(shell cd ../../../../../; pwd)
#include $(TOPDIR)/Profile.mak

TARGET=wifi_schdule

OBJS+=command.o wifi_schdule.o

CFLAGS+=-g -Wall
CFLAGS+=-isystem $(MODEL_APP_DIR)/libstatus/include -isystem $(APPSDIR)/libstatus/include
LDFLAGS+=-L. -luci -lsuci -I./

all:${OBJS}
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJS) 

install:
	sudo cp wifi_schdule /sbin/wifi_schdule

clean: 
	rm -rf ${TARGaET} $(OBJS) *.bak

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

