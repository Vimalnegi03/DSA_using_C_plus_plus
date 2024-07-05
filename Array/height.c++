Problem Statement -:you are given the heights of peaks of a mountain return the maximum height till which you can reach-:

#include<bits/stdc++.h>
using namespace std;
int maxHeight(vector<int>&v)
{
    int max=v[0];
    for(int i=1;i<v.size();i++)
    {
     v[i]=v[i-1]+v[i];
     if(v[i]>max)
     {
        max=v[i];
     }
    }
    if(max<1)
    return 0;
    return  max;
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
int y=maxHeight(v);
cout<<y;
}
