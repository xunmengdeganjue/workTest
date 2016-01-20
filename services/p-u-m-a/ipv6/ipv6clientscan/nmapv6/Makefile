ipv6scan :  ncat_main.o  ncat_core.o nbase_time.o utils.o

ncat_main.o :ncat_main.c utils.h
	cc -c ncat_main.c
ncat_core.o :ncat_core.c utils.h
	cc -c ncat_core.c
nbase_time.o :nbase_time.c utils.h
	cc -c nbase_time.c
utils.o:utils.c utils.h
	cc -c utils.c

clean:
	rm -rf ipv6scan

