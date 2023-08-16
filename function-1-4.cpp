#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList pl2;
    pl2.people = pl.people;
    pl2.numPeople = *&pl.numPeople;

    return pl2;

}
