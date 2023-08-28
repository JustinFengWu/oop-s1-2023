#include <iostream>
#include <string>

#include "player.h"
#include "warrior.h"

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

void Warrior::setWeapon(std::string weapon){
    this->weapon = weapon;
}

std::string Warrior::getWeapon(){
    return weapon;
}


void Warrior::swingWeapon(Player* opponent) {
  opponent->takeDamage(damage);
  std::cout << "Warrior swung the " << weapon << " and dealt " << damage
            << "damage!" << std::endl;
}
