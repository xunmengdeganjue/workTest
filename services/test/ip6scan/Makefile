
TARGET=net6scan
TARGET1=test
CFLAGS += -Wall -D_GNU_SOURCE -I./include -DX86

DIRS=lib
SRCS=$(foreach DIR, $(DIRS), $(wildcard $(DIR)/*.c))
OBJS=$(patsubst %.c, %.o, $(SRCS))
OBJS += main.o

all:$(OBJS) test
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
	cp ./test/test ./test.bin
test:
	$(CC) -C test
	
%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -rf ip6scan *.o  *.bin
	cd ./lib && rm -rf *.o
