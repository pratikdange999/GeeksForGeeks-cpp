#include<iostream>
using namespace std;
void tryScientific(double a)
{
    cout<<scientific<<a;
}
int main()
{
    double b;
    cin>>b;
    tryScientific(b);
    return 0;
}