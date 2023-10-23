#include <vector>
#include "GameEntity.h"
#include "Game.h"
#include "Utils.h"
#include "Ship.h"
#include <iostream>
#include <tuple>
#include <thread>
#include <chrono>
#include "Mine.h"
#include "Explosion.h"
#include <stdbool.h>

using namespace std;
GameEntity* Game::get_entities(int index) {
    if (index > entities.size() - 1) {
        cout << "invalid" << endl;
    }

    return entities[index];
}

void Game::set_entities(GameEntity* entity, int index) {
    if (index > entities.size() - 1) {
        cout << "invalid" << endl;
    }

    delete entities[index];
    entities[index] = entity;
}

vector<GameEntity *> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
    this->numShips = numShips;
    tuple<int, int> randomPosition;
    for (int i = 0; i < numShips ; i++) {
        randomPosition = Utils::generateRandomPos(gridWidth, gridHeight);
        Ship * ship = new Ship(get<0>(randomPosition), get<1>(randomPosition), 'S');
        entities.push_back(ship);
        currentCount++;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "created Ship" << endl;
    }
    for (int i = 0; i < numMines ; i++) {
        randomPosition = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Mine(get<0>(randomPosition), get<1>(randomPosition), 'M'));
        currentCount++;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "created Mine" << endl;
    }

    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold) {
    numDestroyedShips = 0;
    bool foundShip = false;
    for (int i = 0; i < maxIterations; i++) {

        for (int j = 0; j < entities.size(); j++) {
            if (entities[j]->getType() == 'S') {
                static_cast<Ship*>(entities[j])->move(1, 0);
                cout << "ship moved" << endl;
            }

            for (int z = 0; z < entities.size(); z++) {
                if (entities[z]->getType() == 'M') {
                    if (Utils::calculateDistance(entities[j]->getPos(), entities[z]->getPos()) <= mineDistanceThreshold) {
                        Explosion tempExplosion = static_cast<Mine*>(entities[z])->explode();
                        delete entities[z];
                        entities[z] = &tempExplosion;
                        cout << "ship exploded" << endl;
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
