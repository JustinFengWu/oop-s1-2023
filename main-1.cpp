#include "Utils.h"
#include "Effect.h"
#include "GameEntity.h"
#include <iostream>
#include <tuple>

using namespace std;

int main() {
    tuple<int, int> randomPosition = Utils::generateRandomPos(10, 10);
    cout << "x = " << get<0>(randomPosition) << " and y = " << get<1>(randomPosition) << endl;
    tuple<int, int> randomPosition2 = Utils::generateRandomPos(10, 10);
    cout << "x1 = " << get<0>(randomPosition2) << " and y1 = " << get<1>(randomPosition2) << endl;

    GameEntity Entity1(get<0>(randomPosition), get<1>(randomPosition), 'c');
    GameEntity Entity2(get<0>(randomPosition2), get<1>(randomPosition2), 'a');

    cout << Utils::calculateDistance(randomPosition, randomPosition2) << endl;

    cout << Entity1.getType() << " " << get<0>(Entity1.getPos()) << " " << get<1>(Entity1.getPos()) << endl;
    cout << Entity2.getType() << " " << get<0>(Entity2.getPos()) << " " << get<1>(Entity2.getPos()) << endl;

    return 0;
}