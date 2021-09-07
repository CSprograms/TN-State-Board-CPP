/*
Illustration 9.3:
Get an ASCII value and display the corresponding character
Page : 134
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;

    cout << "\n Enter an ASCII code (0 to 255): ";
    cin >> n;

    ch = n;

    cout << "\n Equivalent Character: " << ch;

return 0;
}

// Input : 100
