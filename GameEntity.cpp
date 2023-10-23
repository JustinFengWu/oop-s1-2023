#include "GameEntity.h"
#include <tuple>


GameEntity::GameEntity(int x, int y, char type) : position(std::make_tuple(x, y)), type(type) { }

std::tuple<int, int> GameEntity::getPos() {
    return position;
}

char GameEntity::getType() {
    return type;
}

void GameEntity::set_position(int x, int y) {
    this->position = std::make_tuple(x, y);
}
void GameEntity::set_type(char type) {
    this->type = type;
}