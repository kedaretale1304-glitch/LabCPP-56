#include <iostream>
#include<iomanip> // for setw
 
using namespace std;

int main()
{
    int Basic=950, Allowance=95, Total=1045;

    cout<<setw(5)<<"Basic"<<setw(5)<<Basic<<endl
        << setw(5)<<"Allowance"<<setw(5)<<Allowance<<endl 
        <<setw(5)<<"Total"<<setw(5)<<Total<<endl;
        return 0;
}