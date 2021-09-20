/*
Illustration 10.3
Nested if statement -- Calculate commission according to grade
Page : 157
*/
#include<iostream>
using namespace std;

int main()
{
    int sales, commission;
    char grade;

    cout << "\n Enter Sales amount: ";
    cin >> sales;

    cout << "\n Enter Grade: ";
    cin >> grade;

    if ( sales > 5000 )
    {
        if (grade == 'A' )
            commission = sales * 0.10;
        else
            commission = sales * 0.05;
        cout << "\n Commission: " << commission;
        cout << "\n Good Job ..... ";
    }

return 0;
}

//Input: 6000 & A