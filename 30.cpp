/*
Program 11.4
Checking for Alpha-Numeric - Version 2
Page : 184
*/
#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;

    cout << "\n Enter a charater: ";
    ch = getchar();

    cout<<"\n The Return Value of isalpha(ch) is :" << isalpha(ch) ;

return 0;
}
/*
Output-1:
Enter a charater: A
The Return Value of isalpha(ch) is :1
Output-2:
Enter a charater: 7
The Return Value of isalpha(ch) is :0
Output-1:
Enter a charater: a
The Return Value of isalpha(ch) is :2
*/