#include "Appliance.h"
#include <stdbool.h>

class Fridge : public Appliance {
    protected:
    double volume;

    public:
    Fridge();
    Fridge(int powerRating, double volume);
    void setVolume(double volume);
    double getVolume();

    double getPowerConsumption();

};