#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <iostream>
#include <chrono>
#include <thread>

void pointlessCalculation() {
    const double iterations = 100000000;
    double result = 0.0;
    for (int i = 0; i < iterations; i++) {
        result += i * i;
    }
}

int main() {
    // Create a parking lot with a capacity of 3
    ParkingLot parkingLot(3);

    // Create three vehicles of different types
    Vehicle* car = new Car(1);    
    Vehicle* bus = new Bus(2);
    Vehicle* motorbike = new Motorbike(3);

    // Park the vehicles in the lot
    parkingLot.parkVehicle(car);
    parkingLot.parkVehicle(bus);
    parkingLot.parkVehicle(motorbike);

    // Wait for 5 seconds to simulate parking time
    std::cout << "Simulating parking time for 4 Seconds with max duration of 2 seconds" << std::endl;
    clock_t start_time = clock();
    while (clock() - start_time < 4 * CLOCKS_PER_SEC) {}  // Pause for 4 seconds    

    // Count the number of overstaying vehicles
    int overstayingCount = parkingLot.countOverstayingVehicles(2);
    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    // Test if the correct parking time discounts were applied correctly
    int carParkingDuration = car->getParkingDuration();
    std::cout << "Car overstayed: " << 4 - carParkingDuration << " seconds" << std::endl;

    int busParkingDuration = bus->getParkingDuration();
    std::cout << "Bus overstayed: " << 4 - busParkingDuration << " seconds" << std::endl;

    int motorbikeParkingDuration = motorbike->getParkingDuration();
    std::cout << "Motorbike overstayed: " << 4 - motorbikeParkingDuration << " seconds" << std::endl;

    return 0;
}
