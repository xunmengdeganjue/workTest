TARGET=trtest

CFLAGS= -Wall -I./include 

DIRS=function mylib

SRCS=$(foreach DIR, $(DIRS), $(wildcard $(DIR)/*.c))
OBJS=$(patsubst %.c, %.o, $(SRCS))
OBJS+=maintest.o

CFLAGS+=-I/usr/local/include/uci/

LDFLAGS+=-L/usr/local/lib/ -luci

all:$(OBJS)	
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(TARGET) $(OBJS)
