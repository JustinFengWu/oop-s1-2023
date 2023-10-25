#ifndef TRAP_H
#define TRAP_H
#include "Effect.h"
#include "Cell.h"
#include <stdbool.h>

class Trap : public Cell, public Effect {

    protected:
    bool Active = true;

    public:
    Trap(int x, int y) : Cell(x, y, 'T') { }

    bool isActive() {
        return Active;
    }

    void apply(Cell& cell) {
        this->Active = false;
        cell.setType('T');
    }

};

#endif