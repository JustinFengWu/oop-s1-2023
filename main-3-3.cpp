#include <iostream>
#include <iomanip>

extern double weighted_average(int array[], int n);

int main() {
    int array[6] = {1, 2, 1, 4, 1, 3};

    std::cout << "The weighted average is: " << std::setprecision(1) <<weighted_average(array, 6) << std::endl; 
    return 0;

}
