#include "AirCraft.h"
#include "Helicopter.h"

Helicopter::Helicopter() {}

Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {}

void Helicopter::fly(int headwind, int minutes) {
    float usedFuel = 0;
    int weightOver = 0;
    if (weight > 5670) {
        weightOver = weight - 5670;
    }

    if (headwind >= 40) {
        usedFuel = (0.4*minutes) + (0.01*weightOver*minutes);
    } else {
        usedFuel = (0.2*minutes) + (0.01*weightOver*minutes);
    }

    if (fuel - usedFuel >= 20) {
        fuel -= usedFuel;
        numberOfFlights++;
    }

}

void Helicopter::set_name(std::string name) {
    this->name = name;
}

std::string Helicopter::get_name() {
    return name;
}