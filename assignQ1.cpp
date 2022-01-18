#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int a[100];
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements of array in ascending order";
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[0]>a[i])
        {
            a[0]=a[i];
            
        }
    }
     cout<<a[0]<<" is smallest";
     cout<<endl;
      for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
            
        }
    }
     cout<<a[0]<<" is largest";
     cout<<endl;
    cout<<a[n/2]<<" is the average value";
    
}