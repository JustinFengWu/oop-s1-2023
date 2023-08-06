#include "workshop.h"
#include <iostream>

int main() {

    double value = 3.14;
    std::cout << "Original value of value: " << value << std::endl;
    changeValue(&value);
    std::cout << "Modified value of value: " << value << std::endl;

    double doubleArray[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    printArray(doubleArray, 6);

    std::cout << "Maximum value: " << arrayMax(doubleArray, 6) << std::endl;

    return 0;
}