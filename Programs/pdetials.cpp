#include <iostream>
using namespace std;

int main()
{
    int rollNo;
    string className, division;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Class: ";
    cin >> className;

    cout << "Enter Division: ";
    cin >> division;

    cout << "\nStudent Details" << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Class: " << className << endl;
    cout << "Division: " << division << endl;

    return 0;
}