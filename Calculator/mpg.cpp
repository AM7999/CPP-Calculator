#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

void mpg() {
	clear();

	//Variables Declare
	int vYear;
	string vBrand;
	string vMake;
	float val1;
	float val2;
	char relaunch;
	//Gets the users input for the vehicle's brand, make, and year
	cout << "Please enter the vehicle's brand following a space: ";
	cin >> vBrand;
	cout << "Please enter the vehicle's make following a space: ";
	cin >> vMake;
	cout << "Please enter the vehicle's year: ";
	cin >> vYear;
	//Asks the user to input the miles traveled and the ammount of gallons it took to refil
	cout << "Please enter the the gallons of gas your vehicle took to refill: ";
	cin >> val1;
	cout << "Please enter the miles traveled: ";
	cin >> val2;
	//Declares the result variable as a floating variable
	float result = val2 / val1;
	//Outputs the result and the brand make and year of the car
	cout << vBrand << vMake << vYear << '\n';
	cout << val1 << '\n';
	cout << val2 << '\n';
	cout << result << '\n';
	cout << "Do you want to re-run the program? Y/N";
	cin >> relaunch;
	if (relaunch == 'Y') { mpg(); }
	if (relaunch == 'N') {
		cout << "Saving history to file.." << '\n';
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \nMPG: " << result << '\n';
		logfile << vBrand;
		logfile << vMake;
		logfile << vYear;
		logfile.close();
		cout << "Exit.." << '\n';
	}
	else {
		cout << "Expected uppercase got: " << relaunch << '\n';
	}
}