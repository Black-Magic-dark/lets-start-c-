#include<iostream>
using namespace std;
int main ()
{
 int i,min,ans,secondmax;
 ans=min;;
 int arr[4]={5,4,8,7};
 cin>>arr[i];
 for(i=0;i<4;i++)
  {
    if(arr[i]>min)
    ans=arr[i];
    cout<<ans<<endl;
  }
  secondmax= min;
  for(i=0;i<4;i++)
    {
        if(arr[i]!=ans)
        {
          secondmax=max(secondmax,arr[i]);
          cout<<secondmax ;
        }
    }
}