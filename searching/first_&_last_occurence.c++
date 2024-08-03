#include<bits/stdc++.h>
using namespace std;
int first_occurence(vector<int>&v,int x,int key)
{
int high=x;
int low=0;
int min=INT16_MAX;
while(low<=high)
{
 int mid=(low+high)/2;
 if(v[mid]==key)
 {
    if(min > mid)
    {
        min =mid;
    }
    high=mid-1;
 }
 else if (v[mid] < key)
        low=mid+1;
      else      
      high=mid-1;
}
if(min==INT16_MAX)
return -1;
else
return min;
}
int last_occurence(vector<int>&v,int x,int key)
{
int high=x;
int low=0;
int max=INT16_MIN;
while(low<=high)
{
 int mid=(low+high)/2;
 if(v[mid]==key)
 {
    if(max < mid)
    {
        max =mid;
    }
    low=mid+1;
 }
 else if (v[mid] < key)
        low=mid+1;
      else      
      high=mid-1;
}
if(max==INT16_MIN)
return -1;
else
return max;
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    int key;
    cin>>key;
    int a=first_occurence(v,x-1,key);
    int b=last_occurence(v,x-1,key);
    vector<int>ans={a,b};
    cout<<ans[0]<<" "<<ans[1];
}
