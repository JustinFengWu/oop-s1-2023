#include <iostream>

int binary_to_int(int[6], int);

int main() {
    int binary[6] = {1, 0, 0, 1, 1, 1};
    std::cout << binary_to_int(binary, 6) << std::endl;
}