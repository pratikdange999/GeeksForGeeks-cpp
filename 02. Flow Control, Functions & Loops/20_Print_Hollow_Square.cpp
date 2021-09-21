#include<iostream>
using namespace std;
void printHollowSquare(int rows)
{
    int i,j;
    for(i=1;i<=rows;i++)
    {
        if(i==1 || i==rows)
        {
            for(j=0;j<rows;j++)
                cout<<"* ";
        }
        else
        {
            for(j=1;j<=rows;j++)
            {
                if(j==1 || j==rows)
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
    int rows;
    cin>>rows;
    printHollowSquare(rows);
    return 0;
}