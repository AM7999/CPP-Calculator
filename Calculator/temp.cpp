#include <iostream>
#include <fstream>
using namespace std;

#define clear() printf("\033[H\033[J")

void temp() {
	clear();

	//Variables Declare & Init
	string cityName = "";
	int tempInF = 0;
	char relaunch;

	//Asks user for City name and the temperature in Fahrenheit
	cout << "Please enter the name of the city: ";
	cin >> cityName;
	cout << "Please enter the temperature in fahrenheit: ";
	cin >> tempInF;

	//Prints results to terminal
	cout << "City name: " << cityName << endl;
	cout << "Temperature in Fahrenheit: " << tempInF << endl;
	int tempInC = (tempInF - 32) * 5 / 9;
	cout << "Temperature in Celsius: " << tempInC << endl;
	cout << "Do you want to relaunch the program? Y/N ";
	cin >> relaunch;
	if (relaunch == 'Y') {
		temp();
	}
	if (relaunch == 'N') {
		cout << "Saving history to file.." << endl;
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \n Temperature in Celsius: ";
		logfile << tempInC;
		logfile.close();
		cout << "Exit.." << endl;
	}
}