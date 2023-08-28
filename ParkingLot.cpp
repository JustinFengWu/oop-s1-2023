#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>
#include <stdbool.h> 

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity){
    this->currentCount = 0;
    vehicles = new Vehicle*[maxCapacity];
}

void ParkingLot::parkVehicle(Vehicle * object){
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
    } else {
        vehicles[currentCount] = object;
        currentCount++;
    }

}

int ParkingLot::getCount(){
    return currentCount;
}

void ParkingLot::unparkVehicle(int ID){
    bool found = false;

    for (int i = 0; i < maxCapacity; i++) {
        if (vehicles[i]->getID() == ID){
            delete vehicles[i];
            currentCount--;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
    
}

ParkingLot::~ParkingLot() {
    delete[] vehicles;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int overstayedVehicles = 0;
    for (int i = 0; i < maxCapacity; i++){
        if (vehicles[i]->getParkingDuration() > maxParkingDuration + 15) {
            overstayedVehicles++;
        }
    }
    return overstayedVehicles;
}