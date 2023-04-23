#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
    numDoors = 0;
}

Car::Car(const string& tempManufacturer, int tempYearBuilt, int tempNumDoors) : Vehicle(tempManufacturer, tempYearBuilt)
{
    numDoors = tempNumDoors;
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