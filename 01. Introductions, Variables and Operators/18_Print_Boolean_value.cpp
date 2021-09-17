#include<iostream>
using namespace std;
void tryBoolean(bool a)
{
    cout<<boolalpha<<a;
}
int main()
{
    bool b;
    cin>>b;
    tryBoolean(b);
}