
CFLAGS += -Wall -D_GNU_SOURCE 

net6scan : main.o func.o
	$(CC) $(CFLAGS) -o net6scan main.o func.o
main.o : main.c
	$(CC) $(CFLAGS) -c main.c
func.o : func.c
	$(CC) $(CFLAGS) -c func.c
clean:
	rm -rf ip6scan *.o
