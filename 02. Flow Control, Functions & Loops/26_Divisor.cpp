#include<iostream>
using namespace std;
void findDivisors(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            cout<<i<<"\t";
        }
    }
}
int main()
{
    int y;
    cin>>y;
    findDivisors(y);
    return 0;
}