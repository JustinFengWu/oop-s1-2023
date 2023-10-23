#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
    protected:

    public:
    Explosion(int x, int y, char type);
    void apply(GameEntity &entity) override;

};

#endif