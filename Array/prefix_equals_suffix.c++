Program-:C++ program to check whether suffix sum is equal to prefix sum

#include<bits/stdc++.h>
using namespace std;
void prefixsum(vector<int>&v)
{
    for(int i=1;i<v.size();i++)
    {
        v[i]=v[i-1]+v[i];
    }
}
bool subarray(vector<int>&v)
{
    int sum=v[v.size()-1];
   for(int i=0;i<v.size();i++)
   {
    int suffix_sum =sum-v[i];
    if(suffix_sum==v[i])
    {
        return true;
    }
   }
    return false;
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
    prefixsum(v);
   bool a= subarray(v);
   cout<<a;
}
