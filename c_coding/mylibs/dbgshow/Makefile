TARGET=dbgshow
OBJ+=main.o dbg_print_struct.o
BUILD_LINK_FLAGS=-T ./dbgshow.lds

CC=gcc

.PHONY: all

all: $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(BUILD_LINK_FLAGS)

.PHONY: clean

clean:
	rm -rf $(OBJ) $(TARGET)
	
*.o: *.c
	$(CC) $(CFLAGS)  -o $@ -c $< 

#main.o : main.c dbg_print_struct.h
#	$(CC) $(CFLAGS) -c main.c 
#dbg_print_struct.o : dbg_print_struct.c  dbg_print_struct.h
#	$(CC) $(CFLAGS) -c dbg_print_struct.c
