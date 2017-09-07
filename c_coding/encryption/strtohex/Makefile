CC = gcc
CFLAGS = -g -Wall -std=gnu99

all: ./src/hextostr ./src/strtohex

./src/hextostr: ./src/hextostr.c
	$(CC) $(CFLAGS) ./src/hextostr.c -o hextostr

./src/strtohex: ./src/strtohex.c
	$(CC) $(CFLAGS) ./src/strtohex.c -o strtohex

clean: FORCE
	/bin/rm -f hextostr strtohex

FORCE:
