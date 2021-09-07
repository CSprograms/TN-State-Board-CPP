/*
Illustration 10.5
Conditional operator -- Greatest of two numbers
Page : 160
*/
#include<iostream>
using namespace std;

int main()
{
    int a, b, largest;

    cout<<"\n Enter any two numbers : ";
    cin>>a>>b;

    largest = ( a > b ) ? a : b;

    cout<<"\n Largest number : "<<largest;

return 0;
}

//Input: 60