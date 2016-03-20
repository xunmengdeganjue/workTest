FLAG:= -DDOUBLE_LINK

double:main.o doubleLinkList.o
	gcc $(FLAG) -g -o double main.o doubleLinkList.o 
main.o :main.c doubleLinkList.h
	gcc $(FLAG) -g -c main.c
doubleLinkList.o:doubleLinkList.h
	gcc $(FLAG) -g -c doubleLinkList.c
clean:
	rm -rf *.o double

