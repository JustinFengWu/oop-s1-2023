#include "Game.h"

int main() {

    Game game;

    game.initGame(2, 2, 1, 1);
    game.gameLoop(10, 5);

    return 0;
}