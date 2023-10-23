#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"
#include <tuple>

class Mine : public GameEntity {

    public:
    Mine(int x, int y, char type) : GameEntity(x, y, 'M') { }

    Explosion explode() {
        this->type = 'X';
        return Explosion(std::get<0>(position), std::get<1>(position), 'X');
    }

};

#endif

