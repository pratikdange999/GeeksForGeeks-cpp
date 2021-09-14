//You are given a function utility() which prints count  every time it is called. The function will be called by the driver's code n times.
#include<iostream>
using namespace std;
int count=1;
void tryUtility()
{
    cout<<count<<"\t";
    count++;   
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        tryUtility();
    }
    return 0;
}