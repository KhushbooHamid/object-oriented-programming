#include<iostream>
using namespace std;
int main()
{
    int age_Ram,age_Shaam,age_Ajay;
    cin>>age_Ram>>age_Shaam>>age_Ajay;
    if(age_Ram<age_Shaam&&age_Ram<age_Ajay)
    {
        cout<<"ram is youngest";
    }
    else if(age_Shaam<age_Ram&&age_Shaam<age_Ajay)
    {
        cout<<"shaam is youngest";
    }
    else
    {
        cout<<"ajay is youngest";
    }
}