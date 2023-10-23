#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>
#include <iostream>
#include <vector>



class GameEntity {

    protected:
    std::tuple<int, int> position;
    char type;

    public:
    GameEntity(int x, int y, char type) : position(std::make_tuple(x, y)), type(type) { }

    std::tuple<int, int> getPos() {
        return position;
    }

    char getType() {
        return type;
    }

    void set_position(int x, int y) {
        this->position = std::make_tuple(x, y);
    }
    void set_type(char type) {
        this->type = type;
    }
    // virtual void move(int dx, int dy);
    // virtual Explosion explode();

};

#endif