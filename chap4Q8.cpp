#include<iostream>
using namespace std;
struct fraction
{
    int a,b,c,d;
};
int main()
{
    fraction f1;
    cout<<"enter numerator and denominator of fraction 1 and 2 ";
    cin>>f1.a>>f1.b>>f1.c>>f1.d;
    cout<<"first fraction "<<f1.a<<"/"<<f1.b<<" and second fraction is "<<f1.c<<"/"<<f1.d<<endl<<"the sum of first and second fraction is "<<(f1.a*f1.d+f1.b*f1.c)<<"/"<<f1.b*f1.d;
    
    
    
    
}