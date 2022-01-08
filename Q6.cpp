#include<iostream>
using namespace std;
int main(){
    int angle1,angle2,angle3;
    cout<<"enter three angles";
   
    
    cin>>angle1>>angle2>>angle3;
    int sum=0;
    sum = angle1+angle2+angle3;
    if(sum==180){
        cout<<"triangle exists";
    }
    else{
        cout<<"triangle doesnt exist";
    }
}