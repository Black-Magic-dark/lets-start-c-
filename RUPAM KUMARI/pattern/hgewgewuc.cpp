#include<iostream>
using namespace std;
int main(){


    int row,col;
    for(row=1;row<=5;row++)
    {
       // char name='a'+col-1;
        for(col=1;col<=row;col++)
        {
            char name='a'+col-1; 
            cout<<name  <<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";

 int i ,j;
    for(i=20;i>2;i--)
    {
        for(j=10;j>2;j--)
        {
            cout<<j<<" ";
        }
     cout<<endl;   
    }


}