#include <iostream>
#include "Unit.h"

int main() {
    Unit u1(10, 5, 100);
    std::cout << "There are " << u1.get_number_bedrooms() << " beds in the apartment." << std::endl;
    std::cout << "The Apartment is worth: " << u1.get_value() << " dollars." << std::endl;
    std::cout << "The Apartment has a size of " << u1.get_area() << " square meters. " << std::endl;
    return 0;
}