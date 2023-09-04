#include <stdbool.h>
#include "Appliance.h"
#include "Fridge.h"
#include <iostream>

int main() {
    Fridge f(10, 100);
    std::cout << f.getPowerConsumption() << std::endl;
    std::cout << f.getVolume() << std::endl;
    std::cout << f.get_powerRating() << std::endl;
    return 0;
}