/*
Program 11.17
User Defined Function - square
Page : 193
*/
#include<iostream>
using namespace std;

void display(int x)
{
    int a=x*x;

    cout<<"\n\nThe Value inside display function (a * a):"<<a;
}

int main()
{
     int a;

     cout<<”\nExample : Function call by value:”;

     cout<<"\n\nEnter the Value for A :";
     cin>>a;

     display(a);
     cout<<"\n\nThe Value inside main function "<<a;

return 0;
}
/*
Output:
Example : Function call by value
Enter the Value for A : 5
The Value inside display function (a * a) : 25
The Value inside main function 5
*/