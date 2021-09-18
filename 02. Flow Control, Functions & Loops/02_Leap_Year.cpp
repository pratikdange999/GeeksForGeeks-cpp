#include<iostream>
using namespace std;
void isLeap(int x)
{
    if((x%4==0)&&(x%100!=0))
    {
        cout<<x<<" is a leap year";
    }
    else if (x%400==0)
    {
        cout<<x<<" is a leap year";
    }
    else 
        cout<<x<<" is not leap year";
}
int main()
{
    int y;
    cin>>y;
    isLeap(y);
    return 0;
}