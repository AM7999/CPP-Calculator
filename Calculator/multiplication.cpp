#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;


void multiplication() {
	int mulOne, mulTwo;
	//Clears the terminal
	clear();

	//Main function
	cout << "Please Select a number for the variable mulOne: ";
	cin >> mulOne;
	cout << "Please Select a number for the variable mulTwo: ";
	cin >> mulTwo;
	cout << "Result: " << mulOne * mulTwo;
	char relaunch;
	cout << "Do you want to re-run the program? Y/N " << '\n';
	cin >> relaunch;
	if (relaunch == 'Y') { multiplication(); }
	//Writes the result of the 2 variables being added to a file called "log.txt"
	if (relaunch == 'N') {
		cout << "Saving history to file..";
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM RE-EXIT \n Multiplication: ";
		logfile << mulOne * mulTwo;
		logfile.close();
		cout << "Exit.." << '\n';
	}
	//Exits if the char variable relaunch is not equal to Y or N
	else {
		cout << "Expected uppercase got: " << relaunch << '\n';
	}
}