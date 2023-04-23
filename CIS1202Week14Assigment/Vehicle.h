#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>
using namespace std;

class Vehicle
{
private:
    string manufacturer;
    int yearBuilt;
public:
    Vehicle();
    const string& getManufacturer() const;
    int getYearBuilt() const;
    void setManufacturer(const string& tempManufacturer);
    void setYearBuilt(int tempYear);
    void displayInfo() const;

};

#endif