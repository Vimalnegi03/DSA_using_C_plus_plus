#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>&v,int low,int high,int key)
{
    while(low<=high)
    {
    int mid=(low+high)/2;
        if(v[mid]==key)
        return mid;
        else if(v[mid] > key)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
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
