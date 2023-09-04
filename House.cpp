#include "House.h"
#include "Appliance.h"
#include <stdbool.h>

House::House() {
    appliances = new Appliance*[0];
}

House::House(int numAppliances) : numAppliances(numAppliances) {
    appliances = new Appliance*[numAppliances];
    currentNum = 0;
}

bool House::addAppliance(Appliance* appliance){
    if (currentNum < numAppliances) {
        appliances[currentNum] = appliance;
        return true;
    } else if ( currentNum >= numAppliances) {
        return false;
    }
}

double House::getTotalPowerConsumption() {
    double totalPowerConsumption;
    for (int i = 0; i < currentNum; ) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}