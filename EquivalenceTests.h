// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
        testBigPositiveIntegers();
        testBigNegativeIntegers();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 succeeded!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        } else {
            std::cout << "Test 2 suceeded!" << std::endl;
        }
    }

    void testMixedIntegers() {
        Addition addition;
        if (addition.add(-4, 5) != 1) {
            std::cout << "Test 3 failed!" << std::endl;
        } else {
            std::cout << "Test 3 suceeded!" << std::endl;
        }
    }

    void testBigPositiveIntegers() {
        Addition addition;
        if (addition.add(123400, 19840992) != 19964392) {
            std::cout << "Test 4 failed!" << std::endl;
        } else {
            std::cout << "Test 4 suceeded!" << std::endl;
        }
    }

    void testBigNegativeIntegers() {
        Addition addition;
        if (addition.add(-123400, -19840992) != -19964392) {
            std::cout << "Test 5 failed!" << std::endl;
        } else {
            std::cout << "Test 5 suceeded!" << std::endl;
        }
    }


    // Add other test functions here
};