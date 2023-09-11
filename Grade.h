#ifndef GRADE_H
#define GRADE_H
#include "Student.h"
#include <iostream>

class Grade : public Student{
    protected:
std::string assignment;
int value;
int stud_id;
int course_id;

    public:
Grade();
Grade(int stud_id, int course_id, std::string assignment, int value);

void set_assignment(std::string s);
void set_value(int n);
void set_stud_id(int n);
void set_course_id(int n);
};
#endif