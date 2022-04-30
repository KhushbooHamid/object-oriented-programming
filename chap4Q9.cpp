#include<iostream>
using namespace std;
struct time
{
    int secs,mins,hours;
};
int main()
{
    time t1;
    int s;
    cout<<"enter time in sec-min-hour format";
    cin>>t1.secs>>t1.mins>>t1.hours;
    cout<<"the time is "<<t1.secs<<"-"<<t1.mins<<"-"<<t1.hours;
    s=t1.secs+t1.mins*60+t1.hours*3600;
    cout<<"seconds = "<<s;
    cout<<"original format "<<s/3600<<"hours "<<(s-s/3600)/60<<"mins ";
}