#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"  

class Airplane : public AirCraft {
    protected:
    int numPassengers;

    public:
    Airplane();
    Airplane(int w, int p);
    void reducePassengers(int x);
    int get_numPassengers();
    void set_numPassengers(int numPassengers);
    void fly(int headwind, int minutes);

};
#endif