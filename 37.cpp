/*
Program 11.11
Built-In Function - strlwr(string)
Page : 189
*/
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int main()
{
    char str1[50];

    cout<<"\nType any string in Upper case :";
    gets(str1);

    cout<<"\n Converted the Source string “<<str1<<into Lower Case is "<<strlwr(str1);

return 0;
}
/*
Output
Type any string in Upper case : COMPUTER SCIENCE
Converted the Source string COMPUTER SCIENCE into lower Case is computer science
*/