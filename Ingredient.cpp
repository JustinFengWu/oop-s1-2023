#include <stdbool.h>
#include "Ingredient.h"
#include <string>

Ingredient::Ingredient(int id, std::string name, int lethalius, int melatonius, int adrenalius, int tankius, int luckius, double freshness, bool isCursed) : Explosive() {
            this->id = id;
            this->name = name;
            this->lethalius = lethalius;
            this->melatonius = melatonius;
            this->adrenalius = adrenalius;
            this->tankius = tankius;
            this->luckius = luckius;
            this->freshness = freshness;
            this->isCursed = isCursed;
        }

int Ingredient::get_id() {
    return id;
}
void Ingredient::set_id(int id) {
    this->id = id;
}

std::string Ingredient::get_name() {
    return name;
}
void Ingredient::set_name(std::string name) {
    this->name = name;
}

int Ingredient::get_lethalius() {
    return lethalius;
}
void Ingredient::set_lethalius(int lethalius) {
    this->lethalius = lethalius;
}

int Ingredient::get_melatonius() {
    return melatonius;
}
void Ingredient::set_melatonius(int melatonius) {
    this->melatonius = melatonius;
}

int Ingredient::get_adrenalius() {
    return adrenalius;
}
void Ingredient::set_adrenalius(int adrenalius) {
    this->adrenalius = adrenalius;
}

int Ingredient::get_tankius() {
    return tankius;
}
void Ingredient::set_tankius(int tankius) {
    this->tankius = tankius;
}

int Ingredient::get_luckius() {
    return luckius;
}
void Ingredient::set_luckius(int luckius) {
    this->luckius = luckius;
}

double Ingredient::get_freshness() {
    return freshness;
}
void Ingredient::set_freshness(double freshness) {
    this->freshness = freshness;
}

bool Ingredient::get_isCursed() {
    return isCursed;
}
void Ingredient::set_isCursed(bool isCursed) {
    this->isCursed = isCursed;
}