
TOPDIR ?= ../../

CFLAGS= -Wall -I./../../lib `xml2-config --cflags`
LDFLAGS+= -L./../../lib -lopt `xml2-config --libs`


xml2func:xml2func.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

xml2func.o:xml2func.c
	$(CC) $(CFLAGS) -c $< 

install:
	if [ -d $(TOPDIR)/tools ];then \
		cp xml2func $(TOPDIR)/tools/;\
	else \
		mkdir -p ${TOPDIR}/tools;\
		cp xml2func ${TOPDIR}/tools;\
	fi
clean:
	rm -rf *.o xml2func $(TOPDIR)/tools/xml2func

