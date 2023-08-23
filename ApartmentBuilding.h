#ifndef APARTMENT_H
#define APARTMENT_H

#include "Unit.h"
#include <stdbool.h>

class ApartmentBuilding{
private:
    int capacity;
    Unit * rooms;
    int current_size;

public:
    ApartmentBuilding();
    ApartmentBuilding(int capacity);
    int get_Current_Number_of_Units();
    int get_Capacity();
    Unit * get_Contents;
    bool add_Unit(Unit unit);
    ~ApartmentBuilding();

    
};

#endif
