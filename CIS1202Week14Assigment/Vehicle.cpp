#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle()
{
    manufacturer = "";
    yearBuilt = 0;
}

const string& Vehicle::getManufacturer() const
{
    return manufacturer;
}

int Vehicle::getYearBuilt() const
{
    return yearBuilt;
}

void Vehicle::setManufacturer(const string& tempManufacturer)
{
    manufacturer = tempManufacturer;
}

void Vehicle::setYearBuilt(int tempYear)
{
    yearBuilt = tempYear;
}

void Vehicle::displayInfo() const
{
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year built: " << yearBuilt << endl;
}