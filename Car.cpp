#include <ctime>
#include "Car.h"
#include "Vehicle.h"

Car::Car(int ID) : Vehicle(ID) {};

int Car::getParkingDuration(){
    std::time_t currentTime = std::time(nullptr);

    int elapsedTime = currentTime - timeOfEntry;
    /*int elapsedTime = difftime(currentTime, timeOfEntry);*/

    return (elapsedTime*0.9);
};