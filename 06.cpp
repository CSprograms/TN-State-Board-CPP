/*
Illustration  9.7
Dynamic initialization
Page : 141
*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout<<"\n Enter number 1: ";
    cin>>num1;

    cout<<"\n Enter number 2: ";
    cin>>num2;

    int sum = num1 + num2;      // Dynamic Initialization

    cout<<"\n Average: "<<sum/2.0;

return 0;
}
