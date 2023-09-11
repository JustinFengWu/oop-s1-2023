#include <string>
#include "Grade.h"
#include "Course.h"
#include "Student.h"

class Gradebook {

    protected:
    Grade** grades;
    int currentNum;

    public:
    Gradebook();
    void addGrade(int stud_id, int course_id, std::string assingment, int value);
    
};