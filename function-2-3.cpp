#include <stdbool.h>

bool is_array_palindrome(int integers[], int length) {
    bool is_palindrome = true;
    for (int i = 0; i < length/2; i++) {
        if (integers[i] != integers[length - 1 - i]) {
            is_palindrome = false;
            return is_palindrome;
        };
    };
    return is_palindrome;
}

int sum_integers(int integers[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += integers[i];
    };
    return sum;
}

int palindrome_sum(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    bool is_palindrome = is_array_palindrome(integers, length);
    if (is_palindrome == false) {
        return -2;
    } else {
        return sum_integers(integers, length);
    }
}