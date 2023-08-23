#include "Unit.h"

Unit::Unit() {
    unit_val = 0;
    num_beds = 0;
    unit_size = 0;
}


Unit::Unit(int unit_val, int num_beds, double unit_size) {
    this->unit_val = unit_val;
    this->num_beds = num_beds;
    this->unit_size = unit_size;
}

int Unit::get_number_bedrooms() {
    return num_beds;
}

int Unit::get_value() {
    return unit_val;
}

double Unit::get_area() {
    return unit_size;
}