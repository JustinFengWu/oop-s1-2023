#ifndef GAME_H
#define GAME_h
#include <vector>
#include "GameEntity.h"



class Game {
    private:
    std::vector<GameEntity *> entities;
    int currentCount = 0;
    int numShips;
    int numDestroyedShips;

    public:
    GameEntity* get_entities(int index);
    void set_entities(GameEntity* entity, int index);
    std::vector<GameEntity *> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double mineDistanceThreshold);

};

#endif
