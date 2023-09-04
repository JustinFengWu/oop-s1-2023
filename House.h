#include <stdbool.h>
#include "Appliance.h"

class House {
    protected:
    int numAppliances;
    Appliance** appliances;
    int currentNum;

    public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();


};