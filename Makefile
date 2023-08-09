workshop: main.o change_value.o printArray.o arrayMax.o
	g++ -o workshop main.o change_value.o printArray.o arrayMax.o

main.o: main.cpp workshop.h
	g++ -c main.cpp

change_value.o: change_value.cpp workshop.h
	g++ -c change_value.cpp

printArray.o: printArray.cpp workshop.h
	g++ -c printArray.cpp

arrayMax.o: arrayMax.cpp workshop.h
	g++ -c arrayMax.cpp

run:
	./workshop