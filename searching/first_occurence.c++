#include<bits/stdc++.h>
using namespace std;
int first_occurenece(vector<int>&v,int l,int h,int key,int m)
{
    // int m=-1;
    if(l>h)
    return m;
    int mid=(l+h)/2;
    if(v[mid]==key)
    {
        m=mid;
       first_occurenece(v,l,mid-1,key,m);
    }
    else if(v[mid] > key)
    first_occurenece(v,l,mid-1,key,m);
    else 
    first_occurenece(v,mid+1,h,key,m);
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
    int key;
    cin>>key;
    int m=-1;
    cout<<"the smallest index is"<<first_occurenece(v,0,x-1,key,m);
}
