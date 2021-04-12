CC=gcc
CFLAGS=-I.

calc: main.o
	$(CC) -o calc main.o 
clean:
	rm *.o calc