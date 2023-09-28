#include "Pot.h"
#include "Ingredient.h"

Pot::Pot() {
    lethalius = 0;
    melatonius = 0;
    adrenalius = 0;
    tankius = 0;
    luckius = 0;
}
int Pot::get_lethalius() {
    return lethalius;
}
void Pot::set_lethalius(int lethalius) {
    this->lethalius = lethalius;
}

int Pot::get_melatonius() {
    return melatonius;
}
void Pot::set_melatonius(int melatonius) {
    this->melatonius = melatonius;
}

int Pot::get_adrenalius() {
    return adrenalius;
}
void Pot::set_adrenalius(int adrenalius) {
    this->adrenalius = adrenalius;
}

int Pot::get_tankius() {
    return tankius;
}
void Pot::set_tankius(int tankius) {
    this->tankius = tankius;
}

int Pot::get_luckius() {
    return luckius;
}
void Pot::set_luckius(int luckius) {
    this->luckius = luckius;
}

void Pot::dilute() {
    lethalius *= 0.9;
    melatonius *= 0.9;
    adrenalius *= 0.9;
    tankius *= 0.9;
    luckius *= 0.9;
}
void Pot::boil() {
    lethalius *= 1.1;
    melatonius *= 1.1;
    adrenalius *= 1.1;
    tankius *= 1.1;
    luckius *= 1.1;
}

void Pot::dump() {
    lethalius = 0;
    melatonius = 0;
    adrenalius = 0;
    tankius = 0;
    luckius = 0;
}

void Pot::add_ingredient(Ingredient * ingredient) {
    lethalius += ingredient->get_lethalius();
    melatonius += ingredient->get_melatonius();
    adrenalius += ingredient->get_adrenalius();
    tankius += ingredient->get_tankius();
    luckius += ingredient->get_luckius();
}