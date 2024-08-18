#include<bits/stdc++.h>
using namespace std;
int max_ones(string s,int k)
{
 int start=0;
 int end=0;
 int zero_count=0;
 int max_length=0;

 for(end=0;end<s.size();end++)
 {
    if(s[end]=='0')
    {
        zero_count++;
    }
    while(zero_count>k)
    {
        if(s[start]=='0')
        zero_count--;
        start++;
    }
    max_length=max(max_length,end-start+1);
 }
 return  max_length;
}
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
   int ans= max_ones(s,k);
   cout<<ans;
}
