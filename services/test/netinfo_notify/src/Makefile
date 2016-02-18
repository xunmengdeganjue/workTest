
CFLAGS += -Wall

netinfo_notify : netinfo_notify.o
	$(CC) $(CFLAGS) -o netinfo_notify netinfo_notify.o
netinfo_notify.o : netinfo_notify.c
	$(CC) $(CFLAGS) -c netinfo_notify.c

clean:
	rm -rf netinfo_notify *.o
