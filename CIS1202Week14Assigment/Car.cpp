#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
    numDoors = 0;
}

int Car::getNumDoors() const
{
    return numDoors;
}

void Car::setNumDoors(int tempNumDoors)
{
    numDoors = tempNumDoors;
}

void Car::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "Number of doors: " << numDoors << endl;
}