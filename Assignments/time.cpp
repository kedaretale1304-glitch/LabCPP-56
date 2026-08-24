#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void accept()
    {
        cin >> h >> m >> s;
    }

    void add(Time t)
    {
        int H, M, S;

        S = s + t.s;
        M = m + t.m;
        H = h + t.h;

        if(S >= 60)
        {
            S = S - 60;
            M++;
        }

        if(M >= 60)
        {
            M = M - 60;
            H++;
        }

        cout << "Time = " << H << ":" << M << ":" << S;
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter first time (HH MM SS): ";
    t1.accept();

    cout << "Enter second time (HH MM SS): ";
    t2.accept();

    t1.add(t2);

    return 0;
}