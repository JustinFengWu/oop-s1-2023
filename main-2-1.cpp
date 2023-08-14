#include <iostream>

int * readNumbers();
void hexDigits(int*, int);

int main() {
    int *result = readNumbers();
    hexDigits(result, 10);

    return 0;
}