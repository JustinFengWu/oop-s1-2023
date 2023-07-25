#include <stdbool.h>
#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    int array[6] = {1, 2, 3, 4, 5, 6};
    if (is_ascending(array, 6)) {
        std::cout << "The array is in ascending order. " << std::endl;
    } else {
        std::cout << "The array is not in ascending order. " << std::endl;
    };

    return 0;
}