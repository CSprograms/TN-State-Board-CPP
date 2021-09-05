/*
Total marks of three subjects
Page : 129
*/

#include <iostream>
using namespace std;
int main()
{

    int m1, m2, m3, sum;
    float avg;

    cout << "\n Enter Mark 1: ";
    cin >> m1;

    cout << "\n Enter Mark 2: ";
    cin >> m2;

    cout << "\n Enter Mark 3: ";
    cin >> m3;

    sum = m1 + m2 + m3;
    avg = sum/3.0;

    cout << "\n The sum = " << sum;
    cout << "\n The Average = " << avg;

return 0;
}

// Make changes in the above code to get the
// average of all the given marks.
