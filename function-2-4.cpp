#include <stdbool.h>

bool is_ascending(int array[], int n) {
        if (n < 1) {
        return false;
    }

    bool ascending = true;
    int i = 0;

    while (ascending && i < n - 1) {
        if (array[i+1] < array[i]) {
            ascending = false;
        }
        i++;
    }

    if (ascending) {
        return true;
    } else {
        return false;
    }
}