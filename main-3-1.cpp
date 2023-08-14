#include <iostream>
#include <stdbool.h>

int * readNumbers();
bool equalsArray(int*, int*, int);

int main() {
    int *result = readNumbers();
    int *result2 = readNumbers();
    if (equalsArray(result, result2, 10) == true) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    delete[] result;
    delete[] result2;
    return 0;
}