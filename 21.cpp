/*
Illustration 10.11
while loop -- sum and average of 5 numbers
Page : 169
*/
#include <iostream>
using namespace std;
int main ()
{
    int i = 1, num, sum = 0;
    float  avg;

    while(i<=5)
    {
        cout<<"Enter the number : ";
        cin>>num;

        sum = sum + num;
        i++;
    }

    avg = sum/5.0;

    cout<<"The sum is "<<sum<<endl;
    cout<<"The average is "<<avg;

return 0;
}