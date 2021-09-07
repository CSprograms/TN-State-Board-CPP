/*
Area of a circle
Page : 129
*/

#include <iostream>
using namespace std;
int main()
{
    int radius;
    float area;

    cout << "\n Enter Radius: ";
    cin >> radius;

    area = 3.14 * radius * radius;

    cout << "\n The area of circle = " << area;

return 0;
}
