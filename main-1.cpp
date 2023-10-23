#include "Utils.h"
#include "Effect.h"
#include "GameEntity.h"
#include <iostream>
#include <tuple>
#include <thread>
#include <chrono>


int main() {
    std::tuple<int, int> randomPosition = Utils::generateRandomPos(10, 10);
    std::cout << "x = " << std::get<0>(randomPosition) << " and y = " << std::get<1>(randomPosition) << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::tuple<int, int> randomPosition2 = Utils::generateRandomPos(10, 10);
    std::cout << "x1 = " << std::get<0>(randomPosition2) << " and y1 = " << std::get<1>(randomPosition2) << std::endl;

    GameEntity Entity1(std::get<0>(randomPosition), std::get<1>(randomPosition), 'c');
    GameEntity Entity2(std::get<0>(randomPosition2), std::get<1>(randomPosition2), 'a');

    std::cout << Utils::calculateDistance(randomPosition, randomPosition2) << std::endl;

    std::cout << Entity1.getType() << " " << std::get<0>(Entity1.getPos()) << " " << std::get<1>(Entity1.getPos()) << std::endl;
    std::cout << Entity2.getType() << " " << std::get<0>(Entity2.getPos()) << " " << std::get<1>(Entity2.getPos()) << std::endl;

    return 0;
}