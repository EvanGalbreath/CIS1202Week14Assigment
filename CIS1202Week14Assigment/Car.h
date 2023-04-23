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
    int getNumDoors() const;
    void setNumDoors(int tempNumDoors);
    void displayInfo() const;

};

#endif