#include<bits/stdc++.h>
using namespace std;
 void count_sort(vector<int>&v,int x)
 {
    //find max element
    int max=v[0];
    for(int i=0;i<x;i++)
    {
      if(v[i]>max)
      {
        max=v[i];
      }
    }
    //calculate frequency
    vector<int>freq(max+1,0);
    for(int i=0;i<x;i++)
    {
        freq[v[i]]++;
    }
    //calculate cf
    // int first=freq[0];
    for(int i=1;i<=max;i++)
    {
        freq[i]=freq[i]+freq[i-1];
    }
    //answer calculation
    vector<int>ans(x);
    for(int i=x-1;i>=0;i--)
    {
     ans[--freq[v[i]]]=v[i]; 
    }
    for(int i=0;i<x;i++)
    {
        v[i]=ans[i];
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
    count_sort(v,x);
     for(int i=0;i<x;i++)
    {
        cout<<v[i]<<" ";
    }
}
