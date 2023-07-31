#include <iostream>

int sum_array_elements(int[6], int);
bool is_palindrome(int[6], int);
int sum_if_palindrome(int[6], int);

int main() {
    int length = 6;
    int array[6] = {1, 2, 3, 3, 2, 1};
    std::cout << sum_if_palindrome(array, length) << std::endl;
    return 0;
}