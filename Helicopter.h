#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <string>
#include "AirCraft.h"

class Helicopter : public AirCraft {
    protected:
    std::string name;

    public:
    Helicopter();
    Helicopter(int w, std::string n);
    void fly(int headwind, int minutes);
    void set_name(std::string name);
    std::string get_name();


};

#endif