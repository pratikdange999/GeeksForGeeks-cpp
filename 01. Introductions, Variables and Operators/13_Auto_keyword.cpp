#include<iostream>
using namespace std;
void tryAdd(int x,int y)
{
    int c=x+y;
    cout<<c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    tryAdd(a,b);
    return 0;
}