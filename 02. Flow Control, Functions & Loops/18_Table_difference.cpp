#include<iostream>
using namespace std;
void printTable(int x,int y)
{
    for(int i=1;i<=10;i++)
    {
        cout<<((x*i)-(y*i))<<" ";
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    printTable(x,y);
    return 0;
}