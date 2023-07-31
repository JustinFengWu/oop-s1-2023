#include <iostream>

int is_identity(int[10][10]);

int main() {
    int matrix[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
    std::cout << is_identity(matrix) << std::endl;
}