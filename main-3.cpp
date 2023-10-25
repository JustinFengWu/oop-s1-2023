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
    g.initGame(1, 2, 1, 1);
    g.gameLoop(3, 0);
    return 0;
}