#include<iostream>
using namespace std;
int main()
{
    int n ;
    int arr [1000];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the element of array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);

            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i] <<" " ;


}