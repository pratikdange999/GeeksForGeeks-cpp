#include<iostream>
#include<cmath>
using namespace std;
void findLCM(int x,int y)
{
    int start=max(x,y);
    int end=(x*y);
    int lcm=start;
    for(int i=start;i<=end;i++)
    {
        if((i%x==0) && (i%y==0))
        {
            lcm=i;
            break;
        }
    }
    cout<<lcm;
}
int main()
{
    int x,y;
    cin>>x>>y;
    findLCM(x,y);
    return 0;
}