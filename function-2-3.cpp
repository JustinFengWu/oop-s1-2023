#include <iostream>

void two_five_nine(int array[], int n) {
    int two_counter = 0;
    int five_counter = 0;
    int nine_counter = 0;

    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                two_counter++;
                break;
            case 5:
                five_counter++;
                break;
            case 9:
                nine_counter++;
                break;
            default:
                break;
        }
    }
    std::cout << "2:" << two_counter << ";5:" << five_counter << ";9:" << nine_counter << ";\n" << std::endl;

    return;

}