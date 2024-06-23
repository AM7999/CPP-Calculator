#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

void subtraction() {
	int subOne, subTwo;
	//clears the terminal
	clear();

	//Main function
	cout << "Please Select a number for the variable subOne: ";
	cin >> subOne;
	cout << "Please Select a number for the variable subTwo: ";
	cin >> subTwo;
	cout << "Result: " << subOne - subTwo << '\n';
	char relaunch;
	cout << "Do you want to re-run the program? Y/N ";
	cin >> relaunch;
	if (relaunch == 'Y') { subtraction(); }
	//Writes the result of the 2 variables being subtracted to a file called "log.txt"
	if (relaunch == 'N') {
		cout << "Saving history to file.." << '\n';
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \n Subtraction: ";
		logfile << subOne - subTwo;
		logfile.close();
		cout << "Exit.." << '\n';
	}
	//Exits if the char variable relaunch is not equal to Y or N
	else {
		cout << "Expected uppercase got: " << relaunch << '\n';
	}
}