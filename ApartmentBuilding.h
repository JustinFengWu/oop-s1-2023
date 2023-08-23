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
    int get_capacity();
    Unit * get_contents;
    bool add_unit(Unit unit);
    ~ApartmentBuilding();

    
};

#endif
