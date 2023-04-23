#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle
{
private:
	int towingCapacity;

public:
	Truck();
	Truck(const string& tempManufacturer, int tempYearBuilt, int tempTowingCapacity);
	int getTowingCapacity() const;
	void setTowingCapacity(int tempTowingCapacity);
	void displayInfo() const;

};

#endif