#include <stdbool.h>
#include <iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"

int main() {
    ApartmentBuilding ap1(10);
    Unit u1(0, 0, 0);
    Unit u2(1, 2, 3);
    Unit u3(3, 4, 5);

    if (ap1.add_Unit(u1)) {
        std::cout << "Sucessfully Added." << std::endl;
    } else {
        std::cout << "failed to add. " << std::endl;
    }

    if (ap1.add_Unit(u2)) {
        std::cout << "Sucessfully Added." << std::endl;
    } else {
        std::cout << "failed to add. " << std::endl;
    }

    if (ap1.add_Unit(u3)) {
        std::cout << "Sucessfully Added." << std::endl;
    } else {
        std::cout << "failed to add. " << std::endl;
    }

    Unit * room = ap1.get_Contents();

    int current_sizes = ap1.get_Current_Number_of_Units();
    
    for (int i = 0; i < current_sizes; i++){
        std::cout << room[i].get_Value() << std::endl;
    }

    std::cout << "The Apartment has " << ap1.get_Capacity() << " units." << std::endl;
    
    return 0;
}