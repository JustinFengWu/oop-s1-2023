#include "Appliance.h"
#include "TV.h"
#include "Fridge.h"
#include "House.h"
#include <iostream>

int main() {
    TV tv1(10, 100);
    // it is very important to understand that you don't need a pointer when allocating objects statically, expecially singular objects. 
    // you only need pointers that points towards dynamically allocated memory, whether it be arrays or just a singular object.
    // pointers points to what it is assigned to, hence storing the address. to dereference it (uncover that address being stored) use the &sign.
    // if function takes in pointer as parameter, pointer->pointer or &object->pointer. 
    TV tv2(10, 100);
    Fridge f1(10, 100);
    Fridge f2(10, 100);

    House h(4);
    h.addAppliance(&tv1);
    h.addAppliance(&tv2);
    h.addAppliance(&f1);
    h.addAppliance(&f2);

    std::cout << h.getTotalPowerConsumption() << std::endl;

    return 0;
}