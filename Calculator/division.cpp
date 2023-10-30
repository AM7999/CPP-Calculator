#include <iostream>
#include <fstream>
using namespace std;

#define clear() printf("\033[h\033[J")

void division() {
	float divOne, divTwo;
	//Clears the terminal
	clear();

	//Main function
	cout << "Please Select a number for the variable divOne: ";
	cin >> divOne;
	cout << "Please Select a number for the variable divTwo: ";
	cin >> divTwo;
	cout << "Result: " << divOne / divTwo << endl;
	char relaunch;
	cout << "Do you want to re-run the program? Y/N " << endl;
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
		cout << "Exit.." << endl;
	}
	//Exits if the char variable relaunch is not equal to Y or N
	else {
		cout << "Expected uppercase got: " << relaunch << endl;
	}
}