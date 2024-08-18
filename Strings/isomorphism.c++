#include<bits/stdc++.h>
using namespace std;
bool isomorphic(string s, string t)
{
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);
    if(s.length()!=t.length())
    return false;
    else
    {
        for(int i=0;i<s.size();i++)
        {
          if(v1[s[i]]==v2[t[i]])
          {
          v1[s[i]]=i;
          v2[t[i]]=i;
          }
          else 
          return false;
        }
    }
    return true;
} 
int main()
{
    string  s1,s2;
    getline(cin,s1);
    getline(cin,s2);
  bool ans=  isomorphic(s1,s2);
  cout<<ans;
}
