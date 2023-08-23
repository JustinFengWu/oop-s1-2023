#include <stdbool.h>
#include <iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"

int main() {
    ApartmentBuilding ap1(10);
    Unit u1(1, 2, 3);
    Unit u2(4, 5, 6);
    Unit u3(7, 8, 9);

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

    Unit *rooms = ap1.get_Contents();

    int current_size = ap1.get_Current_Number_of_Units();
    for (int i = 0; i < current_size; i++){
        std::cout << rooms[i].get_Value() << std::endl;
    }

    std::cout << "The Apartment has " << ap1.get_Capacity() << " units." << std::endl;
    
    return 0;
}