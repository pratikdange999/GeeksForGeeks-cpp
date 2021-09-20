#include<iostream>
using namespace std;
int firstDigit(int x)
{
    while(x>10)
    {
        x=x/10;
        firstDigit(x);
    }
    return x;
}
int main()
{
    int x,y;
    cin>>x;
    y=firstDigit(x);
    cout<<y;
    return 0;
}