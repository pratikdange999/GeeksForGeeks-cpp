#include<iostream>
using namespace std;
void tryInputInteger(int x)
{
    cout<<x+10; 
}
int main()
{
    int a;
    cin>>a;
    tryInputInteger(a);
    return 0;
}