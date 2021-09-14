//Given 2 integers a and b. Find the value of a/b, where b is not equal to zero. After computation the answer should be in double format with precised value.
#include<iostream>
using namespace std;
void compute_ab(int a,int b)
{   
    double x=static_cast<double>(a);
    double y=static_cast<double>(b);
    cout<<x/y;
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    compute_ab(a,b);
    return 0;
}
