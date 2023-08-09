#include <iostream>

int sum_integers(int[], int);
int is_array_palindrome(int[], int);
int palindrome_sum(int[], int);

int main() {
    int integers[6] = {1, 2, 3, 3, 2, 1};
    std::cout << palindrome_sum(integers, 6) << std::endl;
}