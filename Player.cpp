#include "Player.h"
#include <ctype.h>

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
    inventory = new Ingredient * [ingredientSize];
    currentNumberIngredients = 0;
    vialStorage = new Vial * [storageSize];
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

void Player::get_ingredients() {
    // generates a random five ingredients from ingredient list into wherever there are nullptrs.
}
void Player::dump_ingredient(int index) {
    // dump selected index ingredient. can be operated repeatedly
}
void Player::eat_ingredient(int index) {
    // dump selected index ingredient. can be operated repeatedly
}
void Player::pour() {
    // require class pot and inherited class vials
}

void Player::add_ingredient() {
    // adds ingredient to pot
}
void Player::change_location() {
    if (location == "box") {
        location = "pot";
    } else {
        location = "box";
    }
}
