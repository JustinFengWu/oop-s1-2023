#include <stdbool.h>
#include "Ingredient.h"
#include <string>

Ingredient::Ingredient(int id, std::string name, int lethalius, int melatonius, int adrenalius, int tankius, int luckius, double freshness, bool isCursed) : Explosive() {
    this->id = id;
    this->name = name;

    this->isCursed = isCursed;
    this->freshness = freshness;
    if (isCursed == true) {
        this->lethalius = lethalius * freshness * -1;
        this->melatonius = melatonius * freshness * -1;
        this->adrenalius = adrenalius * freshness * -1;
        this->tankius = tankius * freshness * -1;
        this->luckius = luckius * freshness * -1;
    } else {
        this->lethalius = lethalius * freshness;
        this->melatonius = melatonius * freshness;
        this->adrenalius = adrenalius * freshness;
        this->tankius = tankius * freshness;
        this->luckius = luckius * freshness;
    }
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