# Makefile 文件
des:des_main.o des.o cencode.o cdecode.o
	gcc -g -o des des_main.o des.o cencode.o cdecode.o
des_main.o:des_main.c des.h cencode.h cdecode.h
	gcc -g -c des_main.c
des.o:des.c des.h
	gcc -g -c des.c
cencode.o:cencode.c cencode.h
	gcc -g -c cencode.c
cdecode.o:cdecode.c cdecode.h
	gcc -g -c cdecode.c
clean:
	rm -rf des_main.o des.o des cdecode.o cencode.o
