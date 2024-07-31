#include<iostream> 
using namespace std;
int main()
{
    
     int arr[5]={1,2,3,4,5};
    int start=0,end=4,i;
     while(start<end)
     {
      swap(arr[start],arr[end]);
      start++;
      end--;
     };
    for(i=0;i<5;i++)
    cout<<arr[i] <<" ";
    

    
    
}