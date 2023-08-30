#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot{
    protected:
    Vehicle ** vehicles;
    int maxCapacity;
    int currentCount;
    int maxParkingDuration;

    public:
    ParkingLot(int maxCapacity);
    void parkVehicle(Vehicle * object);
    int getCount();
    void unparkVehicle(int ID);
    ~ParkingLot();
    int countOverstayingVehicles(int maxParkingDuration);
    int getTime(int index);

};

#endif