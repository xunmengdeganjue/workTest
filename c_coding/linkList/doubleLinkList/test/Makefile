test: test.o dlist.o
	gcc -o test test.o dlist.o
test.o:test.c
	gcc -c test.c 
dlist.o:dlist.c
	gcc -c dlist.c
clean:
	rm -rf test dlist.o test.o
