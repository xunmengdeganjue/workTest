LDFLAGS+=-lcrypto 
CFLAGS+= -Wall -g -fno-stack-protector

testmian:testmain.o lib3des.o
	gcc ${CFLAGS} -o testmain testmain.o lib3des.o ${LDFLAGS}
testmain.o:testmain.c lib3des.h
	gcc ${CFLAGS} -c testmain.c
lib3des.o:lib3des.c lib3des.h
	gcc ${CFLAGS} -c lib3des.c

clean:
	rm -rf *.o testmain
