/*
Program 11.19
inline function
Page : 196
*/
#include<iostream>
using namespace std;

inline int add (int a , int b)
{
    int c=a+b;
    return(c);
}

int main()
{
     int x,y,z;
     cout<<"\nEnter the First Number :";
     cin>>x;

     cout<<"\nEnter the second Number      :";
     cin>>y;

     z=add(x,y);
     cout << "\n sum of "<<x<<"+"<<y<<"="<<z;

return 0;
}
/*
Output:
Enter the First Number :10
Enter the second Number :20
sum of 10+20=30
*/