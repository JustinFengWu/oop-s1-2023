#include <string>
#include "Course.h"

class University {

    private: 
    std::string name;
    std::string location;
    Course* courses;
    int currentNum;

    public:
    University(std::string name, std::string location);
    void addCourse(int id, std::string name);
    Course* get_course();
};