#include <iostream>
using namespace std;

class Fraction
{
    int n, d;

public:
    void accept()
    {
        cin >> n >> d;
    }

    void add(Fraction f)
    {
        int a = n * f.d + f.n * d;
        int b = d * f.d;

        cout << "Addition = " << a << "/" << b << endl;
    }

    void subtract(Fraction f)
    {
        int a = n * f.d - f.n * d;
        int b = d * f.d;

        cout << "Subtraction = " << a << "/" << b << endl;
    }
};

int main()
{
    Fraction f1, f2;

    cout << "Enter first fraction (numerator denominator): ";
    f1.accept();

    cout << "Enter second fraction (numerator denominator): ";
    f2.accept();

    f1.add(f2);
    f1.subtract(f2);

    return 0;
}