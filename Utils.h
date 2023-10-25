#ifndef UTILS_H
#define UTILS_H
#include <ctime>
#include <tuple>
#include <math.h>

class Utils {

    protected:

    public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::srand(std::time(nullptr));
        int positionX = std::rand() % gridWidth;
        int positionY = std::rand() % gridHeight;
        return std::make_tuple(positionX, positionY);
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        double distance;
        distance = sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2), 2) + pow(std::get<1>(pos1) - std::get<1>(pos2), 2));
        return distance;
    }

};


#endif