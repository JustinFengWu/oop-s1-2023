#include "University.h"
#include "Course.h"
#include <string>


University::University(std::string name, std::string location) : name(name), location(location) {
    courses = new Course[10];
}

void University::addCourse(int id, std::string name) {
    Course c(name, id);

    courses[currentNum] = c;

    currentNum++;
}

Course* University::get_course() {
    return courses;
}