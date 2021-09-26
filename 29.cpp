/*
Program 11.3
Checking for Alpha-Numeric
Page : 183
*/
#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;
    int r;

    cout<<"\n Type a Character :";
    ch = getchar();

    r = isalnum(ch);

    cout<<"\nThe Return Value of isalnum(ch) is :"<<r;

return 0;
}
/*
Output-1:
Type a Character :A
The Return Value of isalnum(ch) is :1
Output-2:
Type a Character :?
The Return Value of isalnum(ch) is :0
Output-3:
Type a Character :a
The Return Value of isalnum(ch) is :2
*/