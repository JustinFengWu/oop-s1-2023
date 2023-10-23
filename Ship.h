#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"

class Ship : public GameEntity {

    protected:

    public:
    Ship(int x, int y, char type);
    void move(int dx, int dy);

};

#endif