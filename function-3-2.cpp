#include <iostream>
#include <stdbool.h>

int * readNumbers() {
    int * number = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "enter a number please: ";
        std::cin >> number[i];
    }

    return number;
}


int *reverseArray(int *numbers1,int length) {
    int *reverse = new int[10];
    for (int i = 0; i < length; i++) {
        reverse[i] = numbers1[length - 1 - i];
    }

    return reverse;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    bool same = true;
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            bool same = false;
            return same;
        }
    }
    return same;
}