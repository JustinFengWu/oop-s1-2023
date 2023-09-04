#include <stdbool.h>
#include "Appliance.h"
#include "TV.h"
#include <iostream>

int main() {
    TV tv(10, 100);
    std::cout << tv.getPowerConsumption() << std::endl;
    std::cout << tv.getScreenSize() << std::endl;
    std::cout << tv.get_powerRating() << std::endl;
    return 0;
}