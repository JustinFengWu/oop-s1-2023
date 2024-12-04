#include <stdbool.h>
#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array[6] = {6, 5, 4, 3, 2, 1};
    if (is_descending(array, 6)) {
        std::cout << "The array is in descending order. " << std::endl;
    } else {
        std::cout << "The array is not in descending order. " << std::endl;
    };

    return 0;
}