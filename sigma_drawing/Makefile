CC = gcc
CFLAGS = -g -Wall

all: program.exe

program.exe: draw.o main.o
		$(CC) $(CFLAGS) draw.o main.o -o program.exe

main.o: main.c draw.h
		$(CC) $(CFLAGS) -c main.c

draw.o: draw.c draw.h
		$(CC) $(CFLAGS) -c draw.c

clean:
		rm -rf *.o *.exe