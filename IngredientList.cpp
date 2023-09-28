#include "IngredientList.h"

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
void IngredientList::addIngredient(Ingredient * ingredient) {
    for (int i = 0; i < numberOfIngredients; i++) {
        if (list[i] == nullptr) {
            list[i] = ingredient;
        }
    }
}