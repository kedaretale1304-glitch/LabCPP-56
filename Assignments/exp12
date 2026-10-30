#include <iostream>
#include <string>
using namespace std;

// Base class
class Account
{
protected:
    string name;
    int accNo;
    double balance;

public:
    Account(string n, int a, double b)
    {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully!\n";
        }
        else
            cout << "Invalid amount!\n";
    }

    virtual void statement()
    {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accNo;
        cout << "\nBalance: Rs. " << balance << endl;
    }

    virtual ~Account() {}
};

// Savings Account
class SavingAcc : public Account
{
public:
    SavingAcc(string n, int a, double b)
        : Account(n, a, b) {}

    void statement() override
    {
        cout << "\n--- Savings Account Statement ---";
        Account::statement();
    }
};

// Checking Account
class CheckingAcc : public Account
{
public:
    CheckingAcc(string n, int a, double b)
        : Account(n, a, b) {}

    void statement() override
    {
        cout << "\n--- Checking Account Statement ---";
        Account::statement();
    }
};

int main()
{
    SavingAcc s("Rahul", 101, 5000);
    CheckingAcc c("Amit", 102, 3000);

    s.deposit(1000);
    c.deposit(500);

    Account *ptr;

    ptr = &s;
    ptr->statement();

    ptr = &c;
    ptr->statement();

    return 0;
}