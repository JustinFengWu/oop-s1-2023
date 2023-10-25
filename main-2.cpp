#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include <iostream>

int main() {
    Character chara(2, 2);
    Trap Tr(2, 2);
    std::cout << chara.getType() << std::endl;

    Tr.apply(chara);
    std::cout << chara.getType() << std::endl;
    std::cout << Tr.isActive() << std::endl;
}