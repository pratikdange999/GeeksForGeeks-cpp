#include<iostream>
#include<cmath>
using namespace std;
void findGCD(int x,int y)
{
    int i,gcd=1;
    int limit=min(x,y);
    for(i=1;i<=limit;i++)
    {
        if((x%i==0) &&(y%i==0))
        {
            gcd=i;
        }
    }
    cout<<gcd;
}
int main()
{
    int x,y;
    cin>>x>>y;
    findGCD(x,y);
    return 0;
}