#include<bits/stdc++.h>
#define ll long long int;
using namespace std;
bool comp(int x,int y)
{
    return x>y;
}
int minCostToBreak(int n,int m,vector<int>&vertical,vector<int>&horizontal)
{
    int ans=0;
sort(vertical.begin(),vertical.end(),comp);
sort(horizontal.begin(),horizontal.end(),comp);
int vr=1;
int hz=1;
int h=0;
int v=0;
while(h<horizontal.size()&&v<vertical.size())
{
if(vertical[v]>horizontal[h])
{
    ans+=vertical[v]*vr;
    hz++;
    v++;
}
else
{
    ans+=horizontal[h]*hz;
    vr++;
    h++;
}
}
while(h<horizontal.size())
{
     ans+=horizontal[h]*hz;
    vr++;
    h++;  
}
while(v<vertical.size())
{
 ans+=vertical[v]*vr;
    hz++;
    v++;
}
return ans;
}
int main()
{
    int n,m;
    cin>>m>>n;
    vector<int>horizontal,vertical;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        vertical.push_back(x);
    }
      for(int i=0;i<m-1;i++)
    {
        int x;
        cin>>x;
        horizontal.push_back(x);
}
cout<<minCostToBreak(m,n,vertical,horizontal);
}
