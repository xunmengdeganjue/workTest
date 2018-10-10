TARGET=arp_test
OBJS+=main.o 
CFLAGS+=-g -Wall 
CFLAGS+=-D_RE_DEBUG
LDFLAGS+= -I. -lubox
cc=gcc
#CFLAGS+=-isystem $(MODEL_APP_DIR)/libstatus/include -isystem $(APPSDIR)/libstatus/include
#CFLAGS+=-DSAMP_DBUG
#LDFLAGS+=-L. -luci -I./ -lrt


all:$(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

#install:
#    sudo cp reagent /usr/sbin/reagent
    
clean: 
	rm -rf $(TARGET) $(OBJS) *.bak

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
