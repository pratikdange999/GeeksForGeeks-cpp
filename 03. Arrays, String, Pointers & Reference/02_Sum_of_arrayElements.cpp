#include<iostream>
using namespace std;
void arraySum(int a[])
{
    int sum=0;
    for(int i=0;a[i]!='\0';i++)
    {
        sum+=a[i];
    }
    cout<<sum;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    arraySum(a);
    return 0;
}