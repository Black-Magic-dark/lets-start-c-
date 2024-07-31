#include<iostream>
#include<>
using namespace std;
int main()
{
   <int>v;
    <int>v2(6,1);
    cout<<"size of  v:"<<v.size()<<endl;
    cout<<"the capacity of vecor v:"<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"the size of : "<<v.size()<<endl;
    cout<<"the capacity of the  :"<<v.capacity()<<endl;
    v.push_back(80);
    v.push_back(8);
    v.push_back(489);
    v.pop_back();
    v.pop_back();

    cout<<"the size of  v:"<<v.size()<<endl;
    cout<<"the capacity of  v:"<<v.capacity()<<endl;
    

  cout<<"the size of the2: "<<v2.size()<<endl;
    cout<<"th ecapacity of 2 :"<<v2.capacity()<<endl;
    v2.push_back(56);
    v.pop_back();
    v2.push_back(90);
    cout<<"the size of the2: "<<v2.size()<<endl;
    cout<<"th ecapacity of 2:"<<v2.capacity()<<endl;
    <int>vnew;
    vnew.push_back(6);
     vnew.push_back(96);
     vnew.push_back(68);
     vnew.push_back(6);
     vnew.push_back(6897);
     vnew.push_back(60779);
     for(int i=0;i<vnew.size();i++)
     cout<<vnew[i]<<" ";
     cout<<"the size of th e new :"<<vnew.size()<<endl;
     cout<<"the capacity 0f the vnew :"<<vnew.capacity()<<endl;
     vnew.erase(vnew.end()+1);
    cout<<"the size of th e new :"<<vnew.size()<<endl;
     cout<<"the capacity 0f the vnew :"<<vnew.capacity()<<endl;
     for(int i=0;i<vnew.size();i++)
     cout<<vnew[i]<<" ";
     vnew.clear();
     cout<<"the size of th e new :"<<vnew.size()<<endl;
     cout<<"the capacity 0f he vnew :"<<vnew.capacity()<<endl;
     
<int>a;
a.push_back(908);
a.push_back(900);
a.push_back(90);
a.push_back(901);
cout<<a[3]<<endl;
cout<<a.front()<<endl;




       
           

       
       
 }
