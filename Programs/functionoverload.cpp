#include <iostream>
using namespace std;
int area (int);
int area (int, int);
float area (float);

int main()
{
    cout<<"Calling the area() function for compiting the area of the square (side=5) - " <<area (5)<<"\n";
    cout<<"Calling the area() function for compiting the area of the rectangle (len=5, bre=10) - " <<area (5,10)<<"\n";
    cout<<"Calling the area() function for compiting the area of the circle (radius=5.5) - " <<area (5.5f);
    return 0;
}

int area(int side)
{
    return(side*side);
}

int area(int len, int bre)
{
    return(len*bre);

}

float area(float radius)
{
    return(3.14*radius*radius);
}