#include<iostream>
using namespace std;
void printSquare_Wall(int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main()
{
    int y;
    cin>>y;
    printSquare_Wall(y);
    return 0;
}