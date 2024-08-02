#include<bits/stdc++.h>
using namespace std;
bool canDistribute(vector<int>&v,int mid,int s)
{
    int studentsReq=1;
    int currsum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>mid)
        return false;
        if(currsum +v[i] > mid )
        {
        studentsReq++;
        currsum=v[i];
        }
        if(studentsReq>s)
        return false;
        else{
            currsum=currsum+v[i];
        }
    }
    return true;
}
int choco(vector<int>&v,int s)
{
    int low=v[0];
    int high=0;
    for(int i=0;i<v.size();i++)
    {
        high=high+v[i];
    }
    int ans=-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(canDistribute(v,mid,s))
        {
            ans=mid;
            high=mid-1;
        }
        else
        low=mid+1;
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
    int student;
    cin>>student;
    int ans =choco(v,student);
     cout<<ans<<endl;

}
