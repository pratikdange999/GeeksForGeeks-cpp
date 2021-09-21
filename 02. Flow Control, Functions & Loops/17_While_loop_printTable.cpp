#include<iostream>
using namespace std;
void printTable(int n)
{   
    int i=10;
    while(i>0)
    {
        cout<<n*i<<" ";
        i--;
    }
}
int main()
{
    int a;
    cin>>a;
    printTable(a);
    return 0;
}