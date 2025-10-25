CC = gcc
TARGET = details

SRC = main.c name.c age.c address.c
OBJ = main.o name.o age.o address.o

all= $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

main.o: main.c name.h age.h address.h
	$(CC) -c main.c

name.o: name.c name.h
	$(CC) -c name.c

age.o: age.c age.h
	$(CC) -c age.c

address.o: address.c address.h
	$(CC) -c address.c

clean:
	rm -f $(OBJ) $(TARGET)
