#
# nsock regression test suite
# Same license as nmap -- see https://nmap.org/book/man-legal.html
##

NBASEDIR=/home/nickli/test/workTest/services/p-u-m-a/ipv6clientscan/nmap-7.01/nbase
NSOCKLIB=../src/libnsock.a
NBASELIB=$(NBASEDIR)/libnbase.a

CC 	= gcc
CFLAGS	= -Wall -O0 -I../include -I$(NBASEDIR)
LDFLAGS	= -L/home/nickli/test/workTest/services/p-u-m-a/ipv6clientscan/nmap-7.01/libpcap  -L/home/nickli/test/workTest/services/p-u-m-a/ipv6clientscan/nmap-7.01/nbase
LIBS	=  /home/nickli/test/workTest/services/p-u-m-a/ipv6clientscan/nmap-7.01/libpcap/libpcap.a

SRC = tests_main.c \
      basic.c \
      timer.c \
      logs.c \
      connect.c \
      ghlists.c \
      ghheaps.c \
      cancel.c

OBJ = $(SRC:.c=.o)

EXE = tests_main

all: $(SRC) $(EXE)

$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@ $(NSOCKLIB) $(NBASELIB) $(LIBS)

.c.o:
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ) $(EXE)

rebuild: clean $(EXE)

.PHONY: clean rebuild
