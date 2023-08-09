#workshop 3 makefile
all: workshop

workshop: main.o
	g++ -o workshop main.o arrayMax.o change_value.o printArray.o
#also make sure to include all object files compiled into dependencies for the final target
main.o: main.cpp workshop.h
	g++ -c main.cpp
printArray.o: printArray.cpp workshop.h
	g++ -c printArray.cpp
change_value.o: change_value.cpp workshop.h
	g++ -c change_value.cpp
arrayMax.o: arrayMax.cpp workshop.h
	g++ -c arrayMax.cpp

run:
	./workshop

clean:
	rm -f workshop

# make sure each source file has its own object file and include all of these as dependecies for the workshop target