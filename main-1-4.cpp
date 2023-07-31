#include <iostream>

void print_scaled(int[3][3], int);

int main() {
    int scale = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print_scaled(matrix, scale);
    return 0;
}