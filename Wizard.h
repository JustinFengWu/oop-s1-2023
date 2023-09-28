#ifndef WIZARD_H
#define WIZARD_H
#include <string>

class Wizard {
    private:
    std::string name;
    int wizardTime;
    int successNeeded;
    int accuracyRequired;

    public:
    Wizard(int level);

    std::string get_name();
    void set_name(std::string name);

    int get_wizardTime();
    void set_wizardTime(int wizardTime);

    int get_successNeeded();
    void set_successNeeded();

    int get_accuracyRequired();
    void set_accuracyRequired();


};

#endif