ip6scan : main.o func.o
	gcc -Wall -D_GNU_SOURCE -o ip6scan main.o func.o
main.o : main.c
	gcc -Wall -c main.c
func.o : func.c
	gcc -Wall -D_GNU_SOURCE -c func.c
clean:
	rm -rf ip6scan *.o
