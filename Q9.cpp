//library fine determination
#include<iostream>
using namespace std;
int main()
{
    float ret_late;
    cout<<"how many days are you late";
    cin>>ret_late;
    if(ret_late<=5)
    {
        cout<<ret_late*0.5<<" charged";
    }
    else if(ret_late<=10&&ret_late>5)
    {
        cout<<(ret_late-5)*1 + 2.5<<" charged";
    }
    else if(ret_late>10&&ret_late<30)
    {
        cout<<7.5+(ret_late-10)*5<<" charged";
    }
    else 
    cout<<"membership cancelled";
}