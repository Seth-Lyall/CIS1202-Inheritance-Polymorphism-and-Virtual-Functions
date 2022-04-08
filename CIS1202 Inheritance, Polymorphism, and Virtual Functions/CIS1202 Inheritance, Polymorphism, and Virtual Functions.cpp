// Seth Lyall
// CIS1202 K01
// April 7, 2022

#include "PersonalLibrary.h"
#include "Car.h"
#include "Truck.h"
using namespace std;



int main() {

	string manufacturer = "none";
	int year = 0;
	int doors = 0;
	int towingCapacity = 0;

	cout << "Vehicle Program\n\nAutomobile:\n";

	// Enter data for an automobile class.
	cout << "Enter the manufacturer for the automobile: ";
	getline(cin, manufacturer);
	year = validateInteger("Enter the year the vehicle was built:      ", 0, 3000);
	Vehicle automobile(manufacturer, year);
	// Display the data for the automobile class.
	automobile.displayInfo();

	// Enter data for car class..
	cout << "\n\nCar:\nEnter the manufacturer for the car:        ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);
	year = validateInteger("Enter the year the car was built:          ", 0, 3000);
	doors = validateInteger("Enter the number of doors:                 ", 0, 50);
	Car car(doors, manufacturer, year);
	// Display the data for the car class.
	car.displayInfo();

	// Enter the data for the truck class.
	cout << "\n\nTruck:\nEnter the manufacturer for the truck:      ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);
	year = validateInteger("Enter the year the truck was built:        ", 0, 3000);
	towingCapacity = validateInteger("Enter the towing capacity:                 ", 0, 500000);
	Truck truck(towingCapacity, manufacturer, year);
	// Display the data for the truck class.
	truck.displayInfo();

	endProgram();
}

