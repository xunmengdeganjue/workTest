double:main.o doubleLinkList.o
	gcc -g -o double main.o doubleLinkList.o
main.o :main.c doubleLinkList.h
	gcc -g -c main.c
doubleLinkList.o:doubleLinkList.h
	gcc -g -c doubleLinkList.c
clean:
	rm -rf *.o double

