#include "Musician.h"

Musician::Musician() {
    experienc = 0;
    instrumen = "null";
}

Musician::Musician(std::string inst, int exp) {
    instrument = inst;
    experience = exp;
}

std::string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience() {
    return experience;
}
 