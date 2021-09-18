#include<iostream>
using namespace std;
void evenOddGame(int x)
{
    if(x%2==0)
    {
        cout<<"Friend Won";
    }
    else
    {
        cout<<"You Won";
    }
}
int main()
{
    int y;
    cin>>y;
    evenOddGame(y);
    return 0;
}