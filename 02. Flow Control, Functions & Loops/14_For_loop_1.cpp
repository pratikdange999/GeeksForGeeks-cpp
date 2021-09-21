#include<iostream>
using namespace std;
void printTable(int n)
{
    for(int i=1;i<=10;i++)
    {
        cout<<(n*i)<<" ";
    }
}
int main()
{
    int a;
    cin>>a;
    printTable(a);
    return 0;
}