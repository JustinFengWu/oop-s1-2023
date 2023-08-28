#include "Vehicle.h"
#include "ParkingLot.h"
#include "Motorbike.h"
#include "Bus.h"
#include "Car.h"
#include <iostream>
#include <string>

int main() {
    ParkingLot p1(10);
    while (p1.getCount() < 10) {
        std::cout << "What type of vehicle to park: ";
        std::string vehicleType;
        std::cin >> vehicleType;

        std::cout << "Enter Vehicle ID: ";
        int vehicleID;
        std::cin >> vehicleID;

        for (char& c : vehicleType) {
            c = std::tolower(c);
        }

        if (vehicleType == "motorbike") {
            Motorbike * m = new Motorbike(vehicleID);
            p1.parkVehicle(m);
        } else if (vehicleType == "bus") {
            Bus * b = new Bus(vehicleID);
            p1.parkVehicle(b);
        } else if (vehicleType == "car") {
            Car * c = new Car(vehicleID);
            p1.parkVehicle(c);
        }
    }


    int overstayNum = p1.countOverstayingVehicles(5);
    std::cout << "There are " << overstayNum << " vehicles that has overstayed." << std::endl;

    return 0;
}