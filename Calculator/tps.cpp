#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

void tps() {
	double time;
	char relaunch;
	clear();
	cout << "Please enter the song runtime in minutes (ex. 1.45 for a 1 miutes 45 seccond song): "; cin >> time;
	double timeInSecconds = time * 60;
	int ticks = timeInSecconds * 20;
	cout << "song in ticks: " << ticks << '\n';
	cout << "\nDo you want to re-run the program? Y/N ";
	cin >> relaunch;
	if (relaunch == 'Y') { tps(); }
	//Writes the result of the 2 variables being subtracted to a file called "log.txt"
	if (relaunch == 'N') {
		cout << "Saving history to file.." << '\n';
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \n Song in ticks: ";
		logfile << ticks;
		logfile.close();
		cout << "Exit.." << '\n';
	}
	//Exits if the char variable relaunch is not equal to Y or N
	else {
		cout << "Expected uppercase got: " << relaunch << '\n';
	}
}