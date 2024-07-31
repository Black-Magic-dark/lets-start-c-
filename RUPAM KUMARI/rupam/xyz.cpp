#include<iostream>
using namespace std;
int main()
{
    int i,j;
   //int count =4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<" "; 
           //count--;

        }
       for(j=1;j<=i;j++) 
       {
        //cout<<count;
       // count++
        cout<<j;
       
       }
       cout<<endl;
    }
}