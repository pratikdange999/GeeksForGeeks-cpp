/*Given two numbers a and b,you need to swap their values so a holds the value of b and b holds the value of a. 
*/
#include<iostream>
using namespace std;

void tryNumberSwap(int a,int b)
{
    int temp;
    cout<<"Before Swapping: a="<<a<<"\t b="<<b<<"\n";
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping: a="<<a<<"\t b="<<b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    tryNumberSwap(a,b);
    return 0;
}
