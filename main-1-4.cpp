#include <iostream>
#include "Person.h"

PersonList createPersonList(int);
PersonList shallowCopyPersonList(PersonList);
int main() {
    int n = 10;
    PersonList List = createPersonList(n);
    PersonList List2 = shallowCopyPersonList(List);
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