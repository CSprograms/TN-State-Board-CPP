/*
Illustration  9.8
Perimeter and area of a semi circle
Page : 141
*/

#include <iostream>
using namespace std;
int main()
{
    int radius;
    float pi = 3.14;

    cout<<"\n Enter Radius (in cm): ";
    cin>>radius;

    float perimeter = (pi+2)*radius;  // dynamic initialization
    float area = (pi*radius*radius)/2; // dynamic initialization

    cout<<"\n Perimeter of the semicircle is "<<perimeter<<" cm";
    cout<<"\n Area of the semicircle is "<<area<<" sq.cm";

return 0;
}

// Input : 14
