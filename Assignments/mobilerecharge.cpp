#include <iostream>
using namespace std;

class MobileRecharge
{
    string mobileNo;
    float balance = 0;

public:
    void enterMobile()
    {
        cout << "Enter mobile number: ";
        cin >> mobileNo;
    }

    void recharge()
    {
        float amount;

        cout << "Enter recharge amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Recharge successful!" << endl;
    }

    void deductBalance()
    {
        float amount;

        cout << "Enter amount to use: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "\nMobile Number: " << mobileNo << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.enterMobile();
    m.recharge();
    m.deductBalance();
    m.display();

    return 0;
}