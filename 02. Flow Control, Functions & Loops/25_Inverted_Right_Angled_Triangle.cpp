#include<iostream>
using namespace std;
void printInvertedRightTriangle(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main()
{
    int x;
    cin>>x;
    printInvertedRightTriangle(x);
    return 0;
}