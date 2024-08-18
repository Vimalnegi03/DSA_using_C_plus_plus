#include<bits/stdc++.h>
using namespace std;
string sort(string &s,vector<int>&v)
{
    for(int i=0;i<s.size();i++)
    {
        int y=s[i];
        v[y]=v[y]+1;
    }
     string ax="";
     for(int i=0;i<123;i++)
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
    vector<int> v(122,0);
   string s= sort(x,v);
   cout<<s<<endl;
}
