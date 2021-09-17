#include<iostream>
using namespace std;
void tryLastDigit(int x)
{
    cout<<(x%10);
}
int main()
{
    int y;
    cin>>y;
    tryLastDigit(y);
    return 0;
}