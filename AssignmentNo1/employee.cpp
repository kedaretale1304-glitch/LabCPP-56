#include<iostream>
#include<string>
using namespace std;

class Employee {
    private:

        int employeeId;
        string branch;
        float basicSalary;
        string employeeDesignation;

    public:

        void getdata() {
            cout << "Enter Employee ID: ";
            cin >> employeeId;

            cout << "Enter Branch: ";
            getline(cin >> ws, branch);

            cout << "Enter Basic Salary: ";
            cin >> basicSalary;

            cout << "Enter Employee Designation: ";
            getline(cin >> ws, employeeDesignation);
        }

        void displaydata() const {

            cout << "\n----- Employee Details -----\n";
            cout << "Employee ID: " << employeeId << endl;
            cout << "Branch: " << branch << endl;
            cout << "Basic Salary: " << basicSalary << endl;
            cout << "Designation: " << employeeDesignation << endl;
        }

        void salaryCalculate() const {
            
            float hra, da, totalSalary;

            hra = basicSalary * 0.20;
            da = basicSalary * 0.10;
            totalSalary = basicSalary + hra + da;

            cout << "HRA: " << hra << endl;
            cout << "DA: " << da << endl;
            cout << "Total Salary: " << totalSalary << endl;
        }
};

int main() {

    Employee e1;

    e1.getdata();
    e1.displaydata();
    e1.salaryCalculate();

    return 0;
}