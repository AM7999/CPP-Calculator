#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

int main() {
	int menu;
	//Main Menu and the goto marker to relaunch the program at the end of each operation if statement
init:
	cout << "___________________________" << endl;
	cout << "|Please Select An Option  |" << endl;
	cout << "|                         |" << endl;
	cout << "|1. Addition              |" << endl;
	cout << "|2. Subtraction           |" << endl;
	cout << "|3. Multiplication        |" << endl;
	cout << "|4. Division              |" << endl;
	cout << "|5. MPG Calculation       |" << endl;
	cout << "|6. F to C Converter      |" << endl;
	cout << "|7. Grade Point Average   |" << endl;
	cout << "|8. Exit                  |" << endl;
	cout << "---------------------------" << endl;
	cout << "Option: ";
	cin >> menu;
	//If statements for each math function 
	if (menu == 1) { addition(); }
	if (menu == 2) { subtraction(); }
	if (menu == 3) { multiplication(); }
	if (menu == 4) { division(); }
	if (menu == 5) { mpg(); }
	if (menu == 6) { temp(); }
	if (menu == 7) { gpa(); }
	if (menu == 8) { return 0; }
	if (menu >> 8) { clear(); goto init; }
	return 0;
}