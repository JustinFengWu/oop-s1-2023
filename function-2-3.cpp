#include <stdbool.h>

int sum_array_elements(int integers[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += integers[i];
    }
    return sum;
}

bool is_palindrome(int integers[], int length) {
    bool palindrome = true;
    for (int i = 0; i < length/2; i++) {
        if (integers[i] != integers[length - i - 1]) {
            palindrome = false;
            return palindrome;
        }
    }
    return palindrome;
}

int sum_if_palindrome(int integers[], int length) {
    if (length < 1) {
        return -1;
    }
    if (is_palindrome(integers, length)) {
        return sum_array_elements(integers, length);
    } else {
        return -2;
    }
}