#include<iostream>
using namespace std;
void volume( int x)
{
    cout<<x*x*x;
}
void volume(int x,int y, int z)
{
    cout<<x*y*z;
}
int main()
{
    int x,y,z,w;
    cin>>x>>y>>z>>w;
    volume(x,y,z);
    volume(w);
    return 0;
}