/*
Illustration 10.6
switch statement -- Weekdays
Page : 162
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\n Enter week day number: ";
    cin >> num;
    switch (num)
    {
        case 1 :
            cout << "\n Sunday";
            break;
        case 2 :
            cout << "\n Monday";
            break;
        case 3 :
            cout << "\n Tuesday";
            break;
        case 4 :
            cout << "\n Wednessday";
            break;
        case 5 :
            cout << "\n Thursday";
            break;
        case 6 :
            cout << "\n Friday";
            break;
        case 7 :
            cout << "\n Saturday";
            break;
        defau lt:
            cout << "\n Wrong input....";
        }
return 0;
}

/*
Output:
Enter week day number: 6
Friday
*/