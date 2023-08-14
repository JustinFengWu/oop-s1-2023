#include <iostream>

int * readNumbers() {
    int * number = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "enter a number please: ";
        std::cin >> number[i];
    }

    return number;
}

void printNumbers(int * numbers, int length) {
    for ( int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}