#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 succeed!" << std::endl;
        }

        if (addition.add(4, 5) != 9) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 succeed!" << std::endl;
        }

        if (addition.add(10, 100) != 110) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 succeed!" << std::endl;
        }
        // Add more tests here
    }
};