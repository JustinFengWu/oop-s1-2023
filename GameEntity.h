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
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();
    void set_position(int x, int y);
    void set_type(char type);
    // virtual void move(int dx, int dy);
    // virtual Explosion explode();

};

#endif