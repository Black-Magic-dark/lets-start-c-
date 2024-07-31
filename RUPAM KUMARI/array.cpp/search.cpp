#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,x;
    cout<<"enter the element ";
    for(i=0;i<5;i++)
    cin>>arr[i];
    cout<<"the element  are ";
    for(i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"the element to be search is: ";
    cin>>x;
    for(i=0;i<5;i++)
    
     if(arr[i]==x)
     {
      cout<<"found";
       break;
     }
    
    else
     cout<<"no";
    
    return 0;
}



