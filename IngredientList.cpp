#include "IngredientList.h"
#include <cstdlib>
#include <ctime>
#include <stdbool.h>
#include "Ingredient.h"

IngredientList::IngredientList(int numberOfIngredients) {
    this->numberOfIngredients = numberOfIngredients;
    list = new Explosive * [numberOfIngredients];
    for (int i = 0; i < numberOfIngredients; i++) {
        list[i] = nullptr;
    }
}
IngredientList::~IngredientList() {
    for (int i = 0; i < numberOfIngredients; i++) {
        delete list[i];
    }
    delete[] list;
}

void IngredientList::generate_ingredient(int numberOfIngredients) {
    std::srand(std::time(nullptr));
    int randomNumber = std::rand() % 100 + 1;
    for (int i = 0; i < numberOfIngredients; i++) {
        switch (i)
        {

        case 1:
            int lethalius = std::rand() % 100 + 1;
            int melatonius = std::rand() % 100 + 1;
            int adrenalius = std::rand() % 100 + 1;
            int tankius = std::rand() % 100 + 1;
            int luckius = std::rand() % 100 + 1;
            double freshness = (std::rand() % 100 + 1)/100;
            int randomNumber = std::rand() % 100 + 1;
            bool isCursed = false;
            if (randomNumber <= 30) {
                isCursed = true;
            }
            Ingredient * ingredient = new Ingredient(i, "death root", lethalius, melatonius, adrenalius, tankius, luckius, freshness, isCursed);
            list[i] = ingredient;
            break;

        case 2:
            int lethalius = std::rand() % 100 + 1;
            int melatonius = std::rand() % 100 + 1;
            int adrenalius = std::rand() % 100 + 1;
            int tankius = std::rand() % 100 + 1;
            int luckius = std::rand() % 100 + 1;
            double freshness = (std::rand() % 100 + 1)/100;
            int randomNumber = std::rand() % 100 + 1;
            bool isCursed = false;
            if (randomNumber <= 30) {
                isCursed = true;
            }
            Ingredient * ingredient = new Ingredient(i, "adrenaleaf", lethalius, melatonius, adrenalius, tankius, luckius, freshness, isCursed);
            list[i] = ingredient;
            break;

        case 3:
            int lethalius = std::rand() % 100 + 1;
            int melatonius = std::rand() % 100 + 1;
            int adrenalius = std::rand() % 100 + 1;
            int tankius = std::rand() % 100 + 1;
            int luckius = std::rand() % 100 + 1;
            double freshness = (std::rand() % 100 + 1)/100;
            int randomNumber = std::rand() % 100 + 1;
            bool isCursed = false;
            if (randomNumber <= 30) {
                isCursed = true;
            }
            Ingredient * ingredient = new Ingredient(i, "sleepy sleepy ball", lethalius, melatonius, adrenalius, tankius, luckius, freshness, isCursed);
            list[i] = ingredient;
            break;

        case 4:
            int lethalius = std::rand() % 100 + 1;
            int melatonius = std::rand() % 100 + 1;
            int adrenalius = std::rand() % 100 + 1;
            int tankius = std::rand() % 100 + 1;
            int luckius = std::rand() % 100 + 1;
            double freshness = (std::rand() % 100 + 1)/100;
            int randomNumber = std::rand() % 100 + 1;
            bool isCursed = false;
            if (randomNumber <= 30) {
                isCursed = true;
            }
            Ingredient * ingredient = new Ingredient(i, "rock fruit", lethalius, melatonius, adrenalius, tankius, luckius, freshness, isCursed);
            list[i] = ingredient;
            break;
        
        default:
            break;
        }
    }
}