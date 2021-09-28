/*
Illustration 10.14
goto -- First five odd numbers
Page : 174
*/
# include <iostream>
using namespace std;
int main()
{

    int n=1;

jump:

    cout<<n<<'\t';

    n+=2;

    if(n<10)
        goto jump;          // Control of the program move to jump:

return 0;
}