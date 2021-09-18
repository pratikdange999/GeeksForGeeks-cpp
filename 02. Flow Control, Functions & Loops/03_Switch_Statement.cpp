#include<iostream>
using namespace std;
void checkOne(int a)
{
    switch (a)
    {
    case 1:
        cout<<"One";
        break;
    
    default:
        cout<<"Not One";
        break;
    }
}
int main()
{
    int b;
    cin>>b;
    checkOne(b);
    return 0;
}