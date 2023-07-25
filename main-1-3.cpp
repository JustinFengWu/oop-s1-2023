#include <iostream>

extern int num_count(int[], int, int);

int main() {
    int array[5] = {4, -2, 4, -1, 6};
    int number = 4;
    std::cout << "There are " << num_count(array, 5, number) << " " << number << "'s in the array. " <<  std::endl;
    return 0;
}