#include <iostream>
using namespace std;

class Patient
{
private:
    string name;
    int age;
    string disease;
    float charges;

public:
    void registerPatient()
    {
        cout << "Enter patient name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter disease: ";
        cin >> disease;
    }

    void calculateCharges()
    {
        if (age < 18)
            charges = 300;
        else
            charges = 500;
    }

    void displayPatient()
    {
        cout << "\nPatient Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "Consultation Charges: Rs. "
             << charges << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();
    p.calculateCharges();
    p.displayPatient();

    return 0;
}