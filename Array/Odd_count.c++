Program-:Calculate the odd count
#include<bits/stdc++.h>
using namespace std;
int odd(vector<int>&v)
{
 int count =0;
 int odd_count =0;
 int sum=0;

 for(int i=0;i<v.size();i++)
 {
  sum=sum+v[i];
   if(sum%2==1)
   {
    odd_count++;
   }
 count =count +odd_count;
 if(sum%2==0)
 {
    odd_count=0;
 }
 }
 return count;
}
int main()
{
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    int o= odd(v);
    cout<<o;
}
