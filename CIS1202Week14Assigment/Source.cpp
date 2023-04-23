#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int yearBuilt;
    cout << "Enter the manufacturer: ";
    cin >> manufacturer;
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    Vehicle vehicle(manufacturer, yearBuilt);
}