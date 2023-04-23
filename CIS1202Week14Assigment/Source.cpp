//Evan Galbreath
//CIS 1202 101
//April 23rd, 2023

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer; //necessary variable definitions
    int yearBuilt;
    int numDoors;
    int towingCapacity;

    cout << "Vehicle: " << endl; //user inputs for the vehicle
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore();

    Vehicle vehicle(manufacturer, yearBuilt); //creating the object with the input values
    vehicle.displayInfo();
    cout << endl;
    
    cout << "Car:" << endl; //user inputs for car overwrite the previous values, which is okay as the vehicle object was already made
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter number of doors: ";
    cin >> numDoors;
    cin.ignore();

    Car car(manufacturer, yearBuilt, numDoors); //creating a new object with type car instead
    car.displayInfo();
    cout << endl;

    cout << "Truck: " << endl; //user inputs for truck
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity: ";
    cin >> towingCapacity;
    cin.ignore();

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();
    cout << endl;
    
    return 0;
}