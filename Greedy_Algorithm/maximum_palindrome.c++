#include<bits/stdc++.h>
using namespace std;
bool isPossible(unordered_map<int,int>&mp)
{
int count=0;
for(int i=0;i<=9;i++)
{
    if(mp.count(i))
    {
        if(mp[i]%2!=0)
        count++;
        if(count>1)
        return false;
    }
}
return true;
}
string maxPalindrome(string num){
    int n=num.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
      mp[num[i]-'0']++;

    }
    if(!isPossible(mp))
    {
 return "NP";
    }
vector<char>v(n);
int front=0;
for(int i=9;i>=0;i--)
{
    if(mp[i]%2!=0)
    {
        v[n/2]=char(i+48);
        mp[i]--;
    }
    while(mp[i]>0)
    {
        v[front]=char(i+48);
        v[n-front-1]=char(i+48);
        mp[i]-=2;
        front++;
    }
}
string res="";
for(int i=0;i<v.size();i++)
{
    res+=v[i];
}
    return res;

}
int main()
{
  cout<<maxPalindrome("313551");
}
