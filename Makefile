CC = gcc
CFLAGS = -Wall

all: main

main: main.o matrix.o calculus.o statistics.o
	$(CC) $(CFLAGS) -o main main.o matrix.o calculus.o statistics.o

main.o: main.c matrix.h calculus.h statistics.h
	$(CC) $(CFLAGS) -c main.c

matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c matrix.c

calculus.o: calculus.c calculus.h
	$(CC) $(CFLAGS) -c calculus.c

statistics.o: statistics.c statistics.h
	$(CC) $(CFLAGS) -c statistics.c

clean:
	rm -f *.o main
