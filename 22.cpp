/*
Illustration 10.12
do while loop -- printing 10 to 1
Page : 171
*/
#include <iostream>
using namespace std;
int main ()
{
    int n = 10;

    do
    {
        cout<<n;
        n--;
        if (n > 0)
            cout<<", ";
        else
            cout<<".";
    }while (n>0) ;

    return 0;
}