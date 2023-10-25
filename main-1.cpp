#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include <tuple>
#include <iostream>

int main() {
    std::tuple<int, int> randomPosition1 = Utils::generateRandomPos(10, 10);
    std::tuple<int, int> randomPosition2 = Utils::generateRandomPos(5, 5);

    Cell cell1(std::get<0>(randomPosition1), std::get<1>(randomPosition1), 'C');
    std::cout << "Position: " << std::get<0>(cell1.getPos()) << ", " << std::get<1>(cell1.getPos()) << std::endl;
    Cell cell2(std::get<0>(randomPosition2), std::get<1>(randomPosition2), 'S');
    std::cout << "Position: " << std::get<0>(cell2.getPos()) << ", " << std::get<1>(cell2.getPos()) << std::endl;
    std::cout << Utils::calculateDistance(randomPosition1, randomPosition2) << std::endl;


    return 0;
}