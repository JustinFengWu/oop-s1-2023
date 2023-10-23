#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"
#include <tuple>

class Explosion : public GameEntity, public Effect {
    protected:

    public:
    Explosion(int x, int y, char type) : GameEntity(x, y, 'E'){

    }

    void apply(GameEntity &entity) override {
        entity.set_position(-1, -1);
        entity.set_type('X');
    }

};

#endif