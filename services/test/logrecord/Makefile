TARGET = log
#OBJS = daemon_log.o main.o logopt.o

CFLAGS += -Wall -g -I./include
CFLAGS += -I.
DIRS=lib
SRCS=$(foreach DIR, $(DIRS), $(wildcard $(DIR)/*.c))

OBJS=$(patsubst %.c, %.o, $(SRCS))
OBJS += main.o


LDFLAGS +=  


all:$(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

#%.o:%.c
#	$(CC) $(CFLAGS) -c $<

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
	
clean:
	rm -rf *.o && cd ./lib && rm -rf *.o
	rm -rf log
