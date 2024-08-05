//find index of minimum element
#include<bits/stdc++.h>
using namespace std;
int rotate(vector<int>&v,int low,int high)
{
    if(v.size()==1)
    return 0;

    if(v[low]<v[high])//array is sorted
     return low;
     //in case array is rotated and sorted
     else
     {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]>v[mid+1])
                return mid+1;
                if(v[mid]<v[mid-1])
                    return mid;
        if(v[mid]>v[high])
        {
            low=mid+1;
        }
        if(v[mid]<v[high])
        {
            high=mid-1;
        }
     }
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
    int ans=rotate(v,0,x-1);
    cout<<ans;
}
