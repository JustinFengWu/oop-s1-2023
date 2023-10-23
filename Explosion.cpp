#include "GameEntity.h"
#include "Explosion.h"
#include <tuple>

Explosion::Explosion(int x, int y, char type) : GameEntity(x, y, 'E'){

}

void Explosion::apply(GameEntity &entity) {
    entity.set_position(-1, -1);
    entity.set_type('X');
}
