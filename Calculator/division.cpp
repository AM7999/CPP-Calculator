#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

void division() {
	float divOne, divTwo;
	//Clears the terminal
	clear();

	//Main function
	cout << "Please Select a number to divide by: ";
	cin >> divOne;
	cout << "Please Select another number to divide by: ";
	cin >> divTwo;
	cout << "Result: " << divOne / divTwo << '\n';
	char relaunch;
	cout << "Do you want to re-run the program? Y/N " << '\n';
	cin >> relaunch;
	if (relaunch == 'Y') { division(); }
	//Writes the result of the 2 variables being added to a file called "log.txt"
	if (relaunch == 'N') {
		cout << "Saving history to file..";
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM RE-EXIT \n Division: ";
		logfile << divOne / divTwo;
		logfile.close();
		cout << "Exit.." << '\n';
	}
	//Exits if the char variable relaunch is not equal to Y or N
	else {
		cout << "Expected uppercase got: " << relaunch << '\n';
	}
}