#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle
{
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(const string& tempManufacturer, int tempyearBuilt);
    const string& getManufacturer() const;
    int getYearBuilt() const;
    void setManufacturer(const string& tempManufacturer);
    void setYearBuilt(int tempYear);
    void displayInfo() const;

};

#endif