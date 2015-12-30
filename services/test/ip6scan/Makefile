ip6scan : main.o func.o
	gcc -o ip6scan main.c func.c
main.o : main.c func.c func.h
	gcc -c main.c func.c
func.o :func.c func.h
	gcc -c func.c
clean:
	rm -rf ip6scan
