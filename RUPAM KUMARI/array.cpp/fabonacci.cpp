#include<iostream>
using namespace std;
int main()

{
    int i,n;
    int arr[1000];
   
    cout<<"enter the no.";
    cin>>n;
     arr[0]=0;
     arr[1]=1;
    for(i=2;i<=n;i++)
    arr[i]=arr[i-2]+arr[i-1];
    cout<<arr[n]<<" ";


}