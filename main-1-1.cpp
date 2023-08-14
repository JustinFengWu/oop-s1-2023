#include <iostream>

int * readNumbers();
void printNumbers(int*, int);

int main() {
    int *result = readNumbers();
    printNumbers(result, 10);


    delete[] result;
    return 0;
}