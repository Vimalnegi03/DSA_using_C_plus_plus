#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<int>&v)
{
    if(i==j && i+1==j)
    {
        return 0;
    }
    int ans=INT_MAX;
    for(int k=i+1;k<j;k++)
    {
    ans=min(ans,f(i,k,v)+f(k,j,v)+v[i]*v[j]*v[k]);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
 cout<<f(0,n-1,v);
}
