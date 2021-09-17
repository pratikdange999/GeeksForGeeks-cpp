#include<iostream>
using namespace std;
void tryNaturalSum(int n)
{   
    int sum=(n*(n+1))/2;
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    tryNaturalSum(n);
    return 0;
}