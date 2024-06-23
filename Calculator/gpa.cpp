#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

void gpa() {
	//Clears the terminal
	clear();
	//Variables
	float gradeOne, gradeTwo, gradeThree, gradeFour, gradeFive, gradeSix, gradeSeven;
	//Main program
	cout << "Grade number guide: A=4 B=3 C=2 D=1 F=0" << '\n';
	cout << "Please insert your first classes grade: "; cin >> gradeOne;
	cout << "Please insert your second classes grade: "; cin >> gradeTwo;
	cout << "Please insert your third classes grade: "; cin >> gradeThree;
	cout << "Please insert your fourth classes grade: "; cin >> gradeFour;
	cout << "Please insert your fith classes grade: "; cin >> gradeFive;
	cout << "Please insert your sixth classes grade: "; cin >> gradeSix;
	cout << "Please insert your seventh classes grade: "; cin >> gradeSeven;
	//Defines 2 new float vars to get your gpa
	float add = gradeOne + gradeTwo + gradeThree + gradeFour + gradeFive + gradeSix + gradeSeven;
	float gradePointAverage = add / 7;
	cout << "Your gpa is: " << gradePointAverage << '\n';
	char relaunch;
	cout << "Do you want to re-run the program? Y/N";
	cin >> relaunch;
	if (relaunch == 'Y') { gpa(); }
	if (relaunch == 'N') {
		cout << "Saving history to file.." << '\n';
		ofstream logfile;
		logfile.open("log.txt");
		logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \nGPA: " << gradePointAverage << '\n';
		logfile.close();
		cout << "Exit.." << '\n';
	}
	else {
		cout << "Expected Y/N got: " << relaunch << '\n';
	}
}