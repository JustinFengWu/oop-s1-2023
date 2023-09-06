#include "AirCraft.h"
#include "Helicopter.h"
#include <iostream>
#include <string>

int main() {
    Helicopter h(5670, "BlackBird");
    h.set_fuel(80);
    h.set_weight(5690);
    h.fly(45, 10);
    std::cout << h.get_fuel() << std::endl;
    return 0;
}