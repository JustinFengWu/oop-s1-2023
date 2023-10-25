#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include "Game.h"
#include <iostream>
#include <tuple>

int main() {
    Game g;
    g.initGame(1, 2, 4, 4);
    g.gameLoop(2, 5);
    return 0;
}