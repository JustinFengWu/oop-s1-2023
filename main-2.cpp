#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"
#include <iostream>

int main() {
    Ship ship(10, 20, 'E');
    Mine mine(10, 20, 'E');
    Explosion explosion(10, 20, 'E');

    std::cout << "The position of the ship is: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;
    std::cout << "The type is: " << ship.getType() << std::endl;

    explosion.apply(ship);

    std::cout << "The position of the ship is now: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << std::endl;
    std::cout << "The type is: " << ship.getType() << std::endl;
    return 0;
}