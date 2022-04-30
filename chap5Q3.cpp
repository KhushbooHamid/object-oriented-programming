#include<iostream>
using namespace std;
int zerosmaller(int &x, int &y)
{
    if(y>x)
    cout<<"0 "<<y;
    
    else
    cout<<x<<" 0";
}
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    zerosmaller(a,b);
}