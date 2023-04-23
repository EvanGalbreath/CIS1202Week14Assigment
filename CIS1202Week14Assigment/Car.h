#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle 
{
private:
    int numDoors;

public:
    Car();
    Car(const string& tempManufacturer, int tempYearBuilt, int tempNumDoors);
    int getNumDoors() const;
    void setNumDoors(int tempNumDoors);
    void displayInfo() const;

};

#endif