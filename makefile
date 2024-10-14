# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Target to build everything
all: main

# Link all object files together to create the 'main' executable
main: main.o process.o RR.o
	$(CC) $(CFLAGS) -o main main.o process.o RR.o

# Compile individual source files
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

process.o: process.c
	$(CC) $(CFLAGS) -c process.c

RR.o: RR.c
	$(CC) $(CFLAGS) -c RR.c

# Clean up compiled files
clean:
	rm -f main *.o
