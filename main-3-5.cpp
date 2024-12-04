#include <iostream>

extern double sum_even(double[], int);

int main() {
    double array[6] = {1, 2, 3, 4, 5, 6};

    std::cout << "The sum of all even elements is: " << sum_even(array, 6) << std::endl;

    return 0;
}
