/*
Illustration  9.10
Calculating Net Salary
Page : 144
*/

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float basic, da, hra, gpf, tax, gross, np;
    char name[30];

    cout<<"\n Enter the Name: ";
    cin>>name;

    cout<<"\n Enter Basic Pay: ";
    cin>>basic;

    cout<<"\n Enter D.A : ";
    cin >> da;

    cout<<"\n Enter H.R.A: ";
    cin>>hra;

    gross = basic + da + hra; // sum of basic, da and hra

    gpf = ( basic + da ) * 0.10; // 10% of basic and da

    tax = gross * 0.10; //10% of gross pay

    np = gross - ( gpf + tax ); //netpay = earnings - deductions
    cout<<left;
    cout<<setw(25)<<"Name"<<" : "<<setw(10)<<name<<endl;
    cout<<left;
    cout<<setw(25)<<"Basic Pay"<<" : "<<right<<setw(10)<<basic<<endl;
    cout<<left;
    cout<<setw(25)<<"Dearness Allowance"<<" : "<<right<<setw(10)<<da<<endl;
    cout<<left;
    cout<<setw(25)<<"House Rent Allowance"<<" : "<<right<<setw(10)<<hra<<endl;
    cout<<left;
    cout << setw(25)<<"Gross Pay"<<" : "<<right<<setw(10)<<gross<<endl;
    cout<<left;
    cout << setw(25)<<"G.P.F"<<" : "<<right<<setw(10)<<gpf<<endl;
    cout<<left;
    cout << setw(25)<<"Income Tax"<<" : "<<right<<setw(10)<<tax<<endl;
    cout<<left;
    cout << setw(25)<<"Net Pay"<<" : "<<right<<setw(10)<<np<<endl;

return 0;
}

/*
Input:
Basic Pay : 12000
DA : 1250
HRA : 1450
*/
