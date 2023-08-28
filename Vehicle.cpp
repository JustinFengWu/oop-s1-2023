#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int ID) : ID(ID) {timeOfEntry = std::time(nullptr);}

int Vehicle::getID(){ return ID; }

int Vehicle::getParkingDuration(){
    std::time_t currentTime;
    std::time(&currentTime);

    std::time_t elapsedTime = currentTime - timeOfEntry;

    return elapsedTime;
};