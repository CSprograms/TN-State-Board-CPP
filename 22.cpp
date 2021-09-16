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
        cout<<n<<", ";
        n--;
    }while (n>0) ;
    return 0;
}
/*
Output 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
*/