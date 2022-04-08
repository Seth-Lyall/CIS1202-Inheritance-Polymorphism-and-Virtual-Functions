#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
	// Member Variables.
	string manufacturer;
	int year;
public:
	// Constructors.
	Vehicle();
	Vehicle(string);
	Vehicle(int);
	Vehicle(string, int);
	// Display Information.
	void displayInfo() 
	{
		cout << "Manufacturer:    " << manufacturer;
		cout << "\nYear Built:      " << year;
	};
	// Getters.
	string getManufacturer() 
	{ 
		return manufacturer; 
	};
	int getYear() 
	{ 
		return year; 
	};
	// Setters.
	void setManufacturer(string);
	void setYear(int);
};

#endif