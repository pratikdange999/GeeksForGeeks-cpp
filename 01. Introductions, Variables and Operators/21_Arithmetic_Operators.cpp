#include<iostream>
#include<math.h>
using namespace std;
void tryArithmeticOps(int x, int y)
{
    int p = x+y; 
    int q=x-y;
    int r = x*y ;
    float s = x/y;
    float u = x%y;
    float v = pow(x,y);
    cout<<p<<q<<r<<s<<u<<v;
}
int main()
{
    int x,y;
    cin>>x>>y;
    tryArithmeticOps(x,y);
    return 0;
}