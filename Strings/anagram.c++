#include<bits/stdc++.h>
using namespace std;
string sort(string &s,vector<int>&v)
{
    for(int i=0;i<s.size();i++)
    {
        int y=s[i];
        int x=char('a');
        v[y-x]=v[y-x]+1;
    }
     string ax="";
     for(int i=0;i<27;i++)
     {
         if(v[i]>0)
         {
            while(v[i]>0)
            {
                ax=ax+(char)(i);
                v[i]--;
            }
         }
     }
     return ax;

}
int main()
{
    string x;
    getline(cin,x);
    string y;
    getline(cin,y);
    vector<int> v(26,0);
   string s= sort(x,v);
   string str=sort(y,v);
   if(s.compare(str)==0)
   cout<<"yes"<<endl;
   else
   cout<<"No"<<endl;

}
