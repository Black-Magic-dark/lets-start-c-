#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<" enter the size of array:";
    cin>>n;
    cout<<"enter the element :";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            
        }
    }
for( int i=0;i<n;i++)
cout<<arr[i]<<" ";
}