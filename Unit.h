#ifndef UNIT_H
#define UNIT_H

class Unit{
private:
    int unit_val;
    int num_beds;
    double unit_size;

public:
    Unit();
    Unit(int unit_val, int num_beds, double unit_size);
    int get_number_bedrooms();
    int get_value();
    double get_area();
    
};

#endif
