/*
Program 11.7
Built-In Function - strlen(string)
Page : 186
*/
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char source[ ] = "Computer Science";

    cout<<"\n Given String is "<<source<<" its Length is "<<strlen(source);

return 0;
}
/*
Output:
Given String is Computer Science its Length is 16
*/