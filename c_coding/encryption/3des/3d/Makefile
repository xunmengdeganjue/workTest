# Makefile 文件
des:des_main.o des.o cencode.o cdecode.o
	gcc -o des des_main.o des.o cencode.o cdecode.o
des_main.o:des_main.c des.h cencode.h cdecode.h
	gcc -c des_main.c
des.o:des.c des.h
	gcc -c des.c
cencode.o:cencode.c cencode.h
	gcc -c cencode.c
cdecode.o:cdecode.c cdecode.h
	gcc -c cdecode.c
clean:
	rm des_main.o des.o
