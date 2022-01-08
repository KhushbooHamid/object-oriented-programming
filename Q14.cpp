#include<iostream>
using namespace std;
int main()
{
    int f=1,i,n;
    cin>>n;
    for(i=n;i>=1;i--)
    f=f*i;
    cout<<f<<" is the factorial of given number";
}