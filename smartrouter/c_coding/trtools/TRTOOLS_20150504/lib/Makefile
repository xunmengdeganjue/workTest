
CFLAGS= -shared -fPIC


libopt.so:opt_lib.c opt_lib.h
	$(CC) $(CFLAGS) -o $@ $^ 

install:
	sudo cp libopt.so /usr/lib/


