#include<iostream>
using namespace std;
void tryCalculator(int a,int b,int op)
{
    switch (op)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    default:
        cout<<"INVALID INPUT";
        break;
    }
}
int main()
{
    int a,b,op;
    cin>>a>>b>>op;
    tryCalculator(a,b,op);
    return 0;
}