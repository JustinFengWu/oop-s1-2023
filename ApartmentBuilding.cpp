#include "ApartmentBuilding.h"

#include <stdbool.h>

#include "Unit.h"

ApartmentBuilding::ApartmentBuilding() { 
    int capacity = 0;
    int current_size = 0;
 }


ApartmentBuilding::ApartmentBuilding(int capacity) {
  this->capacity = capacity;
  Unit* rooms = new Unit[capacity];
  int current_size = 0;
}


int ApartmentBuilding::get_capacity() {
    return capacity; 
}


Unit* ApartmentBuilding::get_contents(){
    return rooms;
};


bool ApartmentBuilding::add_unit(Unit unit){
    if (current_size >= capacity) {
        return false;
    }
    rooms[current_size] = unit;
    current_size++;
    return true;
}

~ApartmentBuilding() {
    delete[] rooms;
}