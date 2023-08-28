#include <ctime>
#include "Car.h"
#include "Vehicle.h"

Car::Car(int ID) : Vehicle(ID) { std::time(&timeOfEntry); };

int Car::getParkingDuration(){
    std::time_t currentTime = std::time(nullptr);

    std::time_t elapsedTime = currentTime - timeOfEntry;

    return elapsedTime;
};