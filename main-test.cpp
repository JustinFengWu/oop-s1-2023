#include <vector>
#include <iostream>

class testbase {
    public:
    void BaseFunctions() {
        std::cout << "base Functions." << std::endl;
    }
};

class inherited : public testbase {
    public:
    void DerivedFunction() {
        std::cout << "Derived function." << std::endl;
    }
};

int main() {


    std::vector<testbase*> testbases;

    inherited* i1 = new inherited;
    inherited* i2 = new inherited;;
    inherited* i3 = new inherited;;

    testbases.push_back(i1);
    testbases.push_back(i2);
    testbases.push_back(i3);

    static_cast<inherited*>(testbases[0])->DerivedFunction();
    return 0;
}