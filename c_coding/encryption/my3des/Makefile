
LDFLAGS = -lcrypto

tdes:tdes.o hex.o
	gcc -o tdes tdes.o hex.o $(LDFLAGS)
tdes.o:tdes.c hex.h
	gcc -c tdes.c
hex.o:hex.c hex.h
	gcc -c hex.c


clean:
	rm -rf tdes *.o 
