#include <iostream>
#include "Person.h"

PersonList createPersonList(int);

int main() {
    int n = 10;
    PersonList List = createPersonList(n);
    for (int i = 0; i < n; i++) {
        std::cout << List.numPeople << " " << List.people[i].name << " " << List.people[i].age << std::endl;
    }

    return 0;
}