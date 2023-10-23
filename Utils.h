#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include <ctime>
#include <random>
#include <math.h>

class Utils {

    private:

    public:
    Utils() { }

    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::srand(static_cast<unsigned>(std::time(nullptr)));

        int positionX = std::rand() % gridWidth;
        int positionY = std::rand() % gridHeight;
        return std::make_tuple(positionX, positionY);
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        // calculating Euclidean distance
        double distance = sqrt(pow((std::get<0>(pos1) - std::get<0>(pos2)), 2) + pow((std::get<1>(pos1) - std::get<1>(pos2)), 2));
        return distance;
    }

};

#endif