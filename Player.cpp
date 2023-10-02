#include "Player.h"
#include "Pot.h"
#include "Ingredient.h"
#include <ctype.h>
#include <ctime>
#include "IngredientList.h"
#include <iostream>
#include <algorithm>
#include <iostream>

Player::Player(int inventorySize, int storageSize) {
    this->inventorySize = inventorySize;
    this->storageSize = storageSize;
    health = 100;
    fatigue = 0;
    adrenaline = 0;
    resistance = 0;
    arcana = 0;
    location = "box";
    playerTime = 0;
    inventory = new Ingredient * [inventorySize];
    currentNumberIngredients = 0;
    vialStorage = new Pot * [storageSize];
    currentNumberVials = 0;
}
Player::~Player() {
    for (int i = 0; i < inventorySize; i++) {
        delete inventory[i];
    }
    delete[] inventory;

    for (int i = 0; i < storageSize; i++) {
        delete vialStorage[i];
    }
    delete[] vialStorage;
}

int Player::get_health() {
    return health;
}
void Player::set_health(int health) {
    this->health = health;
}

int Player::get_fatigue() {
    return fatigue;
}
void Player::set_fatigue(int fatigue) {
    this->fatigue = fatigue;
}

int Player::get_adrenaline() {
    return adrenaline;
}
void Player::set_adrenaline(int adrenaline) {
    this->adrenaline = adrenaline;
}

int Player::get_resistance() {
    return resistance;
}
void Player::set_resistance(int resistance) {
    this->resistance = resistance;
}

int Player::get_arcana() {
    return arcana;
}
void Player::set_arcana(int arcana) {
    this->arcana = arcana;
}

std::string Player::get_location() {
    return location;
}
void Player::set_location(std::string location) {
    this->location = location;
}

int Player::get_playerTime() {
    return playerTime;
}
void Player::set_playerTime(int playerTime) {
    this->playerTime = playerTime;
}

int Player::get_currentNumberIngredients() {
    return currentNumberIngredients;
}
int Player::get_currentNumberVials() {
    return currentNumberVials;
}

