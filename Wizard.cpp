#include "Wizard.h"
#include <string>

Wizard::Wizard(int level) {
    name = "Abraahaam Linhcun";
    wizardTime = 1500;
    switch (level)
    {
    case 1:
        successNeeded = 1;
        accuracyRequired = 75;
        break;

    case 2:
        successNeeded = 1;
        accuracyRequired = 50;
        break;

    case 3:
        successNeeded = 3;
        accuracyRequired = 75;
        break;

    case 4:
        successNeeded = 1;
        accuracyRequired = 35;
        break;
    
    default:
        successNeeded = 0;
        accuracyRequired = 0;
        break;
    }
}

std::string Wizard::get_name() {
    return name;
}
void Wizard::set_name(std::string name) {
    this->name = name;
}

int Wizard::get_wizardTime(){ 
    return wizardTime;
}
void Wizard::set_wizardTime(int wizardTime) {
    this->wizardTime = wizardTime;
}

int Wizard::get_successNeeded() {
    return successNeeded;
}
void Wizard::set_successNeeded() {
    this->successNeeded = successNeeded;
}

int Wizard::get_accuracyRequired() {
    return accuracyRequired;
}
void Wizard::set_accuracyRequired() {
    this->accuracyRequired = accuracyRequired;
}