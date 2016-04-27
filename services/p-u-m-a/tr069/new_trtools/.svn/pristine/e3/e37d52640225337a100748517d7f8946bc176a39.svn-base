
TOPDIR ?= ../../

CFLAGS= -Wall -I./../../lib
LDFLAGS+= -L./../../lib -lopt

trfcmo:tr_func_deal.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

tr_func_deal.o:tr_func_deal.c
	$(CC) $(CFLAGS) -c $< 

install:
	@echo ${TOPDIR}
	@if [ -d $(TOPDIR)/tools ];then \
		cp trfcmo $(TOPDIR)/tools/;\
	else \
		mkdir -p $(TOPDIR)/tools; \
		cp trfcmo $(TOPDIR)/tools; \
	fi
clean:
	rm -rf *.o trfcmo

