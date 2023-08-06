#include <iostream>

void printArray(double * ptr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
    return;
}