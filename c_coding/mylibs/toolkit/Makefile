TARGET=test
OBJ+=main.o toolkit.o

.PHONY: all
all: $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(OBJ) $(TARGET)
	
*.o: *.c
	$(CC) $(CFLAGS) -o $@ -c $<

