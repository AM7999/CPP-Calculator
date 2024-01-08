#include <iostream>
#include <fstream>
using namespace std;

void ohms() {
	double current, resistance;
	cout << "Enter the current: "; cin >> current;
	cout << "Enter the resistance: "; cin >> resistance;
	double voltage = current * resistance;
	cout << "The voltage is: " << voltage << " volts" << endl;
	char relaunch;
	cout << "Do you want to relaunch the program? Y/N ";
	cin >> relaunch;
	if (relaunch == 'Y') { ohms(); }
	if (relaunch == 'N') {
		cout << "Saving history to file.." << endl;
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \nVoltage: ";
		logfile << voltage;
		logfile.close();
		cout << "Exit.." << endl;
	}
}