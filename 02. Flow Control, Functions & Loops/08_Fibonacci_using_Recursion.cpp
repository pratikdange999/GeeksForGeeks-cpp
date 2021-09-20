#include<iostream>
using namespace std;
int tryFibonacci(int n)
{
    if(n<=1)
        return n;
    else
        return (tryFibonacci(n-1)+ tryFibonacci(n-2));
}
int main()
{
    int x;
    cin>>x;
    cout<<tryFibonacci(x);
    return 0;
}