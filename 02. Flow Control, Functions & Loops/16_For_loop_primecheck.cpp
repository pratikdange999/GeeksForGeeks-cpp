#include<iostream>
using namespace std;
string primeCheck(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return "No";
    }
    return "Yes";
}
int main()
{
    int n;
    cin>>n;
    string s=primeCheck(n);
    cout<<s;
    return 0;
}