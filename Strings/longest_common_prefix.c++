#include<bits/stdc++.h>
using namespace std;
int longest_common_prefix(vector<string>&v)
{
    sort(v.begin(),v.end());
    string start=v[0];
    string end=v[v.size()-1];
    int small=min(start.length(),end.length());
   int pointer=0;
   for(int i=0;i<small;i++)
   {
        if(start[i]==end[i])
        pointer++;
        else
        break;
   }
   return  pointer;
    
}
int main()
{
    int x;
    cin>>x;
    vector<string>v(x);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=longest_common_prefix(v);
    cout<<ans;

}
