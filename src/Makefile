TARGET=helloworld

SRC=main.c
OBJ=main.o

.PHONY:run
run: $(TARGET)
	./$(TARGET)

.PHONY:all
all: $(TARGET)

$(TARGET): $(OBJ)
	gcc $(OBJ) -o $@

%.o: %.c
	gcc -c $^ -o $@

.PHONY:clean
clean:
	find . -name '*.o' | xargs rm -f
	rm -f $(TARGET)

