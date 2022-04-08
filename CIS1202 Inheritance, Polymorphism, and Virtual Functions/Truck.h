#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

class Truck : public Vehicle {
private:
	// Member Variables.
	int towingCapacity;
public:
	// Constructors.
	Truck();
	Truck(int);
	Truck(int, string, int);
	// Display Information.
	void displayInfo()
	{
		cout << "Manufacturer:    " << getManufacturer();
		cout << "\nYear Built:      " << getYear();
		cout << "\nTowing Capacity: " << towingCapacity;
	};
	// Getters.
	int getTowingCapacity()
	{
		return towingCapacity;
	};
	// Setters.
	void setTowingCapacity(int);
};

#endif