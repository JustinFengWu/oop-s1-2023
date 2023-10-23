#include <tuple>
#include "Utils.h"
#include <ctime>
#include <random>
#include <math.h>

Utils::Utils() { }

tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int positionX = std::rand() % gridWidth;
    int positionY = std::rand() % gridHeight;
    return std::make_tuple(positionX, positionY);
}

double Utils::calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2) {
    // calculating Euclidean distance
    double distance = sqrt(pow((std::get<0>(pos1) - std::get<0>(pos2)), 2) + pow((std::get<1>(pos1) - std::get<1>(pos2)), 2));
    return distance;
}
