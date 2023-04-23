#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck()
{
    towingCapacity = 0;
}

int Truck::getTowingCapacity() const
{
    return towingCapacity;
}

void Truck::setTowingCapacity(int tempTowingCapacity)
{
    towingCapacity = tempTowingCapacity;
}

void Truck::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "Towing capacity: " << towingCapacity << endl;
}