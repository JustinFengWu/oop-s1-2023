#include <ctime>
#include "Motorbike.h"
#include "Vehicle.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) { timeOfEntry = std::time(nullptr); };

int Motorbike::getParkingDuration(){
    std::time_t currentTime = std::time(nullptr);

    std::time_t elapsedTime = currentTime - timeOfEntry;

    return elapsedTime;
};