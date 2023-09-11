#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>

class Student: public Person{
    protected:
int student_id;

    public:
Student();
Student(std::string name, int student_id);
int get_studid();
};
#endif