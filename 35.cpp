/*
Program 11.9
Built-In Function - strcat(target, source)
Page : 188
*/
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char target[50] = "Learning C++ is fun";
	char source[50] = " , easy and Very useful";

	strcat(target, source);

	cout << target ; return 0;
}
/*
Output
Learning C++ is fun , easy and Very useful
*/