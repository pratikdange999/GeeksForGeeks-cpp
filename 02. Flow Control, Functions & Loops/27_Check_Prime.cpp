#include<iostream>
using namespace std;
void checkPrime(int x)
{
    int i,cnt=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cnt++;
            break;
        }
    }
    if(cnt==0)
    {
        cout<<x<<" is prime";
    }
    else
    {
        cout<<x<<" is not prime";
    }
}
int main()
{
    int y;
    cin>>y;
    checkPrime(y);
    return 0;
}