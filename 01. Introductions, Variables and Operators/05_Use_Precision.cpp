#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    cout<<setprecision(2);
    cout<<a/b;
    return 0; 
}
/*
how to get a precise answer out of a floating number. You are given two floating numbers a and b. 
You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.
Note: You may use setprecision and fixed.
*/
