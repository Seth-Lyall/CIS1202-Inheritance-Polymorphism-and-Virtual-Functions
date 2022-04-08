#include "Car.h"

// Constructors.
Car::Car()
{
	Car::doors = 0;
};

Car::Car(int d)
{
	Car::doors = d;
};

Car::Car(int d, string m, int y)
{
	Car::doors = d;
	Car::setManufacturer(m);
	Car::setYear(y);
};

// Setters or Mutators.
void Car::setDoors(int d)
{
	Car::doors = d;
};