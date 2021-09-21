#include<iostream>
using namespace std;
int tryFactorial(int n)
{
    int fact=1;
    
    if (n == 0)
        return 1;
    return (n * tryFactorial(n - 1));
}
int main()
{
    int x;
    cin>>x;
    int y=tryFactorial(x);
    cout<<y;
    return 0;
}