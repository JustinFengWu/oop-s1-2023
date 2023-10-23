#include "GameEntity.h"
#include <tuple>

using namespace std;

GameEntity::GameEntity(int x, int y, char type) : position(make_tuple(x, y)), type(type) { }

tuple<int, int> GameEntity::getPos() {
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