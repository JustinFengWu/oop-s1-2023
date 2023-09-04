#include "Appliance.h"
#include "TV.h"
#include "Fridge.h"
#include "House.h"
#include <iostream>

int main() {
    TV tv1(10, 100);
    TV tv2(10, 100);
    Fridge f1(10, 100);
    Fridge f2(10, 100);

    House h(4);
    h.addAppliance(&tv1);
    h.addAppliance(&tv2);
    h.addAppliance(&f1);
    h.addAppliance(&f2);

    std::cout << h.getTotalPowerConsumption() << std::endl;

    return 0;
}