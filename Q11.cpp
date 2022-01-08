#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,greatest;
    cout<<"enter three sides of a triangle in ascending order";
    cin>>s1>>s2>>s3;
    if(s1+s2>s3)
    cout<<"the triangle is valid";
    else
    cout<<"the triangle is invalid";
}