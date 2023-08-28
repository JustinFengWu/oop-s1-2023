#include "warrior.h"
#include "wizard.h"
#include "player.h"
#include <string>
#include <iostream>

int main() {
    Wizard w1 ("The Great Sage", 30, 10, 5);
    Warrior wa ("The Darkest nite", 45, 5, "Hasagi");
    Player opponent ("Evil Guy", 40, 10);

    while (w1.getHealth() > 0 || wa.getHealth() > 0) {
            w1.castSpell(&wa);
            wa.swingWeapon(&w1);
            std::cout << w1.getHealth() << std::endl;
            std::cout << wa.getHealth() << std::endl;
    }

    if ( w1.getHealth() > wa.getHealth()) {
        std::cout << "wizard wins" << std::endl;
    } else {
        std::cout << "warior wins" << std::endl;
    }

    return 0;
}