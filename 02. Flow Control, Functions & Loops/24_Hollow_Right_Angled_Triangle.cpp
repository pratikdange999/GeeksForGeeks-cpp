#include<iostream>
using namespace std;
void printHollowRightTriangle(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if((i==1) || (i==n))
        {
            for(j=1;j<=i;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                if((j==1)||(j==i))
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<"\n";
    }
}
int main()
{
    int x;
    cin>>x;
    printHollowRightTriangle(x);
    return 0;
}