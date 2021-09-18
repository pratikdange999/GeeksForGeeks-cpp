#include<iostream>
using namespace std;
void greatestOfThree(int a,int b,int c)
{
    if((a>b)&&(a>c))
        cout<<a<<" is the greatest among the three.";
    else if((b>a)&&(b>c))
        cout<<b<<" is the greatest among the three.";
    else
        cout<<c<<" is the greatest among the three.";
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    greatestOfThree(a,b,c);
    return 0;
}