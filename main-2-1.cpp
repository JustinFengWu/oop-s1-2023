#include <iostream>

int * readNumbers();
void hexDigits(int*, int);

int main() {
    int *result = readNumbers();
    hexDigits(result, 10);

    delete[] result;
    return 0;
}