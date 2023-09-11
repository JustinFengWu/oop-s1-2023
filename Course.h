#include <string>
#include "Person.h"

class Course {

    private:
    std::string name;
    int id;
    Person** p;
    int currentNum;

    public:
    Course();
    Course(std::string name, int id);
    void addPerson(Person* pe);
    int get_id();
    std::string get_name();

};