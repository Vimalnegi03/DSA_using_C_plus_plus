#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&v,int x)
{
    for(int i=0;i<x-1;i++)
    {
        int min=v[i];int k=1;
        for(int j=i+1;j<x;j++)
        {
            if(min>v[j])
            {
                
            min=v[j]; 
            k=j;
            }
        }
        swap(v[i],v[k]);
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
   selection_sort(v,x);
    for(int i=0;i<x;i++)
   {
    cout<<v[i]<<" ";
   }
}
