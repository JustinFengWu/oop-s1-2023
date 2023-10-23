#ifndef GAME_H
#define GAME_h
#include <vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include <iostream>
#include <tuple>
#include <thread>
#include <chrono>
#include "Mine.h"
#include "Explosion.h"
#include <stdbool.h>



class Game {
    private:
    std::vector<GameEntity *> entities;
    int currentCount = 0;
    int numShips;
    int numDestroyedShips;

    public:
    GameEntity* get_entities(int index) {
        if (index > entities.size() - 1) {
            std::cout << "invalid" << std::endl;
        }

        return entities[index];
    }

    void set_entities(GameEntity* entity, int index) {
        if (index > entities.size() - 1) {
            std::cout << "invalid" << std::endl;
        }

        delete entities[index];
        entities[index] = entity;
    }

    std::vector<GameEntity *> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        this->numShips = numShips;
        std::tuple<int, int> randomPosition;
        for (int i = 0; i < numShips ; i++) {
            randomPosition = Utils::generateRandomPos(gridWidth, gridHeight);
            Ship * ship = new Ship(std::get<0>(randomPosition), std::get<1>(randomPosition), 'S');
            entities.push_back(ship);
            currentCount++;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "created Ship" << std::endl;
        }
        for (int i = 0; i < numMines ; i++) {
            randomPosition = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(randomPosition), std::get<1>(randomPosition), 'M'));
            currentCount++;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "created Mine" << std::endl;
        }

        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        numDestroyedShips = 0;
        bool foundShip = false;
        for (int i = 0; i < maxIterations; i++) {

            for (int j = 0; j < entities.size(); j++) {
                if (entities[j]->getType() == 'S') {
                    static_cast<Ship*>(entities[j])->move(1, 0);
                    std::cout << "ship moved" << std::endl;
                }

                for (int z = 0; z < entities.size(); z++) {
                    if (entities[z]->getType() == 'M') {
                        if (Utils::calculateDistance(entities[j]->getPos(), entities[z]->getPos()) <= mineDistanceThreshold) {
                            Explosion tempExplosion = static_cast<Mine*>(entities[z])->explode();
                            delete entities[z];
                            entities[z] = &tempExplosion;
                            std::cout << "ship exploded" << std::endl;
                            numDestroyedShips++;
                        }
                    }
                }
            }

            if (numDestroyedShips >= numShips) {
                return;
            }
        }
        return;
    }


};

#endif
