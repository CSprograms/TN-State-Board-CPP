/*
Illustration 10.11
while loop -- sum and average of 5 numbers
Page : 169
*/
#include <iostream>
using namespace std;
int main ()
{
    int i=1,num,avg,sum=0;
    while(i<=5)
    {
        cout<<"Enter the number : ";
        cin>>num;
        sum=sum+num;
        i++;
    }
    avg=sum/5;
    cout<<"The sum is "<<sum<<endl;
    cout<<"The average is "<<avg;
return 0;
}
/*
Output
Enter the number : 1
Enter the number : 2
Enter the number : 3
Enter the number : 4
Enter the number : 5
The sum is 15
The average is 3
*/