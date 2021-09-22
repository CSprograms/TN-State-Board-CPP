/*
Program 11.14
Built-In Function - sin()
Page : 190
*/
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    double base, exponent, result;

    base = 5;
    exponent = 4;
    result = pow(base, exponent);

    cout << "pow("<<base << "^" << exponent << ") = " << result;

    double x = 25;

    result = sin(x);

    cout << "\nsin("<<x<<")= "<<result;

return 0;
}
/*
Output
pow(5^4) = 625
sin(25)= -0.132352
*/