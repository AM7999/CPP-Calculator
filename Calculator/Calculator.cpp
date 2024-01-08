#include <iostream>
#include <fstream>
#include "math.h"
using namespace std;

#define clear() printf("\033[H\033[J")

int main() {
	int menu;
start:
	clear();
	renderMenu();
	cout << "Option: ";
	cin >> menu;

	//Switch statement for each math function 

	switch (menu) {
	case 1:
		addition();
	case 2:
		subtraction();
	case 3:
		multiplication();
	case 4:
		division();
	case 5:
		mpg();
	case 6:
		temp();
	case 7:
		gpa();
	case 8:
		tps();
	case 9:
		return 0;
	}

	if (menu > 9) {
		goto start;
	}
}