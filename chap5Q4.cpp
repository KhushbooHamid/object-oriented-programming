#include<iostream>
using namespace std;
int distance(int x, int y)
{
    if(x>y)
    cout<<"The larger distance is " <<x;
    else
    cout<<"The larger distance is "<<y;
}
int main()
{
    int a,b;
    cout<<"enter two distances";
    cin>>a>>b;
    distance(a,b);
}