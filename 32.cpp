/*
Program 11.6
Built-In Function - strcpy(target, source)
Page : 186
*/
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char source[] = "Computer Science";
    char target[20]="target";

    cout<<"\n String in Source Before Copied :"<<source;

    cout<<"\n String in Target Before Copied :"<<target;

    strcpy(target,source);

    cout<<"\n String in Target After strcpy function Executed :"<<target;

return 0;
}
/*
Output:
String in Source Before Copied :Computer Science
String in Target Before Copied :target
String in Target After strcpy function Executed :Computer Science
*/