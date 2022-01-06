#include<iostream>
using namespace std;
int main(){
    int n,i;
    int sum=0;
    cout<<"enter five digit number";
    cin>>n;
    int temp=n;
    while(n>0){
        int r=n%10;
        sum=(sum*10)+r;
        n=n/10;

    }
    cout<<"the reversed number is "<< sum<<endl;
    if(temp==sum){
        cout<<"number and reversed number are equal";
    }
    else{
        cout<<"they are not equal";
    }
    
}