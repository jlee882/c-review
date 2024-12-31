CC = gcc
CFLAGS= -g -Wall

all: program.exe

program.exe: main.o tree_functions.o
	$(CC) $(CFLAGS) main.o tree_functions.o -o program.exe

main.o: main.c tree_functions.h
	$(CC) $(CFLAGS) -c main.c

tree_functions.o: tree_functions.c tree_functions.h
	$(CC) $(CFLAGS) -c tree_functions.c

clean:
	rm -rf *.o *.exe