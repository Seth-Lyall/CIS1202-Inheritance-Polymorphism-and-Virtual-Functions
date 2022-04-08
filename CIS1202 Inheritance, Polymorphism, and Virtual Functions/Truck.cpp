#include "Truck.h"

// Constructors.
Truck::Truck()
{
	Truck::towingCapacity = 0;
};

Truck::Truck(int t)
{
	Truck::towingCapacity = t;
};

// Inherited Constructor from Vehicle class.
Truck::Truck(int t, string m, int y)
{
	Truck::towingCapacity = t;
	Truck::setManufacturer(m);
	Truck::setYear(y);
};

// Setters or Mutators.
void Truck::setTowingCapacity(int t)
{
	Truck::towingCapacity = t;
};