void Player::get_ingredients(int inventorySize, IngredientList list) {
    for (int i = 0; i < inventorySize; i++) {
        if (inventory[i] == nullptr) {
            std::srand(std::time(nullptr));
            int randomNumber = std::rand() % 4 + 1;
            inventory[i] = list.get_ingredient(randomNumber);
        } 
    }
}
void Player::dump_ingredient(int index) {
    delete inventory[index];
    inventory[index] = nullptr;

}
void Player::eat_ingredient(int index) {
    int damageLevel = (inventory[index]->get_lethalius())*(1 - (resistance/100))/10;

    if (inventory[index]->get_isCursed() == false) {
    health -= ((damageLevel % 2) + (damageLevel / 2))* 2;

    } else {
    health += ((damageLevel % 2) + (damageLevel / 2))* 2;
    }


    fatigue += inventory[index]->get_melatonius() * (1 - (resistance/100))*0.1;
    adrenaline += inventory[index]->get_adrenalius() * (1 - (resistance/100))*0.1;
    resistance += inventory[index]->get_tankius() * (1 - (resistance/100))*0.1;
    arcana += inventory[index]->get_lethalius() * (1 - (resistance/100))*0.1;

    fatigue = std::max(fatigue, 100);
    adrenaline = std::max(adrenaline, 100);
    resistance = std::max(resistance, 100);
    arcana = std::max(resistance, 100);

    if (fatigue < 0 ) {
        fatigue = 0;
    } else if ( adrenaline < 0 ) {
        adrenaline = 0;
    } else if (resistance < 0 ) {
        resistance = 0;
    } else if ( arcana < 0 ) {
        arcana = 0;
    }

    if ( 0 <= inventory[index]->get_lethalius() <= 20 ) {
        std::cout << "My mouth feels tingly... " << std::endl;
    } else if ( 20 < inventory[index]->get_lethalius() <= 40 ) {
        std::cout << "Wow! That's spicy... " << std::endl;
    } else if ( 40 < inventory[index]->get_lethalius() <= 60 ) {
        std::cout << "My stomach hurts... " << std::endl;
    } else if ( 60 < inventory[index]->get_lethalius() <= 80 ) {
        std::cout << "This could give me food poisoning... " << std::endl;
    } else if ( 80 < inventory[index]->get_lethalius() <= 100 ) {
        std::cout << "This could definitely kill me... " << std::endl;
    }

    if ( 0 <= inventory[index]->get_melatonius() <= 20 ) {
        std::cout << "This could make me slightly tired... " << std::endl;
    } else if ( 20 < inventory[index]->get_melatonius() <= 40 ) {
        std::cout << "This could make me tired... " << std::endl;
    } else if ( 40 < inventory[index]->get_melatonius() <= 60 ) {
        std::cout << "This could make me slightly sleepy... " << std::endl;
    } else if ( 60 < inventory[index]->get_melatonius() <= 80 ) {
        std::cout << "This could make me sleepy... " << std::endl;
    } else if ( 80 < inventory[index]->get_melatonius() <= 100 ) {
        std::cout << "This could put me straight to sleep... " << std::endl;
    }

    if ( 0 <= inventory[index]->get_adrenalius() <= 20 ) {
        std::cout << "I don't feel anything... " << std::endl;
    } else if ( 20 < inventory[index]->get_adrenalius() <= 40 ) {
        std::cout << "This makes me feel awake... " << std::endl;
    } else if ( 40 < inventory[index]->get_adrenalius() <= 60 ) {
        std::cout << "This makes me feel strong... " << std::endl;
    } else if ( 60 < inventory[index]->get_adrenalius() <= 80 ) {
        std::cout << "Why is eveything now in slow motion? " << std::endl;
    } else if ( 80 < inventory[index]->get_adrenalius() <= 100 ) {
        std::cout << "Ooww this takes a toll on my heart... " << std::endl;
    }

    if ( 0 <= inventory[index]->get_tankius() <= 20 ) {
        std::cout << "My skin feels rough... " << std::endl;
    } else if ( 20 < inventory[index]->get_tankius() <= 40 ) {
        std::cout << "My skin feels thicker... " << std::endl;
    } else if ( 40 < inventory[index]->get_tankius() <= 60 ) {
        std::cout << "I'm losing my sense of taste... " << std::endl;
    } else if ( 60 < inventory[index]->get_tankius() <= 80 ) {
        std::cout << "I'm can barely feel anything... " << std::endl;
    } else if ( 80 < inventory[index]->get_tankius() <= 100 ) {
        std::cout << "I can't feel anything... " << std::endl;
    }

    if ( 0 <= inventory[index]->get_luckius() <= 20 ) {
        std::cout << "This emits a feeling of impending doom...  " << std::endl;
    } else if ( 20 < inventory[index]->get_luckius() <= 40 ) {
        std::cout << "This makes me feel kind of bad... " << std::endl;
    } else if ( 40 < inventory[index]->get_luckius() <= 60 ) {
        std::cout << "This makes me feel good... " << std::endl;
    } else if ( 60 < inventory[index]->get_luckius() <= 80 ) {
        std::cout << "This makes me feel great... " << std::endl;
    } else if ( 80 < inventory[index]->get_luckius() <= 100 ) {
        std::cout << "I feel godly... " << std::endl;
    }

 // state the effects of the damn ingredients. Going to need a shit load of if statements and outputs.

}
void Player::pour(Pot * pot, int storageSize) {
    for (int i = 0; i < storageSize; i++) {
        if ( vialStorage[i] = nullptr ) {
            vialStorage[i]->set_lethalius(pot->get_lethalius());
            vialStorage[i]->set_melatonius(pot->get_melatonius());
            vialStorage[i]->set_adrenalius(pot->get_adrenalius());
            vialStorage[i]->set_tankius(pot->get_tankius());
            vialStorage[i]->set_luckius(pot->get_luckius());
        }
    }
}

void Player::change_location() {
    if (location == "box") {
        location = "pot";
    } else {
        location = "box";
    }
}
