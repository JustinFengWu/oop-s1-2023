#include <iostream>

void print_pass_fail(char grade) {
    if (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'E') {
        std::cout << "Grade invalid\n" << std::endl;
    }

    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            std::cout << "Pass\n" << std::endl;
            break;
        case 'D':
        case 'E':
            std::cout << "Fail\n" << std::endl;
            break;
        default:
            break;
    }
    return;
}