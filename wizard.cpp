#include <iostream>
#include <string>

#include "Wizard.h"
#include "Player.h"

Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage) {
  this->mana = mana;
}

void Wizard::setMana(int mana) { this->mana = mana; }
 
int Wizard::getMana() { return mana; }

void Wizard::castSpell(Player* opponent) {
  opponent->takeDamage(mana);
  std::cout << "Wizard casted a spell and dealt " << mana << "damage!"
            << std::endl;
}
