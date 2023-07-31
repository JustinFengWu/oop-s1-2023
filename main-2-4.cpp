#include <iostream>

int array_min(int[], int);
int array_max(int[], int);
int sum_min_max(int[], int);

int main() {
    int length = 6;
    int integers[6] = {3, 2, 1, 4, 5, 6};

    std::cout << sum_min_max(integers, length) << std::endl;

    return 0;
}