#include <iostream>
#include "Person.h"

PersonList createPersonList(int);
PersonList deepCopyPersonList(PersonList);
int main() {
    int n = 10;
    PersonList List;
    List.numPeople = n;
    List.people = new Person[n];
    for (int i = 0; i < n; i++) {
        List.people[i].name = "John Doe";
        List.people[i].age = 1;
    }
    PersonList List2 = deepCopyPersonList(List);
    for (int i = 0; i < n; i++) {
        std::cout << List.numPeople << " " << List.people[i].name << " " << List.people[i].age << std::endl;
    }
    std::cout << std::endl << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << List2.numPeople << " " << List2.people[i].name << " " << List2.people[i].age << std::endl;
    }

    delete[] List.people;
    delete[] List2.people;
    return 0;
}