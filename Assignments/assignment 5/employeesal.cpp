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

        Employee(int id, string br, float sal, string des){
            employeeId=id;
            branch=br;
            basicSalary=sal;
            employeeDesignation=des;

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

    Employee e1(12345,"HR",50000.0,"Head");

    e1.displaydata();
    e1.salaryCalculate();

    return 0;
}