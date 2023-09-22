#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//Variables-Declare
	int launch;
	int menu;
	char relaunch;
	float addOne;
	float addTwo;
	float subOne;
	float subTwo;
	float mulOne;
	float mulTwo;
	float divOne;
	float divTwo;

	//Variables-Init
	launch = 0;
	menu = 0;

	cout << "Please select the operating system you are using" << endl;
	cout << "1. Windows" << endl;
	cout << "2. Linux" << endl;
	cin >> launch;

	if (launch == 1) {
		system("cls");
	}

	if (launch == 2) {
		system("clear");
	}

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

	if (launch == 1) {
		if (menu == 1) {
			system("cls");
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
				cout << "Saving history to file" << endl;

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
				cout << "Exit.." << endl;
				return 2;
			}
			else {
				cout << "Expected uppercase got: " << relaunch << endl;
				return -1;
			}
		}
	}
	
	if (launch == 2) {
		if (menu == 1) {
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
				cout << "Exit.." << endl;
				return 2;
			}
			else {
				cout << "Expected uppercase got: " << relaunch << endl;
				return -1;
			}
		}

		if (menu == 2) {
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
				cout << "Exit.." << endl;
				return 2;
			}
			else {
				cout << "Expected uppercase got: " << relaunch << endl;
				return -1;
			}
		}

		if (menu == 3) {
			system("clear");
			cout << "Please Select a number for the variable mulOne: ";
			cin >> mulOne;
			cout << "Please Select a number for the variable mulTwo: ";
			cin >> mulTwo;
			cout << "Result: " << mulOne * mulTwo;
			cout << "Do you want to re-run the program? Y/N ";
			cin >> relaunch;
			if (relaunch == 'Y') {
				goto init;
			}
			if (relaunch == 'N') {
				cout << "Exit.." << endl;
				return 2;
			}
			else {
				cout << "Expected uppercase got: " << relaunch << endl;
				return -1;
			}
		}

		if (menu == 4) {
			system("clear");
			cout << "Please Select a number for the variable divOne: ";
			cin >> divOne;
			cout << "Please Select a number for the variable divTwo: ";
			cin >> divTwo;
			cout << "Result: " << divOne / divTwo << endl;
			cout << "Do you want to re-run the program? Y/N ";
			cin >> relaunch;
			if (relaunch == 'Y') {
				goto init;
			}
			if (relaunch == 'N') {
				cout << "Exit.." << endl;
				return 2;
			}
			else {
				cout << "Expected uppercase got: " << relaunch << endl;
				return -1;
			}
		}
	}

	if (menu == 5) {
		return 2;
	}
	
	if (menu >> 5); {
		if (launch == 1) {
			system("cls");
		}
		if (launch == 2) {
			system("clear");
		}
		goto init;
	}

	return 0;
}