/*
Program 11.1
Accept a character and display it.
Page : 181
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    cout<<"\n Type a Character : ";
    char ch = getchar();

    cout << "\n The entered Character is: ";
    putchar(ch);

return 0;
}