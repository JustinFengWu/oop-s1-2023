#include "Grade.h"
#include "Person.h"
#include "Student.h"
#include "Gradebook.h"
#include "Course.h"
#include "University.h"

int main() {
    University U("Name", "Location");
    U.addCourse(1, "compSci");
    Student s("Angus", 30);
    U.get_course()[0].addPerson(&s);

    return 0;
}