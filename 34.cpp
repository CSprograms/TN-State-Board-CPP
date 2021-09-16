/*
Program 11.8
Built-In Function - strcmp(string1, string2)
Page : 187
*/
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char string1[] = "Computer";
    char string2[] = "Science";
    int result; result = strcmp(string1,string2);
    if(result==0)
    {
        cout<<"String1 : "<<string1<<" and String2 : "<<string2 <<"Are Equal";
    }
    if (result<0)
    {
        cout<<"String1 :"<<string1<<" and String2 : "<<string2 <<" Are Not Equal";
    }
return 0;
}
/*
Output
String1 : Computer and String2 : Science Are Not Equal
*/