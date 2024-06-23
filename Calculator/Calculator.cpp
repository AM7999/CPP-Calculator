#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

int main() {
	int menu;
	while(true) {
		cout << "___________________________" << '\n';
		cout << "|Please Select An Option   |" << '\n';
		cout << "|                          |" << '\n';
		cout << "|1. Addition               |" << '\n';
		cout << "|2. Subtraction            |" << '\n';
		cout << "|3. Multiplication         |" << '\n';
		cout << "|4. Division               |" << '\n';
		cout << "|5. MPG Calculation        |" << '\n';
		cout << "|6. F to C Converter       |" << '\n';
		cout << "|7. Grade Point Average    |" << '\n';
		cout << "|8. Song in MC ticks       |" << '\n';
		cout << "|9. Exit                   |" << '\n';
		cout << "---------------------------" << '\n';
		cout << "Option: ";
		cin >> menu;

		//Switch statement for each math function 

		switch (menu) {
		default:
			cout << "Not an Option" << '\n';
			break;
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			mpg();
			break;
		case 6:
			temp();
			break;
		case 7:
			gpa();
			break;
		case 8:
			tps();
			break;
		case 9:
			return 0;
		}
	}
}
