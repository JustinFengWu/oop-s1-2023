#include "AirCraft.h"
#include "Airplane.h"

Airplane::Airplane(){}

Airplane::Airplane(int w, int p) : AirCraft(w), numPassengers(p) {}

void Airplane::reducePassengers(int x) {
    if (numPassengers - x <= 0) {
        numPassengers = 0;
    } else {
        numPassengers -= x;
    }
}

int Airplane::get_numPassengers() {
    return numPassengers;
}

void Airplane::set_numPassengers(int numPassengers) {
    this->numPassengers = numPassengers;
}

void Airplane::fly(int headwind, int minutes) {

    float usedFuel = 0;

    if (headwind >= 60) {
        usedFuel = (0.5*minutes) + (0.001*numPassengers*minutes);
    } else {
        usedFuel = (0.3*minutes) + (0.001*numPassengers*minutes);
    }

    if (fuel - usedFuel >= 20) {
        fuel -= usedFuel;
        numberOfFlights++;
    }

}