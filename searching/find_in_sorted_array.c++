#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&v,int low,int high,int key)
{
    if(v[low<v[high]])
    {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]==key)
            {
                return  mid;
            }
            else if(v[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
    }
    //rotation
    else
    {
      while(low<=high)
      {
        int mid=(low+high)/2;
        if(v[mid]==key)
        return mid;
        if(v[mid]>key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
      }
      return -1;
    }
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
int ans =find(v,0,x-1,key);
cout<<ans;
}
