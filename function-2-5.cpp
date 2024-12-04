#include <stdbool.h>

bool is_descending(int array[], int n) {
        if (n < 1) {
        return false;
    }

    bool descending = true;
    int i = 0;

    while (descending && i < n - 1) {
        if (array[i+1] > array[i]) {
            descending = false;
        }
        i++;
    }

    if (descending) {
        return true;
    } else {
        return false;
    }
}