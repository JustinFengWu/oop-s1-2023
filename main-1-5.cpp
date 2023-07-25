#include <iostream>

extern int count_evens(int);

int end = 10;

int main() {
    std::cout << "There are " << count_evens(end) << " even numbers betwee 1 and " << end << std::endl;
    return 0;
}