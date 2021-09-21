#include<iostream>
using namespace std;
void printEvenChar(string s)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
            cout<<s[i];
    }
}
int main()
{
    string s;
    cin>>s;
    printEvenChar(s);
    return 0;
}