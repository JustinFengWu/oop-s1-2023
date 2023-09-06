#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {

    protected:
    int weight;                  // the weight of AirCraft
    float fuel;                  // fuel percentage, initially 100%
    int numberOfFlights; 


    public:
    AirCraft();
    AirCraft(int w);
    void refuel();               
    virtual void fly(int headwind, int minutes);
    float get_fuel();
    void set_fuel( float fuel );
    int get_numberOfFlights();
    void set_numberOfFlights(int numberOfFlights);
    int get_weight();
    void set_weight(int weight);

};

#endif