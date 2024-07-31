#include<iostream>
using namespace std;
int main()
{
    int arr[10],i;
    int ans,max,min;
    cout<<"enter the element ";
    for(i=0;i<10;i++)
    cin>>arr[i];
    cout<<" the element ";
    for(i=0;i<10;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
   
     
     for(i=0;i<10;i++)
    if(arr[i]>min)
     ans=arr[i];
     cout<<ans;
return 0;
    
}