    #include <stdbool.h>
    #include "Appliance.h"
    #include "Fridge.h"
    
    Fridge::Fridge() {}

    Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

    void Fridge::setVolume(double volume) {
        this->volume = volume;
    }
    

    double Fridge::getVolume(){
        return volume;
    }

    double Fridge::getPowerConsumption(){
        double powerConsumption = powerRating * 24 * (volume / 100);
        return powerConsumption;
    }