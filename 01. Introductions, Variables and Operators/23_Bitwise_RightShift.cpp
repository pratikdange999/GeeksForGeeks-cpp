#include<iostream>
using namespace std;
void tryBit(int a, int b)
{
    int x=a>>b;
    cout<<x;
}
int main()
{
    int a,b;
    cin>>a>>b;
    tryBit(a,b);
    return 0;
}