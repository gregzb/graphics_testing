all: main.o
	g++ -o program main.o

main.o: main.cpp
	g++ -c main.cpp

run:
	./program

memcheck:
	valgrind --leak-check=yes ./program
