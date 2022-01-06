#include<iostream>
using namespace std;
int main()
{
    int cost_price,selling_price;
    cin>>cost_price>>selling_price;
    if(cost_price>selling_price){
        cout<<"loss of "<<cost_price-selling_price <<" rupees";
    }
    else if(cost_price==selling_price){
        cout<<"neither loss nor profit";
    }
    else
    {
        cout<<"profit of "<<selling_price-cost_price <<" rupees";
    }
}