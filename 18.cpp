/*
Illustration 10.8
for loop -- sum of 1 to 10
Page : 165
*/
#include <iostream>
using namespace std;
int main ()
{
    int i,sum=0;

    for(i=1; i<=10;i++)
    {
        sum=sum+i;
    }

    cout<<"The sum of 1 to 10 is "<<sum;
return 0;
}