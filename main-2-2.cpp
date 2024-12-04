#include <iostream>

extern int max_element(int[], int);

int main() {
    int array[5] = {1, -2, 3, -0, 6};
    std::cout << "The largest element in tha array is: " << max_element(array, 5) << std::endl;
    return 0;
}