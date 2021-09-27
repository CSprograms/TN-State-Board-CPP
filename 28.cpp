/*
Program 11.2
Accept and display a string.
Page : 182
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[50];

    cout<<"Enter a string : ";
    gets(str);

    cout<<"You entered: ";
    puts(str);

return(0);
}