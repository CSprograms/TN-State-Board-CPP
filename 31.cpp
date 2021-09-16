/*
Program 11.5
Checking for isdigit
Page : 184
*/
#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;
    cout << "\n Enter a Character: ";
    cin >> ch;
    cout<<"\n The Return Value of isdigit(ch) is :" << isdigit(ch) ;
return 0;
}
/*
Output-1
Enter a Character: 3
The Return Value of isdigit(ch) is :1
Output-2
Enter a Character: A
The Return Value of isdigit(ch) is :0
*/