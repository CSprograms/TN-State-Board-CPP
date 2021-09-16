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
    {
        if(n<10)
        {
            cout<<n<<'\t';
            n+=2;
            goto jump;          // Control of the program move to jump:
        }
        else
            return 0;
    }
}
/*
Output 1  2  5  7  9
*/