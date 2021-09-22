/*
Program 11.21
Function with return value and without parameter
Page : 197
*/
#include<iostream>
using namespace std;

int display()
{
    int a=10, b=5, s;

    s=a+b;

    return s;
}

int main()
{
     int m=display();

     cout<<"\nThe Sum="<<m;

return 0;
}
/*
Output:
T he Sum=15
*/