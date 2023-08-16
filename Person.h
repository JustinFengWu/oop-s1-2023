#ifndef Person_H
#define Person_H

#include <string>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif