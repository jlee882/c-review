CC = gcc
CFLAGS = -g -Wall

all: spaceship_thrust.exe

spaceship_thrust.exe: spaceship_thrust.o
		$(CC) $(CFLAGS) spaceship_thrust.o -o spaceship_thrust.exe

spaceship_thrust.o: spaceship_thrust.c
		$(CC) $(CFLAGS) -c spaceship_thrust.c

clean:
		rm -rf *.o *.exe