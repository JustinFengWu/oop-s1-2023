#include "Course.h"
#include "Person.h"
#include <string>

Course::Course() {};

Course::Course(std::string name, int id) : name(name), id(id) {
    p = new Person*[10];
}

void Course::addPerson(Person* pe){
    p[currentNum] = pe;
    currentNum++;
}

int Course::get_id() {
    return id;
}

std::string Course::get_name() {
    return name;
}