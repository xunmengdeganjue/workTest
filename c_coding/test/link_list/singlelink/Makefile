TARGET=singlelink
OBJS+=linklist.o
CFLAGS+=-g -Wall 
#CFLAGS+=-D_RE_DEBUG
#LDFLAGS+= -I. -lubox -lubus -liw -luci -lsuci

#CFLAGS+=-isystem $(MODEL_APP_DIR)/libstatus/include -isystem $(APPSDIR)/libstatus/include
#CFLAGS+=-DSAMP_DBUG
#LDFLAGS+=-L. -luci -I./ -lrt


all:$(OBJS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJS) 

#install:
#	sudo cp $(TARGET) /usr/sbin/$(TARGET)
	
clean: 
	rm -rf $(TARGET) $(OBJS) *.bak

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
