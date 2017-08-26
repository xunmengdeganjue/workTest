LDFLAGS+=-lcrypto

testmian:testmain.o lib3des.o
	gcc -o testmain testmain.o lib3des.o ${LDFLAGS}
testmain.o:testmain.c lib3des.h
	gcc -c testmain.c
lib3des.o:lib3des.c lib3des.h
	gcc -c lib3des.c

clean:
	rm -rf *.o testmain
