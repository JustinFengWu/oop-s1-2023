#include "Student.h"
#include <iostream>
#include "Grade.h"

Grade::Grade(){
this->assignment = "Null";
this->value = 0;

}

Grade::Grade(int stud_id, int course_id, std::string assignment, int value){
this->assignment = assignment;
this->value = value;
this->stud_id = stud_id;
this->course_id = course_id;

}

void Grade::set_assignment(std::string s) { assignment = s;}
void Grade::set_value(int n) {value = n;}
void Grade::set_stud_id(int n) {stud_id = n;}
void Grade::set_course_id(int n) {course_id = n;}
