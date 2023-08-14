#include <iostream>

int * readNumbers();
int secondSmallestSum(int*, int);

int main() {
    int *result = readNumbers();
    int sum = secondSmallestSum(result, 10);
    std::cout << sum << std::endl;

    delete[] result;
    return 0;
}