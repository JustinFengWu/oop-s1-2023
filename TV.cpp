#include "Appliance.h"
#include "TV.h"
#include <stdbool.h>

TV::TV() {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() {
    return screenSize;
}

double TV::getPowerConsumption() {
    double powerConsumption = powerRating * (screenSize / 10);
    return powerConsumption;
}