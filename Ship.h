#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include <tuple>

class Ship : public GameEntity {

    protected:

    public:
    Ship(int x, int y, char type) : GameEntity(x, y, 'S') { }

    void move(int dx, int dy) {
        this->position = std::make_tuple(std::get<0>(position) + dx, std::get<1>(position) + dy);
    }

};

#endif