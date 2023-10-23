#ifndef UTILS_H
#define UTILS_H
#include <tuple>

using namespace std;
class Utils {

    private:

    public:
    Utils();
    static tuple<int, int> generateRandomPos(int gridwidth, int grdHeigth);
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);

};

#endif