#ifndef GAME_H
#define GAME_H
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include <iostream>
#include <tuple>
#include <vector>

class Game {

    private:
    std::vector<Cell*> grid;
    int gridHeight;
    int gridWidth;


    public:
    Game() { }

    std::vector<Cell*>& getGrid(){
        return grid;
    }

    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;
        for (int i = 0; i < numCharacters; i++) {
            std::tuple<int, int> randomPosition = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Character(std::get<0>(randomPosition), std::get<0>(randomPosition)));
        }

        for (int i = 0; i < numTraps; i++) {
            std::tuple<int, int> randomPosition = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Trap(std::get<0>(randomPosition), std::get<0>(randomPosition)));
        }
    }

    void gameLoop(int maxIterations, double trapActivationDistance) {
        for (int i = 0; i < maxIterations; i++) {
            for (int j = 0; j < static_cast<int>(grid.size()); j++) {
                if (grid[j]->getType() == 'C') {
                    static_cast<Character*>(grid[j])->move(1,0);
                    if (std::get<0>(grid[j]->getPos()) > gridWidth) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    } else if (std::get<1>(grid[j]->getPos()) > gridHeight) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }
                }
            }

            for (int j = 0; j < static_cast<int>(grid.size()); j++) {
                if (grid[j]->getType() == 'C') {
                    for (int z = 0; z < static_cast<int>(grid.size()); z++) {
                        if (grid[z]->getType() == 'T') {
                            if(Utils::calculateDistance(grid[j]->getPos(), grid[z]->getPos()) <= trapActivationDistance) {
                                static_cast<Trap*>(grid[z])->apply(*grid[j]);
                                // std::cout << "Trap activated" << std::endl;
                                // std::cout << grid[j]->getType() << std::endl;
                            }
                        }
                    }
                }
            }


        }
        std::cout << "Maximum number of iterations reached. Game Over." << std::endl;
        return;
    }

};

#endif
