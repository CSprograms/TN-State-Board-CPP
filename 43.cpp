/*
Program 11.16
User Defined Function - Area of Circle
Page : 193
*/
#include<iostream>
using namespace std;

double area(const double r,const double pi=3.14)
{
    return(pi*r*r);
}

int main()
{
    double rad,res;

    cout<<"\nEnter Radius :";
    cin>>rad;

    res=area(rad);

    cout << "\nThe Area of Circle ="<<res;

return 0;
}
/*
Output:
Enter Radius :5
The Area of Circle =78.5
*/