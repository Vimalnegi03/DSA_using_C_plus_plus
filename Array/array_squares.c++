Problem Statement-:You are given an array sorted in ascending order you have to return an array of squares of elements arranged in sorted order
ex-input=[1,2,3,4]
output=[1,4,9,16]
input=[-4,-3,2,3]
output[4,9,9,16]

#include<bits/stdc++.h>
using namespace std;
        vector<int> temp;
void square(vector<int>&v,int x)
{
    int low=0;int p=0;int high=x-1;
    while(low<=high)
    {
        if(v[high]*v[high] > v[low]*v[low])
        {
           temp.push_back(v[high]*v[high]);
           high=high-1;
        }

      else{
        temp.push_back(v[low]*v[low]);
        low=low +1;
      }
    
}
}
int main()
{
    int x;
    cin>>x;
    int zero=0;
    vector<int>v;
    for(int i=0;i<x;i++)
    {
    int y;
    cin>>y;
    v.push_back(y);
    }
    square(v,x);
    reverse(temp.begin(),temp.end());
    for(int i=0;i<x;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;

}
