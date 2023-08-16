#include "Person.h"
#include <iostream>

PersonList createPersonList(int n) {
    PersonList peopleArray;
    peopleArray.people = new Person[n];
    peopleArray.numPeople = n;
    for (int i = 0; i < n; i++) {
        peopleArray.people[i].name = "John Doe";
        peopleArray.people[i].age = 1;
    }

    return peopleArray;

}