#include<iostream>
using namespace std;
int hms_secs(int hours, int mins, int secs)
{
    return(hours*3600+mins*60+secs);
}
int secs_hms(int s)
{
    cout<<s/3600<<" hours "<<(s%3600)/60<<" mins "<<(s%3600)%60<<" secs";
}
int main()
{
    int h,m,s,secs;
    cout<<"enter time in hours mins secs";
    cin>>h>>m>>s;
    cout<<hms_secs(h,m,s)<<" is time in secs"<<endl;
    cout<<"enter time in secs";
    cin>>secs;
    secs_hms(secs);

}
