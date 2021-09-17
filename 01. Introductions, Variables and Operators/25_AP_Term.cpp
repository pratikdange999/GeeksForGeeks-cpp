#include<iostream>
using namespace std;
void tryAP(int a,int d,int n)
{
    int a_n=a+(n-1)*d;
    cout<<a_n;
}
int main()
{
    int a,d,n;
    cin>>a>>d>>n;
    tryAP(a,d,n);
    return 0;
}