/*
Program 11.18
User Defined Function - call by reference
Page : 195
*/
#include<iostream>
using namespace std;

void display(int &x)
{
    x = x * x;

    cout<<"\n\nThe Value inside display function (n1 * n1):"<<x;
}

int main()
{
     int n1;

     cout<<"\nEnter the Value for N1 :";
     cin>>n1;

     cout<<"\nThe Value of N1 is inside main function Before passing : "<< n1;

     display(n1);

     cout<<"\nThe Value of N1 is inside main function After passing (n1 x n1)  : "<< n1;

return 0;
}
/*
Output:
Enter the Value for N1 :45
The Value of N1 is inside main function Before passing : 45
The Value inside display function (n1 x n1) :2025
The Value of N1 is inside main function After passing (n1 x n1)  : 2025
*/