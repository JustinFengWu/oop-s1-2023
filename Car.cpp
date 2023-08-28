#include <ctime>
#include "Car.h"
#include "Vehicle.h"

Car::Car(int ID) : Vehicle(ID) { timeOfEntry = std::time(nullptr);  };

int Car::getParkingDuration(){
    std::time_t currentTime = std::time(nullptr);

    std::time_t elapsedTime = currentTime - timeOfEntry;

    return (elapsedTime*0.9);
};