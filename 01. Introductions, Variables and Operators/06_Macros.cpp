#include<iostream>
#define mult(a,b) a*b
using namespace std;

void tryMacros(int a , int b)
{
    cout<<mult(a,b)<<endl;
}

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        tryMacros(a,b);
    }
    return 0;
}
