//The digital root of a natural number in a given radix is the value obtained by an iterative process of summing digits, on each iteration using the result from the previous iteration to compute a digit sum.
#include<iostream>
using namespace std;
void tryDigitalRoot(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x=x/10;
    }
    cout<<sum;
}
int main()
{
    int x;
    cin>>x;
    tryDigitalRoot(x);
    return 0;
}