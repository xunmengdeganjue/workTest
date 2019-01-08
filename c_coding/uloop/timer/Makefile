
TARGET=timer
OBJS+=ulp_timer.o

#CFLAGS += -Wall -D_GNU_SOURCE
CFLAGS+=-g -Wall
LDFLAGS+=-lubox
all:$(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS)  -o $(TARGET) $(OBJS) $(LDFLAGS)

%.o:%.c
	$(CC) $(LDFLAGS) -c $< -o $@
clean:
	rm -rf *.o *.a $(TARGET)


