#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList pl2;
    int n = pl.numPeople;
    pl2.people = new Person[n];
    pl2.numPeople = n;
    for (int i = 0; i < n; i++) {
        pl2.people[i].name = pl.people[i].name;
        pl2.people[i].age = pl.people[i].age;
    }

    return pl2;

}