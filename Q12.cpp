#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"enter the sides of triangle in ascending order";
    cin>>s1>>s2>>s3;
    if(s1==s2&&s1==s3)
    cout<<"the triangle is an equilateral triangle";
   
    
    else if(s1==s2&&s1!=s3 || s2==s3&&s2!=s1 || s3==s1&&s3!=s2)
    cout<<"the triangle is isosceles triangle";
    else if(s1*s1+s2*s2==s3*s3 )
    cout<<"the triangle is right angled";
    else
    cout<<"the triangle does not exist";
}