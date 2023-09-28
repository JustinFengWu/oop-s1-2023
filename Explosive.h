#ifndef EXPLOSIVE_H
#define EXPLOSIVE_H
#include <stdbool.h>

class Explosive {
    
    protected:
    bool canExplode;
    int explosivePower;
    int volatility;

    public:
    Explosive();
    virtual void boom_check();
};

#endif