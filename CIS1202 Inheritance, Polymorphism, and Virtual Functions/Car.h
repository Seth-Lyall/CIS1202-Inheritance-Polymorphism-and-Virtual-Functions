#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

class Car : public Vehicle {
private:
	// Member Variables.
	int doors;
public:
	// Constructors.
	Car();
	Car(int);
	Car(int d, string m, int y);
	// Display Information.
	void displayInfo()
	{
		cout << "Manufacturer:    " << getManufacturer();
		cout << "\nYear Built:      " << getYear();
		cout << "\nNumber of Doors: " << doors;
	};
	// Getters.
	int getDoors()
	{
		return doors;
	};
	// Setters.
	void setDoors(int);
};

#endif