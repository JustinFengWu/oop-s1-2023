#include <ctime>
#include "Bus.h"
#include "Vehicle.h"

Bus::Bus(int ID) : Vehicle(ID) {};

int Bus::getParkingDuration(){
    std::time_t currentTime = std::time(nullptr);

    int elapsedTime = currentTime - timeOfEntry;
    /*int elapsedTime = difftime(currentTime, timeOfEntry);*/

    return (elapsedTime*0.75);
};