#include<iostream>
using namespace std;
void tryComment(int a,int b,int c)
{
    cout<<a<<endl;
    //cout<<b<<endl;
    cout<<c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    tryComment(a,b,c);
    return 0;
}
/*Your Task:
Your task is to complete a function that print a, b and c. Comment the code that outputs b, so only a and c gets printed.
*/