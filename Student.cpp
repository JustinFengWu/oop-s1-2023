#include "Person.h"
#include "Student.h"

Student::Student(){
this->student_id = 0;

}

Student::Student(std::string name, int student_id) : Person(name){
this->student_id = student_id;
}

int Student::get_studid(){
    return student_id;
}