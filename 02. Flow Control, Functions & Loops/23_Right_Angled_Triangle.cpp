#include<iostream>
using namespace std;
void printRightAngledTriangle(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<"* ";
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    printRightAngledTriangle(n);
    return 0;
}
