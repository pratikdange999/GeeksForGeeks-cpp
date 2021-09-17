#include<iostream>
using namespace std;
void decToHex(int a)
{
    cout<<hex<<a;
}
int main()
{
    int b;
    cin>>b;
    decToHex(b);
    return 0;
}