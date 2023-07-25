#include <iostream>

extern int min_element(int[], int);

int main() {
    int array[5] = {1, -2, 3, -0, 6};
    std::cout << "The smallest element in tha array is: " << min_element(array, 5) << std::endl;
    return 0;
}