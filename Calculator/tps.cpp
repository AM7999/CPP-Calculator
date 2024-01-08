#include <iostream>
#include <fstream>
using namespace std;

#define clear() printf("\033[H\033[J")

void tps() {
	double time;
	clear();
	cout << "Please enter the song runtime in minutes (ex. 1.45 for a 1 miutes 45 seccond song): "; cin >> time;
	double timeInSecconds = time * 60;
	int ticks = timeInSecconds * 20;
	cout << "song in ticks: " << ticks << endl;
}