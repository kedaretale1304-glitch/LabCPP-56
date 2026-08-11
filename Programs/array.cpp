#include <iostream>
using namespace std;

int main() 
{
    int arr[4], sum = 0;

    cout << "Enter 4 elements: ";

    for(int i = 0; i < 4; i++) 
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}