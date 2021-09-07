/*
Illustration 10.1
if statement -- Check whether a person is eligible to vote
Page : 154
*/
#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<< "\n Enter your age: ";
    cin>> age;

    if( age >= 18 )
        cout<< "\n You are eligible for voting ....";

    cout<< "\n This statement is always executed.";

return 0;
}

//Input: 23