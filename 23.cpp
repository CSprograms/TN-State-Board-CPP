/*
Illustration 10.13
nested loop -- multiplication table
Page : 172
*/
#include<iostream>
using namespace std;
int main(void)
{
    cout<< "A multiplication table:" <<endl <<"  1 \t 2 \t 3 \t 4 \t 5 \t 6 \t 7 \t 8 \t 9" <<endl<< "" <<endl;

    for(int c = 1; c < 10; c++)
    {
        cout<< c << "| ";

        for(int i = 1; i< 10; i++)
        {
            cout<<i * c << '\t';
        }

        cout<<endl;
    }

return 0;
}