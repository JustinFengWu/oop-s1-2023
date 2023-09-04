#include "Appliance.h"
#include <stdbool.h>

class TV : public Appliance {
    protected:
    double screenSize;

    public:
    TV();
    TV(int powerRating, double screenSize);
    void setScreenSize(double screenSize);
    double getScreenSize();

    double getPowerConsumption();

};