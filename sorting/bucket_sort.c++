#include<bits/stdc++.h>
using namespace std;
void bucket_sort(vector<float>&v,int x)
{
 vector<vector<float>>bucket(x,vector<float>());
 //insert elements into bucket
 for(int i=0;i<x;i++)
 {
    int index=floor(v[i]*x);
    bucket[index].push_back(v[i]);

 }
 //sorting elements in bucket
 for(int i=0;i<x;i++)
 {if(!bucket[i].empty())
    sort(bucket[i].begin(),bucket[i].end());
 }

 //combining elements into buckets
 int k=0;
 for(int i =0;i<x;i++)
 {
    for(int j=0;j<bucket[i].size();j++)
    {
        v[k++]=bucket[i][j];
    }
 }
}
int main()
{
    int x;
    cin>>x;
    vector<float>v(x);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    bucket_sort(v,x);
     for(int i=0;i<x;i++)
    {
        cout<<v[i]<<" ";
    }

}
