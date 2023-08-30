#include "Vehicle.h"
#include "ParkingLot.h"
#include "Motorbike.h"
#include "Bus.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main() {
    ParkingLot p1(10);

    for (int i = 0; i < 5; i++) {
        Car* c = new Car(i);
        p1.parkVehicle(c);
    }

    for (int i = 0; i < 3; i++) {
        Bus* b = new Bus(i + 5);
        p1.parkVehicle(b);
    }

    for (int i = 0; i < 2; i++) {
        Motorbike* m = new Motorbike(i + 8);
        p1.parkVehicle(m);
    }

    int response;
    std::cout << "Enter a number (1 to exit, 2 for Car, 3 for Bus, 4 for Motorbike): ";
    std::cin >> response;

    while (response != 1) {
        if (response == 2) {
            std::cout << "The current parking time for Car 1 is: " << p1.getTime(1) << std::endl;
        } else if (response == 3) {
            std::cout << "The current parking time for Bus 6 is: " << p1.getTime(6) << std::endl;
        } else if (response == 4) {
            std::cout << "The current parking time for Motorbike 9 is: " << p1.getTime(9) << std::endl;
        }
        std::cout << "Enter a number (1 to exit, 2 for Car, 3 for Bus, 4 for Motorbike): ";
        std::cin >> response;
    }

    int overstayNum = p1.countOverstayingVehicles(1);
    std::cout << "There are " << overstayNum << " vehicles that have overstayed." << std::endl;

    return 0;
}
