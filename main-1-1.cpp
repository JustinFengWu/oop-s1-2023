#include <iostream>
#include "Unit.h"

int main() {
    Unit u1(10, 5, 100);
    std::cout << "There are " << u1.get_Number_Bedrooms() << " beds in the apartment." << std::endl;
    std::cout << "The Apartment is worth: " << u1.get_Value() << " dollars." << std::endl;
    std::cout << "The Apartment has a size of " << u1.get_Area() << " square meters. " << std::endl;
    return 0;
}