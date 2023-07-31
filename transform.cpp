#include <iostream>

void binary(int number) {
    int temp = number;
    int counter = 0;
    int i = 0;
    while (temp/2 != 0) {
        temp /= 2;
        counter++;
    }
    int * binary_numbers = new int[counter];
    temp = number;

    while (temp != 0) {
        binary_numbers[i] = temp % 2;
        temp /= 2;
        i++;
    }

    for (int j = i - 1; j > -1; j--){
        std::cout << binary_numbers[j];
    }
    std::cout << std::endl;

    delete[] binary_numbers;
}

int main() {
    int number = 42;
    binary(number);
    return 0;
}