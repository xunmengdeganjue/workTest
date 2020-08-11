#objects = hello_world.o
#all:$(objects)
#$(objects):%.o:%.c
#	$(CC) -C $(CFLAGS) $< -O $@

helloworld: hello_world.o 
	gcc -o helloworld hello_world.o
hello_world.o: hello_world.c
	gcc -c hello_world.c

clean:
	rm -rf *.o helloworld

