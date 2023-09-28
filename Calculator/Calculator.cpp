#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//Variables-Declare
	int menu;
	char relaunch;
	int addOne;
	int addTwo;
	int subOne;
	int subTwo;
	int mulOne;
	int mulTwo;
	float divOne;
	float divTwo;

init:
	cout << "___________________________" << endl;
	cout << "|Please Select An Option  |" << endl;
	cout << "|                         |" << endl;
	cout << "|1. Addition              |" << endl;
	cout << "|2. Subtraction           |" << endl;
	cout << "|3. Multiplication        |" << endl;
	cout << "|4. Division              |" << endl;
	cout << "|5. Exit                  |" << endl;
	cout << "---------------------------" << endl;
	cout << "Option: ";
	cin >> menu;


	if (menu == 1) {
		system("cls");
		system("clear");
		cout << "Please Select a number for the variable addOne: ";
		cin >> addOne;
		cout << "Please Select a number for the variable AddTwo: ";
		cin >> addTwo;
		cout << "Result: " << addOne + addTwo << endl;
		cout << "Do you want to re-run the program? Y/N ";
		cin >> relaunch;
		if (relaunch == 'Y') {
			goto init;
		}
		if (relaunch == 'N') {
			cout << "Saving history to file.." << endl;
			ofstream logfile;
			logfile.open("log.txt");
			logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \n Addition: ";
			logfile << addOne + addTwo;
			logfile.close();
			cout << "Exit.." << endl;
			return 2;
		}
		else {
			cout << "Expected uppercase got: " << relaunch << endl;
			return -1;
		}
	}

	if (menu == 2) {
		system("cls");
		system("clear");
		cout << "Please Select a number for the variable subOne: ";
		cin >> subOne;
		cout << "Please Select a number for the variable subTwo: ";
		cin >> subTwo;
		cout << "Result: " << subOne - subTwo << endl;
		cout << "Do you want to re-run the program? Y/N ";
		cin >> relaunch;
		if (relaunch == 'Y') {
			goto init;
		}
		if (relaunch == 'N') {
			cout << "Saving history to file.." << endl;
			ofstream logfile;
			logfile.open("log.txt");
			logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \n Subtraction: ";
			logfile << subOne - subTwo;
			logfile.close();
			cout << "Exit.." << endl;
			return 2;
		}
		else {
			cout << "Expected uppercase got: " << relaunch << endl;
			return -1;
		}
	}

	if (menu == 3) {
		system("cls");
		system("clear");
		cout << "Please Select a number for the variable mulOne: ";
		cin >> mulOne;
		cout << "Please Select a number for the variable mulTwo: ";
		cin >> mulTwo;
		cout << "Result: " << mulOne * mulTwo;
		cout << "Do you want to re-run the program? Y/N " << endl;
		cin >> relaunch;
		if (relaunch == 'Y') {
			goto init;
		}
		if (relaunch == 'N') {
			cout << "Saving history to file..";
			ofstream logfile;
			logfile.open("log.txt");
			logfile << "FILE WILL BE ERASED ON PROGRAM RE-EXIT \n Multiplication: ";
			logfile << mulOne * mulTwo;
			logfile.close();
			cout << "Exit.." << endl;
			return 2;
		}
		else {
			cout << "Expected uppercase got: " << relaunch << endl;
			return -1;
		}
	}

	if (menu == 4) {
		system("cls");
		system("clear");
		cout << "Please Select a number for the variable divOne: ";
		cin >> divOne;
		cout << "Please Select a number for the variable divTwo: ";
		cin >> divTwo;
		cout << "Result: " << divOne / divTwo << endl;
		cout << "Do you want to re-run the program? Y/N " << endl;
		cin >> relaunch;
		if (relaunch == 'Y') {
			goto init;
		}
		if (relaunch == 'N') {
			cout << "Saving history to file..";
			ofstream logfile;
			logfile.open("log.txt");
			logfile << "FILE WILL BE ERASED ON PROGRAM RE-EXIT \n Division: ";
			logfile << divOne / divTwo;
			logfile.close();
			cout << "Exit.." << endl;
			return 2;
		}
		else {
			cout << "Expected uppercase got: " << relaunch << endl;
			return -1;
		}
	}

	if (menu == 5) {
		return 0;
	}

	if (menu >> 5); {
		system("cls");
		system("clear");
		goto init;
	}

	return 0;
}