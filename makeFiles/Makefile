CC = gcc
CFLAGS = -g -Wall

all: program.exe saferProgram.exe

program.exe: program.o
		$(CC) $(CFLAGS) program.o -o program.exe

saferProgram.exe: saferProgram.o
		$(CC) $(CFLAGS) saferProgram.o -o saferProgram.exe

program.o: program.c
		$(CC) $(CFLAGS) -c program.c

saferProgram.o: saferProgram.c
		$(CC) $(CFLAGS) -c saferProgram.c

clean: 
		rm -rf *.o *.exe