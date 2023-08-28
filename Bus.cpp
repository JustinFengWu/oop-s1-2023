#include <ctime>
#include "Bus.h"
#include "Vehicle.h"

Bus::Bus(int ID) : Vehicle(ID) { timeOfEntry = std::time(nullptr); };

int Bus::getParkingDuration(){
    std::time_t currentTime = std::time(nullptr);

    std::time_t elapsedTime = currentTime - timeOfEntry;

    return elapsedTime;
};