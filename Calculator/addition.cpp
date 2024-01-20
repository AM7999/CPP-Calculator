#include <iostream>
#include <fstream>
using namespace std;

#define clear() printf("\033[H\033[J")

void addition() {
    int addOne, addTwo;
    //Clears the terminal
    clear();
    
    //Main function
    cout << "Please Select a number to add: ";
    cin >> addOne;
    cout << "Please Select another number to add: ";
    cin >> addTwo;
    cout << "Result: " << addOne + addTwo << endl;
    char relaunch;
    cout << "Do you want to re-run the program? Y/N ";
    cin >> relaunch;
    if (relaunch == 'Y') addition();
    //Writes the result of the 2 variables being added to a file called "log.txt"
    else if(relaunch == 'N') {
        cout << "Saving history to file.." << endl;
        ofstream logfile;
        logfile.open("log.txt");
        logfile << "FILE WILL BE ERASED ON PROGRAM EXIT \n Addition: ";
        logfile << addOne + addTwo;
        logfile.close();
        cout << "Exit.." << endl;
    }
    //Exits if the char variable relaunch is not equal to Y or N
    else {
        cout << "Expected uppercase got: " << relaunch << endl;
    }
}