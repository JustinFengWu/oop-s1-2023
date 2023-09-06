#include "AirCraft.h"

AirCraft::AirCraft() {}

AirCraft::AirCraft(int w) : weight(w) {
    fuel = 100;
    numberOfFlights = 0;

}

void AirCraft::refuel() {
    fuel = 100;
}   

void AirCraft::fly(int headwind, int minutes) {
    numberOfFlights++;
}

float AirCraft::get_fuel() {
    return fuel;
}

void AirCraft::set_fuel( float fuel ) {
    this->fuel = fuel;
}

int AirCraft::get_numberOfFlights() {
    return numberOfFlights;
}

void AirCraft::set_numberOfFlights(int numberOfFlights) {
    this->numberOfFlights = numberOfFlights;
}

int AirCraft::get_weight() {
    return weight;
}

void AirCraft::set_weight(int weight) {
    this->weight = weight;
}
