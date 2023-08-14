#include <iostream>
#include <stdbool.h>

int * readNumbers();
int * reverseArray(int*, int);
bool equalsArray(int*, int*, int);

int main() {
    int *result = readNumbers();
    int *result2 = reverseArray(result, 10);
    if (equalsArray(result, result2, 10) == true) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    delete[] result;
    delete[] result2;
    return 0;
}