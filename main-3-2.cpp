#include <iostream>

extern bool median_array(int array[], int n);

int main() {
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    std::cout << "The median is: " << median_array(array, 7) << std::endl;

    return 0;
}