#include<iostream>
using namespace std;
float circarea(float x)
{
    return(3.14*x*x);
}
int main()
{
    float radius;
    cout<<"Enter the radius of circle ";
    cin>>radius;
    cout<<circarea(radius);
}