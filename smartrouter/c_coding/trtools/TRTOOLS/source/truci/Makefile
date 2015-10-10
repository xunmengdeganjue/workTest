
TOPDIR ?= ../../

CFLAGS= -Wall -I./../../lib
LDFLAGS+= -L./../../lib -lopt


truci:truciconfigdeal.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

truciconfigdeal.o:truciconfigdeal.c
	$(CC) $(CFLAGS) -c $< 

install:
	if [ -d $(TOPDIR)/tools ];then \
		cp truci $(TOPDIR)/tools/;\
	else \
		mkdir -p ${TOPDIR}/tools;\
		cp truci ${TOPDIR}/tools;\
	fi
clean:
	rm -rf *.o truci

