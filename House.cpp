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
    } else {
        return false;
    }
}

double House::getTotalPowerConsumption() {
    double totalPowerConsumption = 0;
    for (int i = 0; i < currentNum; i++) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}

House::~House() {
    delete[] appliances; // Deallocate the dynamically allocated memory
}