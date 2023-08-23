#include "ApartmentBuilding.h"

#include <stdbool.h>

#include "Unit.h"

ApartmentBuilding::ApartmentBuilding() { 
    int capacity = 0;
    int current_size = 0;
    Unit * rooms;
 }


ApartmentBuilding::ApartmentBuilding(int capacity) {
  this->capacity = capacity;
  Unit* rooms = new Unit[capacity];
  int current_size = 0;
}


int ApartmentBuilding::get_Capacity() {
    return capacity; 
}


Unit* ApartmentBuilding::get_Contents() {
    return rooms;
};


bool ApartmentBuilding::add_Unit(Unit unit){
    if (current_size >= capacity) {
        return false;
    }
    rooms[current_size] = unit;
    current_size++;
    return true;
}


int ApartmentBuilding::get_Current_Number_of_Units(){
    return current_size;
}

ApartmentBuilding::~ApartmentBuilding() {
    delete[] rooms;
}