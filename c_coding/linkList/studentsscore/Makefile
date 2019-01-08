TARGET:=studentscore
CFLAGS+=-g -Wall

$(TARGET):main.o studentscore.o
	gcc $(CFLAGS) -o $(TARGET) main.o studentscore.o

main.o:main.c studentscore.h
	gcc -c main.c

studentscore.o:studentscore.c studentscore.h
	gcc -c studentscore.c 
	
clean:

	-rm -rf main.o studentscore


