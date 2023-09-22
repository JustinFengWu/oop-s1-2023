#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {

    protected:
    int health;
    int fatigue;
    int adrenaline;
    int resistance;
    int arcana;
    std::string location;
    int playerTime;
    Ingredient ** inventory;
    int currentNumberIngredients;
    int inventorySize;
    Vial ** vialStorage;
    int currentNumberVials;
    int storageSize;



    public:
    Player(int inventorySize, int storageSize);
    ~Player();

    int get_health();
    void set_health(int health);

    int get_fatigue();
    void set_fatigue(int fatigue);

    int get_adrenaline();
    void set_adrenaline(int adrenaline);

    int get_resistance();
    void set_resistance(int resistance);

    int get_arcana();
    void set_arcana(int arcana);

    std::string get_location();
    void set_location(std::string location);

    int get_playerTime();
    void set_playerTime(int playerTime);

    int get_currentNumberIngredients();
    int get_currentNumberVials();

    void get_ingredients();
    void dump_ingredient(int index);
    void eat_ingredient(int index);

    void pour();

    void add_ingredient();
    void change_location();

};

#endif