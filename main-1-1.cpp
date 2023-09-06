#include "AirCraft.h"
#include <iostream>

int main() {
    AirCraft ac(100);
    std::cout << ac.get_numberOfFlights() << std::endl;
    return 0;
}
