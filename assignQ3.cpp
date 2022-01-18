#include<iostream>
using namespace std;
int main()
{
    int arr[15]={92,90,93,87,80,78,79,72,68,61,59};
    int i,count=0,count1=0,count2=0;
    for(i=0;i<15;i++)
    {
        if(arr[i]>=85)
        {
            
            count++;
        }
    }
    cout<<"hot days "<<count<<endl;

     for(i=0;i<15;i++)
    {
        if(arr[i]>=60 && arr[i]<=84)
        {
            
            count1++;
        }
    }
    cout<<"pleasant days "<<count1<<endl;
     for(i=0;i<15;i++)
    {
        if(arr[i]<60)
        {
            
            count2++;
        }
    }
    cout<<"cold days "<<count2;
}