#include <ctime>
#include "Motorbike.h"
#include "Vehicle.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) { };

int Motorbike::getParkingDuration(){
    std::time_t currentTime = std::time(nullptr);

    int elapsedTime = currentTime - timeOfEntry;

    return (elapsedTime*0.85);
};