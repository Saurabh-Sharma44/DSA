#include<iostream>
#include<vector>
using namespace std;
int main()
{
//   //create vector/declare
//   vector<int>v;
//   vector<int>v1(5,1);
//   //size and capacity
//   cout<<"size of v:"<<v.size()<<endl;
//   cout<<"capacity of v:"<<v.capacity()<<endl;
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(6);
//   cout<<"size of v:"<<v.size()<<endl;
//   cout<<"capacity of v:"<<v.capacity()<<endl; 
//   //update value
//   v[1]=5;
//   cout<<"size of v1:"<<v1.size()<<endl;
//   cout<<"capaciyt of v1:"<<v1.capacity()<<endl;
//   v1.push_back(8);
//   cout<<"size of v1:"<<v1.size()<<endl;
//   cout<<"capaciyt of v1:"<<v1.capacity()<<endl;
//   vector<int>v3 = {1,3,5,6,8};
//   cout<<"size of v3 :"<<v3.size()<<endl;
//   vector<int>vnew;
//   vnew.push_back(7);
//   vnew.push_back(23);
//   vnew.push_back(8);
//   vnew.push_back(4);
//   vnew.push_back(9);
//   vnew.pop_back();
//   cout<<"size of vnew:"<<vnew.size()<<endl;
//   cout<<"capaciyt of vnew:"<<vnew.capacity()<<endl;
//   vnew.erase(vnew.begin()+2);
//   cout<<"size of vnew:"<<vnew.size()<<endl;
//   cout<<"capaciyt of vnew:"<<vnew.capacity()<<endl;
//   //printing value
//   for(int i=0;i<vnew.size();i++)
//   cout<<vnew[i]<<" "<<endl;
// //inserting value
//   vnew.insert(vnew.begin()+1,45);
//    for(int i=0;i<vnew.size();i++)
//   cout<<vnew[i]<<" ";

  vector<int>a;
  a.push_back(5);
  a.push_back(56);
  a.push_back(89);
  a.push_back(67);
  a.push_back(345);  

  //sort in increasing order
  sort(a.begin(),a.end());
  for(int i=0;i<a.size();i++)
  cout<<a[i]<<" ";
  
  //sort in decreading order 
  sort(a.begin(),a.end(),greater<int>());
  for(int i=0;i<a.size();i++)
  cout<<a[i]<<" ";



}