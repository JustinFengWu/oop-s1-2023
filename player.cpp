#include <string>
#include "player.h"
#include <iostream>

Player::Player(std::string name, int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
}
void Player::attack(Player* opponent, int damage){
    opponent->health -= damage;
    std::cout << "Dealt " << damage << " damage!" << std::endl;
}
void Player::takeDamage(int damage){
    this->health -= damage;
    std::cout << "Took " << damage << " damage!" << std::endl;
}

void Player::setHealth(int health){
    this->health = health;
}
int Player::getHealth(){
    return health;
}

void Player::setDamage(int damage){
    this->damage = damage;
}
int Player::getDamage(){
    return damage;
}

void Player::setName(std::string name){
    this->name = name;
}
std::string Player::getName(){
    return name;
}