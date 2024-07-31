#include<iostream>
using namespace std;
int main()
{
// //  int i,j;
//  int count =4;
//  for(i=1;i<=4;i++)
//  {
//     for(j=1;j<=i;j++)
//     {
//         cout<<count <<" ";
//         count=count+1;
//     }  
// cout<<endl; 
//  }  

// // cout<< endl<<endl;  
//  int i,j;
//  int count=4;
//  for(i=1;i<=4;i++)
//  {
//     for(j=1;j<=(4-i);j++)
//     {
//         cout<< " ";
//       count++
//     }
//  for(j=1;j<=i;j++)
//     {
       
//         cout<<count;
//         // count=count;
//         count++;
//        // cout<<endl;
//         }
// cout<<endl;
//  }

int start=4;
int count=start;

    for(int r=1;r<=4;r++){
       
     
        

        for(int c=r;c<=4;c++){
            cout<<" ";
        }

        for(int c=1;c<r;c++){
            cout <<" "<<count-- ;
        }
        
        
    }
}