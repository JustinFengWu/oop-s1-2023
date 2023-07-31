void print_scaled(int[3][3], int);

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 1, 1},
    };

    print_scaled(matrix, 3);

    return 0;
}