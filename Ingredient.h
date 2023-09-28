#ifndef INGREDIENT_H
#define INGREDIENT_H
#include "Explosive.h"
#include <string>
#include <stdbool.h>

class Ingredient : public Explosive {

    protected:
    int id;
    std::string name;
    int lethalius;
    int melatonius;
    int adrenalius;
    int tankius; 
    int luckius;
    double freshness;
    bool isCursed;

    public:
    Ingredient(int id, std::string name, int lethalius, int melatonius, 
        int adrenalius, int tankius, int luckius, double freshness, bool isCursed);

    int get_id();
    void set_id(int id);

    std::string get_name();
    void set_name(std::string name);

    int get_lethalius();
    void set_lethalius(int lethalius);

    int get_melatonius();
    void set_melatonius(int melatonius);

    int get_adrenalius();
    void set_adrenalius(int adrenalius);

    int get_tankius();
    void set_tankius(int tankius);

    int get_luckius();
    void set_luckius(int luckius);

    double get_freshness();
    void set_freshness(double freshness);

    bool get_isCursed();
    void set_isCursed(bool isCursed);
        

};

#endif