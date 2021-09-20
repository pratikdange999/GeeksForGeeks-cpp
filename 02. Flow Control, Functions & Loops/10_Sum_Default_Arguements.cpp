#include<iostream>
using namespace std;
int sum(int a=0,int b=0,int c=0,int d=0)
{
    return (a+b+c+d);
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<sum(a,b)<<"\n";
    cout<<sum(a,b,c)<<"\n";
    cout<<sum(a,b,c,d);
    return 0;
}