#include<iostream>
using namespace std;
int main()
{
  int num,rem,ans=;
  int mul=1;
  cout<<" enter the number"  ;
  cin>>num;
  while(num>0)
  {
   rem=num%2;
   num=num/2;
   ans=rem*mul+ans;
   mul=mul*10
  }

cout<<ans<<endl;
 

}