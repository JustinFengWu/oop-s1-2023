#include <math.h>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int power = number_of_digits;
    int sum = 0;
    for (int i = 0; i < number_of_digits; i++) {
        sum += pow(2, power)*binary_digits[i];
        power--;
    }

    return sum;
}