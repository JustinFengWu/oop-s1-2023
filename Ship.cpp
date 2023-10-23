#include "GameEntity.h"
#include "Ship.h"
#include <tuple>

Ship::Ship(int x, int y, char type) : GameEntity(x, y, 'S') { }

void Ship::move(int dx, int dy) {
    this->position = std::make_tuple(std::get<0>(position) + dx, std::get<1>(position) + dy);
}
