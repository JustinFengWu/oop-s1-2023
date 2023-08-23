#include <stdbool.h>
#include <iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"

int main() {
    ApartmentBuilding ap1(10);
    Unit u1(0, 0, 0);

    if (ap1.add_Unit(u1)) {
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