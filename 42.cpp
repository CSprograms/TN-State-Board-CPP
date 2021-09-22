/*
Formal and Actual Parameters
Page : 192
*/
#include<iostream>
using namespace std;

int sum(int x, int y)
{
    return ( x+y );
}
int main()
{
    int a,b;

    cout<<"\n Enter Number 1: ";
    cin>>a;

    cout<<"\n Enter Number 2: ";
    cin>>b;

    cout<<"\n the sum = "<<sum(a,b);

return 0;
}
