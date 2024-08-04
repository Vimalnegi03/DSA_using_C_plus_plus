#include<bits/stdc++.h>
using namespace std;
int peak(vector<int>&v, int low,int high)
{
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid-1]<v[mid])
        {
        ans=mid;
        low=mid+1;
        }
        else 
        high=mid-1;
       

    }
    return ans;
}
int main()
{
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    int ans=peak(v,0,x-1);
    cout<<ans;
}
