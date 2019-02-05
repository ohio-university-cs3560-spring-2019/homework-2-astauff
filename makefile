CFLAGS = -Wall -std=c++11

main: change.o main.o
	g++ $(CFLAGS) change.o main.o -o main

change.o: change.cc change.h
	g++ -c $(CFLAGS) change.cc

main.o: main.cc change.h
	g++ -c $(CFLAGS) main.cc

clean:
	rm *.o main
