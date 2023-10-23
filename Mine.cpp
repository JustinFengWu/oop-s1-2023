#include "GameEntity.h"
#include "Mine.h"
#include "Explosion.h"
#include <tuple>

Mine::Mine(int x, int y, char type) : GameEntity(x, y, 'M') { }

Explosion Mine::explode() {
    this->type = 'X';
    return Explosion(std::get<0>(position), std::get<1>(position), 'X');
}