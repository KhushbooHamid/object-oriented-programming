#include<iostream>
using namespace std;
struct calci
{
     float a,b,c,d,ans ;
    char ch,oper;
};
int main()
{
    calci c1;
     do{
    cout<<"enter fraction , operation, fraction";
    cin>>c1.a>>c1.b>>c1.oper>>c1.c>>c1.d;
   // cout<<c1.a<<"/"<<c1.b<<c1.oper<<c1.c<<"/"<<c1.d<<endl;
    switch(c1.oper)
    {
        case '+': c1.ans =  (c1.a*c1.d +c1. b*c1.c) / (c1.b*c1.d);break;
        case '-': c1.ans =  (c1.a*c1.d - c1.b*c1.c) / (c1.b*c1.d);break;
        case '*': c1.ans =  (c1.a*c1.c) / (c1.b*c1.d);break;
        case '/': c1.ans =  (c1.a*c1.d) / (c1.b*c1.c);break;
        default : c1.ans = 0;
    }
    cout<<"answer = "<<c1.ans;
    cout<<"do want to continue? ('y' or 'n')";
    cin>>c1.ch;
    }while(c1.ch!='n');
}