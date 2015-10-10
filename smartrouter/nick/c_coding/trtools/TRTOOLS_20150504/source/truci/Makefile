
CFLAGS= -Wall -I./../../lib
LDFLAGS+= -L./../../lib -lopt


truci:truciconfigdeal.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
truciconfigdeal.o:truciconfigdeal.c
	$(CC) $(CFLAGS) -c $< 
install:
	sudo cp truci $(TOPDIR)/tools/
clean:
	rm -rf *.o truci

