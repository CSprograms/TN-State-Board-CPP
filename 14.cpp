/*
Illustration 10.4
if-else ladder -- Grade calculation
Page : 159
*/
#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout<<"Enter the Marks : ";
    cin>>marks;
    if ( marks >=0 && marks <=100 )
    {
    if ( marks >= 60 )
    {
        cout<<"Your grade is 1st class !!"<<endl;
    }
    else if ( marks >= 50 )     //  else if ( marks >= 50 && marks < 60 )
    {
        cout<<"Your grade is 2nd class !!"<<endl;
    }
    else if ( marks >= 40 )     //  else if ( marks >= 40 && marks < 50 )
    {
        cout<<"Your grade is 3rd class !!"<<endl;
    }
    else
    {
        cout<<"You are fail !!"<<endl;
    }
    }
    else
        cout<<"Mark is out of range"<<endl;

return 0;
}

//Input: 60