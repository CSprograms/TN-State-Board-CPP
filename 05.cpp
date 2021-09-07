/*
Illustration  9.6
Curved Surface Area of a cylinder (CSA)
CSA = 2 pi r * h
Page : 140
*/

#include <iostream>
using namespace std;
int main()
{
    float pi = 3.14, radius, height, CSA;

    cout<<"\n Curved Surface Area of a Cylinder";

    cout<<"\n Enter Radius (in cm): ";
    cin>>radius;

    cout<<"\n Enter Height (in cm): ";
    cin>>height;

    CSA = ( 2 * pi * radius ) * height;

    system("cls");

    cout<<"\n Radius: "<<radius<<"cm";
    cout<<"\n Height: "<<height<<"cm";
    cout<<"\n Curved Surface Area of a cylinder is "<<CSA<<"sq.cm";

return 0;
}
