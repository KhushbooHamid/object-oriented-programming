#include<iostream>
using namespace std;
int pow(int x, int y)
{
    int i,z=1;
    for(i=1;i<=y;i++)
    {
    z=z*x;
    }
    
   return z;
}
int main()
{
    int a,b,c;
    cout<<"enter a number and enter its raised power";
    cin>>a>>b;
    cout<<pow(a,b);
}