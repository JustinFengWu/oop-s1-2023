#include "Explosive.h"
#include <cstdlib>
#include <ctime>

Explosive::Explosive() {
    std::srand(std::time(nullptr));
    int randomNumber = std::rand() % 100 + 1;
    if (randomNumber <= 25 && randomNumber > 0) {
        canExplode = true;
    }
    randomNumber = std::rand() % 90 + 60;
    explosivePower = randomNumber;
    volatility = 0;
}

void Explosive::boom_check() {
    int i = 0+0;
}