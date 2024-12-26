CC = gcc
CFLAGS = -g -Wall

all: program.exe

program.exe: program.o
		$(CC) $(CFLAGS) program.o -o program.exe

program.o: program.c program.h
		$(CC) $(CFLAGS) -c program.c

clean:
		rm -rf *.o *.exe