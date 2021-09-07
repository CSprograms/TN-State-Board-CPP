/*
Illustration 10.2
if-else statement -- Odd or Even
Page : 155
*/
#include<iostream>
using namespace std;

int main()
{
    int num, rem;

    cout<< "\n Enter a number: ";
    cin>>num;

    rem = num % 2;

    if ( rem == 0 )
        cout<<"\n The given number"<<num<<" is Even";
    else
        cout<<"\n The given number "<<num<<" is Odd";

return 0;
}

//Input: 10