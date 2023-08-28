#include <ctime>
#include "Motorbike.h"
#include "Bus.h"
#include "Car.h"
#include "Vehicle.h"
#include <iostream>
#include <string>

int main() {
    int numVehicles;
    std::cout << "How many vehicles do you want to park? ";
    std::cin >> numVehicles;

    Vehicle ** parkingLot = new Vehicle*[numVehicles];

    for (int i = 0; i < numVehicles; i++) {
        std::cout << "Enter Vehicle type: ";
        std::string vehicleType;
        std::cin >> vehicleType;

        std::cout << "Enter Vehicle ID: ";
        int vehicleID;
        std::cin >> vehicleID;

        for (char& c : vehicleType) {
            c = std::tolower(c);
        }


        if (vehicleType == "motorbike") {
            parkingLot[i] = new Motorbike(vehicleID);
        } else if (vehicleType == "bus") {
            parkingLot[i] = new Bus(vehicleID);
        } else if (vehicleType == "car") {
            parkingLot[i] = new Car(vehicleID);
        }
    }

    for (int i = 0; i < numVehicles; i++) {
        std::cout << "Total elapsed time for vehicle " << i + 1 << ": "
        << parkingLot[i]->getParkingDuration() << " seconds." << std::endl;
    }

    for (int i = 0; i < numVehicles; i++) {
        delete parkingLot[i];
    }

    delete[] parkingLot;

    return 0;
}