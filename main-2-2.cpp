#include "AirCraft.h"
#include "Airplane.h"
#include <iostream>

int main() {
    Airplane A(5670, 100);
    A.set_fuel(95);
    A.set_weight(5690);
    A.fly(65, 120);
    std::cout << A.get_fuel() << std::endl;
    return 0;
}