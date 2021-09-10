#include<iostream>
using namespace std;
void try_dataTypes(int a,float b, double c, long long l, string d)
{
    cout<<b/c<<"\t"<<b/a<<"\t"<<c/a<<"\t"<<(c/a)+l<<endl;
    cout<<d<<"\t"<<d[4];
}
int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    cin>>a>>b>>c>>l>>d;
    try_dataTypes(a,b,c,l,d);
    return 0;
}

