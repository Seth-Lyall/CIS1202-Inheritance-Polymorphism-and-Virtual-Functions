#include "Vehicle.h"

// Constructors.
Vehicle::Vehicle()
{
	Vehicle::manufacturer = "none";
	Vehicle::year = 0;
};

Vehicle::Vehicle(string m) 
{
	Vehicle::manufacturer = m;
	Vehicle::year = 0;
};

Vehicle::Vehicle(int y)
{
	Vehicle::manufacturer = "none";
	Vehicle::year = y;
};

Vehicle::Vehicle(string m, int y)
{
	Vehicle::manufacturer = m;
	Vehicle::year = y;
};

// Setters or Mutators.
void Vehicle::setManufacturer(string m) 
{ 
	Vehicle::manufacturer = m;
};

void Vehicle::setYear(int y)
{
	Vehicle::year = y;
};