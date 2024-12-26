CC = gcc
CFLAGS = -g -Wall

all: program.exe

# for some reason need -lm to link math library
program.exe: calculator.o formula.o
		$(CC) $(CFLAGS) calculator.o formula.o -o program.exe -lm

formula.o: formula.c formula.h
		$(CC) $(CFLAGS) -c formula.c

calculator.o: calculator.c formula.h
		$(CC) $(CFLAGS) -c calculator.c

clean:
		rm -rf *.o *.exe