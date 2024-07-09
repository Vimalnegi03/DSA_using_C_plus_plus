Program-:you are given an array and two values left and right print the sum of all the parameters present between that range

#include<bits/stdc++.h>
using namespace std;
void prefixsum(vector<int>&v)
{
    for(int i=1;i<v.size();i++)
    {
        v[i]=v[i-1]+v[i];
    }
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
    int l,r;
    cout<<"enter your range"<<endl;
    cin>>l>>r;
    prefixsum(v);
    cout<<"The array after prefix sum is : "<<v[r]-v[l-1];
}
