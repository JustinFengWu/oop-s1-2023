#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
#include <iostream>

int main() {
    AirFleet af;

    for ( int i = 0; i < 5; i++) {
        std::cout << af.get_fleet()[i]->get_weight() << std::endl;
    }

    return 0;
}