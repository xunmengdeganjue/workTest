
CFLAGS= -Wall -I./../../lib
LDFLAGS+= -L./../../lib -lopt
#LDFLAGS+= -L./../../lib -sopt


trfcmo:tr_func_deal.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
tr_func_deal.o:tr_func_deal.c
	$(CC) $(CFLAGS) -c $< 
install:
	sudo cp trfcmo $(TOPDIR)/tools/
clean:
	rm -rf *.o trfcmo

