#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>&v,int l, int x,int k) 
{
 if(l>x)
 return -1 ;
 int mid=(l+x)/2;
 if(v[mid]==k)
 return mid;
else if(v[mid]>k)
{
    binary_search(v,l,mid-1,k);

}
else
binary_search(v,mid+1,x,k);

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
    cout<<"the element iis present at index  "<<binary_search(v,0,x-1,key);

}
