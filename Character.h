#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"


class Character : public Cell {

    protected:

    public:
    Character(int x, int y) : Cell(x, y, 'C') { }

    void move(int dx, int dy) {
        position = std::make_tuple(std::get<0>(position) + dx, std::get<1>(position) + dy);
    }


};

#endif