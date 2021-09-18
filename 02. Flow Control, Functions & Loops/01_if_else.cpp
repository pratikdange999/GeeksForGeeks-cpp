#include<iostream>
using namespace std;
void tryIfElse(int x)
{
    if(x>5)
        cout<<"Greater than 5";
    else if(x<5)
        cout<<"Less than 5";
    else
        cout<<"Equal to 5";
}
int main()
{
    int y;
    cin>>y;
    tryIfElse(y);
    return 0;
}