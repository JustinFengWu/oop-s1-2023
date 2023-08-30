#include "Vehicle.h"
#include "ParkingLot.h"
#include <iostream>
#include <stdbool.h> 

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity){
    this->currentCount = 0;
    vehicles = new Vehicle*[maxCapacity];
    for (int i = 0; i < maxCapacity; i++) {
        vehicles[i] = nullptr;
    }
}

void ParkingLot::parkVehicle(Vehicle* object) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return;
    }
    for (int i = 0; i < maxCapacity; i++) {
        if (vehicles[i] == nullptr) {
            vehicles[i] = object;
            currentCount++;
            std::cout << "Success parked" << std::endl;
            return;  // Exit the loop after parking successfully
        }
    }

    std::cout << "Failed" << std::endl;
        /*vehicles[currentCount] = object;
        currentCount++;*/
}

    


int ParkingLot::getCount(){
    return currentCount;
}

void ParkingLot::unparkVehicle(int ID){
    bool found = false;

    for (int i = 0; i < maxCapacity; i++) {
        if (vehicles[i] != nullptr && vehicles[i]->getID() == ID){
            vehicles[i] = nullptr;
            std::cout << "successfully unparked" << std::endl;
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
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            overstayedVehicles++;
        }
    }
    return overstayedVehicles;
}

int ParkingLot::getTime(int index) {
    return vehicles[index]->getParkingDuration();
}