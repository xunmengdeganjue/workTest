
TEST:= -DDATA_TEST -DBACK_INSERT

DOUBLE_CIRCULAR_LINK:= -DDOUBLE_CIRCULAR_LINK -DHEAD_INSERT

CFLAGS:= -Wall $(DOUBLE_CIRCULAR_LINK) $(TEST)

double:main.o doubleLinkList.o data_test.o sky_log.o
	gcc $(CFLAGS) -g -o double main.o doubleLinkList.o data_test.o sky_log.o
main.o :main.c doubleLinkList.h
	gcc $(CFLAGS) -g -c main.c
doubleLinkList.o:doubleLinkList.h
	gcc $(CFLAGS) -g -c  doubleLinkList.c
data_test.o:data_test.c data_test.h
	gcc $(CFLAGS) -g -c data_test.c
sky_log.o:sky_log.c sky_log.h
	gcc $(CFLAGS) -g -c sky_log.c
	
clean:
	rm -rf *.o double

