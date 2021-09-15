/*
Illustration  9.9
Reference variable
Page : 142
*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    int &temp = num;        //declaration of a reference variable temp

    num = 100;

    cout<<"\n The value of num = "<<num;
    cout<<"\n The value of temp = "<<temp;

    temp = 1000;

    cout<<"\n The value of num = "<<num;
    cout<<"\n The value of temp = "<<temp;

return 0;
}


