/*
Illustration 10.9
for loop -- sum of 1 to n
Page : 166
*/
#include <iostream>
using namespace std;
int main ()
{
    int i, sum=0, n;

    cout<<"\n Enter The value of n : ";
    cin>>n;

    i =1;

    for (  ; i <= n;  )
    {
        sum += i;
        ++i;
    }

    cout<<"\n The sum of 1 to " <<n<<"is "<<sum;

return 0;
}