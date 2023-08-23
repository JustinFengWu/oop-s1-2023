#ifndef APARTMENT_H
#define APARTMENT_H

#include "Unit.h"

class ApartmentBuilding{
private:
    int capacity;

public:
    ApartmentBuilding();
    ApartmentBuilding(int capacity);
    int get_capacity();
    Unit * get_contents;
    
};

#endif
