#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int>&v,int x)
{
    for(int i=0;i<x-1;i++)
    {
        int flag=0;
        for(int j=0;j<x-1-i;j++)
        {
            if(v[j]>v[j+1])
            {
            swap(v[j],v[j+1]);
            flag=1;
            }
        }
        if(flag==0)
        break;
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
    bubble(v,x);
    for(int i=0;i<x;i++)
    {
        cout<<v[i]<<" ";
    }
}
