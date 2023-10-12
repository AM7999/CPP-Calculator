#include <iostream>
#include <fstream>
#include "addition.h"
#include "subtraction.h"
#include "division.h"
#include "multiplication.h"
using namespace std;

//Defines clear() to print an ASCII escape sequence which clears the terminal
#define clear()  printf("\033[H\033[J")

int main() {
	//Variables Declare
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
	cout << "|7. Exit                  |" << endl;
	cout << "---------------------------" << endl;
	cout << "Option: ";
	cin >> menu;

	//If statement for addition 
	if (menu == 1) {
		addition();
	}

	//If statement for subtraction
	if (menu == 2) {
		subtraction();
	}

	if (menu == 3) {
		multiplication();
	}

	if (menu == 4) {
		division();
	}

	if (menu == 7) {
		return 0;
	}

	if (menu >> 7) {
		clear();
		goto init;
	}

	return 0;
}