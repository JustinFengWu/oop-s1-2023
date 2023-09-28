#ifndef POT_H
#define POT_H

class Pot {

    protected:
    int lethalius;
    int melatonius;
    int adrenalius;
    int tankius; 
    int luckius;

    public:
    Pot();
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

    void dilute();
    void boil();
    void dump();

    void add_ingredient(Ingredient * ingredient);
};

#endif