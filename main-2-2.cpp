#include <iostream>

int bin_to_int(int[6], int);

int main() {
    int binary[6] = {1, 0, 1, 0, 1, 0};
    std::cout << "The corresponding integer is: " << bin_to_int(binary, 6) << std::endl;
}