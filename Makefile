# Workshop Makefile

all: workshop

workshop: main.o changeValue.o printArray.o arrayMax.o dynamicArray.o
	g++ -o workshop main.o changeValue.o printArray.o arrayMax.o dynamicArray.o

main.o: main.cpp workshop.h
	g++ -c main.cpp

changeValue.o: changeValue.cpp workshop.h
	g++ -c changeValue.cpp

printArray.o: printArray.cpp workshop.h
	g++ -c printArray.cpp

arrayMax.o: arrayMax.cpp workshop.h
	g++ -c arrayMax.cpp

dynamicArray.o: dynamicArray.cpp workshop.h
	g++ -c dynamicArray.cpp

run:
	./workshop
clean:
	rm -f *.o workshop
