#include "Gradebook.h"
#include "Grade.h"
#include "Course.h"
#include "Student.h"

Gradebook::Gradebook() {
    grades = new Grade*[10];
}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value) {
    grades[currentNum]->set_stud_id(stud_id);
    grades[currentNum]->set_course_id(course_id);
    grades[currentNum]->set_assignment(assignment);
    grades[currentNum]->set_value(value);

    currentNum++;
}