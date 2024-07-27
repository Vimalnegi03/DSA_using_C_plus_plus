#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1={1,2,3,4,};
    auto itr=l1.begin();//itr contains the address
    cout<<*itr<<endl;
   for(auto num:l1)
   {
    cout<<num<<" "<<endl;
   }
   //reverse traversal
   for(auto itr=l1.rbegin();itr!=l1.rend();itr++)
   {
    cout<<*itr<<" ";
   }
    }
