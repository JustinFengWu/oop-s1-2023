#ifndef YELLOW_H
#define YELLOW_H
#include "Player.h"

class Yellow : public Player {

    protected:
    int customStat;

    public:
    Yellow(int inventorySize, int storageSize);

};

#endif