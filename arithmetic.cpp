#include <math.h>
#include <iostream>

int arithmetic(int number1, int number2) {
    int exponent = 0;
    int sum = 0;

    while (number1 != 0 && number2 != 0) {
        sum += (number1 % 10)*pow(2, exponent) + (number2 % 10)*pow(2, exponent);
        exponent++;
        number1 /= 10;
        number2 /= 10;
    }

    return sum;
}

int main() {
    int number1 = 101010;
    int number2 = 101101;

    std::cout << arithmetic(number1, number2) << std::endl;
}