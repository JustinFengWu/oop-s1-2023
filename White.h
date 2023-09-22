#ifndef WHITE_H
#define WHITE_H
#include "Player.h"

class White : public Player {

    protected:
    int customStat;

    public:
    White(int inventorySize, int storageSize);

};

#endif