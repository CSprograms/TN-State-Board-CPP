/*
Program 11.10
Built-In Function - strcat(string)
Page : 188
*/
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char str1[50];

    cout<<"\nType any string in Lower case :";
    gets(str1);

    cout<<"\n Converted the Source string “<<str1<<into Upper Case is "<<strupr(str1);

return 0;
}
/*
Output
Type any string in Lower case : computer science
Converted the Source string computer science into Upper Case is COMPUTER SCIENCE
*/