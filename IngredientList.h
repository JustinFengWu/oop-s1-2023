#ifndef INGREDIENTLIST_H
#define INGREDIENTLIST_H
#include "Explosive.h"
#include "Ingredient.h"

class IngredientList {

    private: 
    Ingredient ** list;
    int numberOfIngredients;

    public:
    IngredientList(int typesOfIngredients);
    ~IngredientList();
    void generate_ingredient(int numberOfIngredients);
    Ingredient * get_ingredient(int index);
};

#endif