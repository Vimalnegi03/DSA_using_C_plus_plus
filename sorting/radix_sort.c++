#include<bits/stdc++.h>
using namespace std;
 
void count_sort(vector<int>&v,int x,int pos)
 {
    //find max element
   
    //calculate frequency
    vector<int>freq(10,0);
    for(int i=0;i<x;i++)
    {
        freq[(v[i]/pos)%10]++;
    }
    //calculate cf
    // int first=freq[0];
    for(int i=1;i<=9;i++)
    {
        freq[i]=freq[i]+freq[i-1];
    }
    //answer calculation
    vector<int>ans(x);
    for(int i=x-1;i>=0;i--)
    {
     ans[--freq[(v[i]/pos)%10]]=v[i]; 
    }
    for(int i=0;i<x;i++)
    {
        v[i]=ans[i];
    }

 }

void radix_sort(vector<int>&v,int x)
{
    int max=0;
    for(int i=0;i<x;i++)
    {
        if(max<v[i])
        {
        max=v[i];
        }
    }
    for(int pos=1;max/pos>0;pos*=10)
    {
        count_sort(v,x,pos);
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
radix_sort(v,x);
    for(int i=0;i<x;i++)
{
    cout<< v[i]<<" ";
}

}
