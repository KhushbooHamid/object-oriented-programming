#include<iostream>
using namespace std;
int main(){
    int len,bth;
    cout<<"enter length and breadth";
    cin>>len>>bth;
    int area=len*bth;
    int perimeter=len+bth;
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"area is less than perimeter";
    }

}