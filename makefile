CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.o
	$(CC) $(CFLAGS) -o main main.o

# Compile all C files
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f main *.o
