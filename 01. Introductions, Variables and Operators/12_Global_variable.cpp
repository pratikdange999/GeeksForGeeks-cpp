#include<iostream>
using namespace std;
int g=10;
void getter(int y)
{
    cout<<y;
}
void setter()
{
    int x=g;
    getter(x);
}
int main()
{
    setter();
    return 0;
}