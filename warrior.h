#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"
#include <string>
#include <iostream>

class Warrior :  public Player {
    private:
        std::string weapon;
    public:
        Warrior(std::string name, int health, int damage, std::string weapon);
        void swingWeapon(Player* opponent);
        std::string getWeapon();
        void setWeapon(std::string weapon);
};

#endif