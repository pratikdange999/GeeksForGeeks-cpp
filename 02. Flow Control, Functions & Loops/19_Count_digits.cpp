#include<iostream>
using namespace std;
int countDigit(int n)
{
    int cnt=1;
    do
    {
        n=n/10;
        cnt++;
    } while (n>=10);
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<countDigit(n);
    return 0;
}