#include <iostream>

void count_digits(int array[4][4]){
    for (int i = 0; i < 9; i++) {
        int counter = 0;
        for (int j = 0; j < 4; j++) {
            for (int z = 0; z < 4; z++){
                if (array[j][z] == i) {
                    counter++;
                }
            }
        }
        std::cout << i << ":" << counter << ";";
    }
    std::cout << std::endl;
}