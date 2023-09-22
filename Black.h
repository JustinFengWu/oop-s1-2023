#ifndef BLACK_H
#define BLACK_H
#include "Player.h"

class Black : public Player {

    protected:
    int customStat;

    public:
    Black(int inventorySize, int storageSize);

};

#endif