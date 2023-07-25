#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main() {
    int array[5] = {4, -2, 4, -1, 6};
    int secondarray[5] = {10, -6, 3, 5, 1};
    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
    return 0;
}