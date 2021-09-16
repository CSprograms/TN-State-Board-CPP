/*
Illustration 10.15
break -- counting N numbers
Page : 175
*/
#include <iostream>
using namespace std;
int main ()
{
    int count = 1;
    do
    {
        cout<< "Count : " << count <<endl;
        if( count > 3)
        {
            break;
        }
        count ++;
    }while( count < 20 );
return 0;
}